/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
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
    [$.any_identifier],
    [$.unary_postfix_expression, $.binary_expression],
    [$.unary_prefix_expression, $.binary_expression],
    [$.function_type, $.definition],
  ],

  precedences: ($) => [
    [
      $.method_call,
      $.member_access,
      $.function_call,
      $.bracket_call,
      $.unary_postfix_expression,
      $.unary_prefix_expression,
    ],
    binary_operators,
    [$.type, $.binary_expression],
    [$.function_declaration_argument, $.expression],
    // [$.function_type, $.expression],
    [$.function_type_without_return_type, $.parentheses_expression],

    // [$.parentheses_expression, $.comma_seperated_expressions],
    // [
    //   $.function_type_without_return_type,
    //   $.comma_seperated_expressions_in_paratheses,
    // ],
    // [$.comma_seperated_expressions, $.parentheses_expression],
  ],
  rules: {
    source_file: ($) => repeat(choice($.declaration, ";")),

    declaration: ($) =>
      seq($.identifier, choice($.no_definition_declaration, $.definition)),

    no_definition_declaration: ($) => seq(":", $.type),

    definition: ($) =>
      prec.left(
        choice(
          seq(
            seq(
              ":",
              optional($.metafunction_arguments),
              optional($.template_declaration_arguments),
              choice(
                seq(optional($.type), choice("=", "==")),
                $.function_type_without_return_type,
              ),
            ),
            choice($.block, $.expression),
          ),
        ),
      ),

    metafunction_arguments: ($) =>
      repeat1(seq("@", $.non_template_any_identifier)),

    template_declaration_arguments: ($) =>
      seq("<", $.comma_seperated_declarations, ">"),

    template_call_arguments: ($) =>
      prec.right(
        seq("<", $.expression_or_comma_expressions, optional(","), ">"),
      ),

    any_identifier: ($) =>
      seq($.non_template_any_identifier, optional($.template_call_arguments)),

    non_template_any_identifier: ($) =>
      choice($.namespaced_identifier, $.identifier),

    namespaced_identifier: ($) =>
      seq(optional(" ::"), repeat1(seq($.identifier, "::")), $.identifier),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    type: ($) =>
      choice(
        $.function_type,
        seq(repeat(choice("const", "*")), $.expression),
        $.type_type,
      ),

    type_type: ($) => "type",

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
        optional(choice($.declaration, $.return_statement, $.expression)),
        ";",
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
        choice("++", "--", "*", "&", "&&", "~", "$", "..."),
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
      prec.left(
        choice(
          $.expression,
          seq($.expression, ",", $.expression_or_comma_expressions),
        ),
      ),

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
      seq(optional($.passing_style), choice($.declaration, $.any_identifier)),

    passing_style: ($) =>
      choice("in", "copy", "inout", "out", "move", "forward"),

    return_statement: ($) => seq("return", $.expression),

    literal: ($) => choice($.number, $.string, $.float, $.boolean),

    number: ($) => /\d+/,
    string: ($) => /"([^"\\]|\\.)*"/,
    float: ($) => /\d+\.\d+/,
    boolean: ($) => choice("true", "false"),
  },
});
