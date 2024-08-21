/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
const binary_operators = [
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
];

module.exports = grammar({
  name: "cpp2",
  conflicts: ($) => [
    [$.any_identifier],
    [$.binary_expression, $.comma_seperated_expressions],
    [$.unary_postfix_expression, $.binary_expression],
  ],

  precedences: ($) => [
    [
      $.method_call,
      $.function_call,
      $.unary_prefix_expression,
      $.binary_expression,
      // ...binary_operators,
      $.unary_postfix_expression,
    ],
    binary_operators,
  ],
  rules: {
    // TODO make ";" only optional when the declaration has a block at the end
    source_file: ($) => repeat(choice($.declaration, ";")),

    declaration: ($) =>
      seq($.identifier, choice(seq(":", $.type), $.definition)),

    definition: ($) =>
      prec.right(
        choice(
          seq(
            choice(
              ":=",
              seq(
                ":",
                optional($.metafunction_arguments),
                optional($.template_declaration_arguments),
                $.type,
                "=",
              ),
            ),
            choice($.block, $.expression),
          ),
        ),
      ),

    metafunction_arguments: ($) =>
      repeat1(seq("@", $.non_template_any_identifier)),

    template_declaration_arguments: ($) =>
      seq("<", $.function_declaration_arguments, ">"),

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

    type: ($) => choice($.function_type, $.any_identifier, $.type_type),

    type_type: ($) => "type",

    function_type: ($) =>
      seq(
        "(",
        optional($.function_declaration_arguments),
        ")",
        optional(seq("->", optional($.passing_style), $.type)),
      ),

    block: ($) => seq("{", repeat($.statement), "}"),

    statement: ($) =>
      seq(
        optional(choice($.declaration, $.return_statement, $.expression)),
        ";",
      ),

    // discard: ($) => seq("_", "=", $.definition),

    expression: ($) =>
      choice(
        $.literal,
        $.any_identifier,
        $.function_call,
        $.method_call,
        $.unary_expression,
        $.binary_expression,
        $.parenthese_expression,
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

    unary_prefix_expression: ($) =>
      // semantically the prefix operator should have have higher precedence
      // but it is easier to create a parse this way
      seq(choice("-", "+", "!"), $.expression),

    binary_expression: ($) => {
      return choice(
        ...binary_operators.map((operator) => {
          return prec.right(
            operator,
            seq($.expression, operator, $.expression),
          );
        }),
      );

      // return prec(
      //   "binary_expression",
      //   prec.right(seq($.expression, choice(), $.expression)),
      // );
    },

    parenthese_expression: ($) => seq("(", $.expression, ")"),

    comma_seperated_expressions: ($) =>
      seq($.expression, repeat(seq(",", $.expression)), optional(",")),

    function_call: ($) =>
      seq($.expression, "(", optional($.comma_seperated_expressions), ")"),

    method_call: ($) =>
      seq(
        $.expression,
        choice(".", ".."),
        $.any_identifier,
        "(",
        optional($.comma_seperated_expressions),
        ")",
      ),

    function_declaration_arguments: ($) =>
      seq(
        $.function_declaration_argument,
        repeat(seq(",", $.function_declaration_argument)),
        optional(","),
      ),

    function_declaration_argument: ($) =>
      seq(optional($.passing_style), $.declaration),

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
