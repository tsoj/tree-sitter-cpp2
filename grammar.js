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
    [$.binary_expression, $.comma_seperated_expressions],
    [$.unary_postfix_expression, $.binary_expression],
    [$.unary_prefix_expression, $.binary_expression],
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
    [$.definition, $.function_type],
    [$.type, $.binary_expression],
    [$.expression, $.function_declaration_argument],
    // [
    //   $.function_type_without_return_type,
    //   $.comma_seperated_expressions_in_paratheses,
    // ],
    // [$.comma_seperated_expressions, $.parentheses_expression],
    binary_operators,
  ],
  rules: {
    source_file: ($) => repeat(choice($.declaration, ";")),

    declaration: ($) =>
      seq($.identifier, choice(seq(":", $.type), $.definition)),

    definition: ($) =>
      prec.right(
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

    template_comma_seperated_expressions: ($) =>
      prec.right(seq("<", $.comma_seperated_expressions, ">")),

    any_identifier: ($) =>
      seq(
        $.non_template_any_identifier,
        optional($.template_comma_seperated_expressions),
      ),

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
      seq("(", optional($.comma_seperated_declarations), ")"),

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
        // $.comma_seperated_expressions_in_paratheses,
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

    parentheses_expression: ($) => seq("(", $.expression, ")"),

    comma_seperated_expressions: ($) =>
      seq($.expression, repeat(seq(",", $.expression)), optional(",")),

    comma_seperated_expressions_in_paratheses: ($) =>
      seq("(", optional($.comma_seperated_expressions), ")"),

    function_call: ($) =>
      seq($.expression, $.comma_seperated_expressions_in_paratheses),

    bracket_call: ($) =>
      seq($.expression, "[", optional($.comma_seperated_expressions), "]"),

    method_call: ($) =>
      seq(
        $.expression,
        choice(".", ".."),
        $.any_identifier,
        $.comma_seperated_expressions_in_paratheses,
      ),

    member_access: ($) =>
      seq($.expression, choice(".", ".."), $.any_identifier),

    comma_seperated_declarations: ($) =>
      seq(
        $.function_declaration_argument,
        repeat(seq(",", $.function_declaration_argument)),
        optional(","),
      ),

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
