/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const unary_operators = ["++", "--", "*", "&", "&&", "~", "$", "..."];
const binary_operators = [
  "*",
  "/",
  "%",
  "+",
  "-",
  "<<",
  ">>",
  "<=>",
  "<",
  ">",
  "<=",
  ">=",
  "==",
  "!=",
  "&",
  "^",
  "|",
  "&&",
  "||",
  "..<",
  "..=",
  // assignment operators
  "=",
  "*=",
  "/=",
  "%=",
  "+=",
  "-=",
  ">>=",
  "<<=",
  "&=",
  "^=",
  "|=",
];

module.exports = grammar({
  name: "cpp2",
  conflicts: ($) => [
    [$.no_namespace_identifier, $.template_identifier],
    [$.unary_postfix_expression, $.binary_expression],
    [$.unary_prefix_expression, $.binary_expression],
    [$.function_type, $.left_side_of_definition],
    [$.declaration, $.block_statement],
    [$.block_loop, $.do_while_statement],
    [$.declaration_left_side, $.non_block_loop, $.block_loop],
    [$.declaration_left_side, $.block_loop],
    [$.type, $.unary_postfix_expression, $.binary_expression],
  ],

  precedences: ($) => [
    [
      $.method_call,
      $.member_access,
      $.function_call,
      $.bracket_call,
      $.unary_postfix_expression,
      $.unary_prefix_expression,
      $.type,
    ],
    binary_operators,
    [$.type, $.binary_expression],
    [$.function_declaration_argument, $.expression],
    [$.function_type_without_return_type, $.parentheses_expression],
    [$.comma_expressions, $.expression_or_comma_expressions],
    [$.expression_or_comma_expressions, $.type],
    [$.block_statement, $.definition],
    [$.binary_expression, $.expression_definition],
    [$.operator_keyword, $._const_and_star],
    [$.operator_keyword, $.unary_prefix_expression],
  ],

  rules: {
    source_file: ($) => repeat(choice($.declaration, ";")),

    declaration: ($) =>
      choice(
        $.no_definition_declaration,
        $.block_declaration,
        $.expression_declaration,
      ),

    block_declaration: ($) => seq($.declaration_left_side, $.block_definition),

    expression_declaration: ($) =>
      seq($.declaration_left_side, $.expression_definition),

    no_definition_declaration: ($) => seq($.declaration_left_side, ":", $.type),

    declaration_left_side: ($) =>
      seq(
        optional(choice("public", "protected", "private")),
        $.non_template_identifier,
      ),

    definition: ($) => choice($.block_definition, $.expression_definition),

    block_definition: ($) => prec.left(seq($.left_side_of_definition, $.block)),

    expression_definition: ($) =>
      prec.left(seq($.left_side_of_definition, $.expression)),

    left_side_of_definition: ($) =>
      seq(
        ":",
        optional($.metafunction_arguments),
        optional($.template_declaration_arguments),
        choice(
          seq(
            optional($.type),
            repeat(
              seq(
                choice("pre", "post"),
                optional($.template_call_arguments),
                $.parentheses_expression,
              ),
            ),
            choice("=", "=="),
          ),
          $.function_type_without_return_type,
        ),
      ),

    metafunction_arguments: ($) => repeat1(seq("@", $.any_identifier)),

    // we need this to prefer closing templates to the >> operator
    _template_close_token: ($) => alias(token(prec(1, ">")), "> template"),

    template_declaration_arguments: ($) =>
      seq("<", $.comma_seperated_declarations, $._template_close_token),

    template_call_arguments: ($) =>
      prec.right(
        seq(
          "<",
          $.expression_or_comma_expressions,
          optional(","),
          $._template_close_token,
        ),
      ),

    any_identifier: ($) =>
      prec.left(choice($.no_namespace_identifier, $.namespaced_identifier)),

    namespaced_identifier: ($) =>
      prec.left(
        seq(
          choice(seq($.no_namespace_identifier, "::"), " ::"),
          $.no_namespace_identifier,
          repeat(seq("::", $.no_namespace_identifier)),
        ),
      ),

    no_namespace_identifier: ($) =>
      choice($.non_template_identifier, $.template_identifier),

    template_identifier: ($) =>
      seq($.non_template_identifier, $.template_call_arguments),

    non_template_identifier: ($) =>
      choice($.operator_keyword, $.ordinary_identifier),

    ordinary_identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    operator_keyword: ($) =>
      seq(
        "operator",
        choice(
          $.type,
          seq("new", "[]"),
          seq("delete", "[]"),
          ...[
            ...new Set([
              ...binary_operators,
              ...unary_operators,
              "co_await",
              "new",
              "delete",
              '""',
            ]),
          ].map((operator) => {
            return operator;
          }),
        ),
      ),

    type: ($) =>
      choice(
        seq(optional($._const_and_star), choice($.expression, $.function_type)),
        $.type_type,
        $.namespace_type,
      ),

    _const_and_star: ($) => repeat1(choice("const", "*")),

    type_type: ($) => "type",
    namespace_type: ($) => "namespace",

    function_type_without_return_type: ($) =>
      seq("(", optional($.comma_seperated_declarations), optional(","), ")"),

    comma_seperated_declarations: ($) =>
      prec.right(
        seq(
          $.function_declaration_argument,
          repeat(seq(",", $.function_declaration_argument)),
        ),
      ),

    function_type: ($) =>
      seq(
        $.function_type_without_return_type,
        optional(seq("->", optional($.passing_style), $.type)),
      ),

    block: ($) => seq("{", repeat($.statement), "}"),

    statement: ($) =>
      seq(
        optional($.function_type_without_return_type),
        choice($.block_statement, seq(optional($.non_block_statement), ";")),
      ),

    non_block_statement: ($) =>
      choice(
        $.declaration,
        $.return_statement,
        $.continue_statement,
        $.break_statement,
        $.using_statement,
        $.expression,
        $.non_block_loop,
      ),

    block_statement: ($) =>
      choice(
        $.block_declaration,
        $.block_definition,
        $.block,
        $.if_else_statement,
        $.block_loop,
      ),

    non_block_loop: ($) =>
      seq(optional(seq($.non_template_identifier, ":")), $.do_while_statement),

    block_loop: ($) =>
      seq(
        optional(seq($.non_template_identifier, ":")),
        choice($.while_statement, $.for_statement, $.do_statement),
      ),

    if_else_statement: ($) =>
      prec.left(
        seq(
          "if",
          $.expression,
          $.block_statement,
          optional(seq("else", $.block_statement)),
        ),
      ),

    while_statement: ($) =>
      seq(
        "while",
        $.expression,
        optional(seq("next", $.expression)),
        $.block_statement,
      ),

    for_statement: ($) =>
      seq(
        "for",
        $.expression,
        optional(seq("next", $.expression)),
        "do",
        $.function_type_without_return_type,
        $.block_statement,
      ),

    do_statement: ($) => seq("do", $.block_statement),

    do_while_statement: ($) =>
      seq(
        $.do_statement,
        optional(seq("next", $.expression)),
        "while",
        $.expression,
      ),

    expression: ($) =>
      choice(
        $.literal,
        $.any_identifier,
        $.function_call,
        $.method_call,
        $.member_access,
        $.bracket_call,
        $.unary_expression,
        $.binary_expression,
        $.parentheses_expression,
        $.definition,
      ),

    unary_expression: ($) =>
      choice($.unary_prefix_expression, $.unary_postfix_expression),

    unary_postfix_expression: ($) =>
      seq(
        $.expression,
        // the reason we have &&  additionally to & is for issues
        // with conflicting tokenization with the binary operator &&
        choice(...unary_operators),
      ),

    unary_prefix_expression: ($) => seq(choice("-", "+", "!"), $.expression),

    binary_expression: ($) => {
      return choice(
        ...binary_operators.map((operator) => {
          return prec.right(
            operator,
            seq($.expression, operator, $.expression),
          );
        }),
      );
    },

    expression_or_comma_expressions: ($) =>
      prec.left(choice($.type, $.expression, $.comma_expressions)),

    comma_expressions: ($) =>
      seq(choice($.expression, $.type), ",", $.expression_or_comma_expressions),

    parentheses_expression: ($) =>
      seq("(", optional($.expression_or_comma_expressions), optional(","), ")"),

    function_call: ($) => seq($.expression, $.parentheses_expression),

    bracket_call: ($) =>
      seq(
        $.expression,
        "[",
        optional($.expression_or_comma_expressions),
        optional(","),
        "]",
      ),

    method_call: ($) =>
      seq(
        $.expression,
        choice(".", ".."),
        $.any_identifier,
        $.parentheses_expression,
      ),

    member_access: ($) =>
      seq($.expression, choice(".", ".."), $.any_identifier),

    function_declaration_argument: ($) =>
      seq(repeat($.passing_style), choice($.declaration, $.any_identifier)),

    passing_style: ($) =>
      choice(
        "in",
        "copy",
        "inout",
        "out",
        "move",
        "forward",
        "virtual",
        "override",
        "final",
        "implicit",
      ),

    virtual_style: ($) => choice(),

    return_statement: ($) => seq("return", optional($.expression)),
    continue_statement: ($) => seq("continue", optional($.expression)),
    break_statement: ($) => seq("break", optional($.expression)),
    using_statement: ($) => seq("using", optional($.expression)),

    literal: ($) => choice($.number, $.string, $.float, $.boolean),

    number: ($) => /\d+/,
    string: ($) => /"([^"\\]|\\.)*"/,
    float: ($) => /\d+\.\d+/,
    boolean: ($) => choice("true", "false"),
  },
});
