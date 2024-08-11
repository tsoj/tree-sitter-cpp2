/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "cpp2",

  rules: {
    // TODO make ";" only optional when the declaration has a block at the end
    source_file: ($) => repeat(choice($.declaration, ";")),

    declaration: ($) =>
      seq($.identifier, choice(seq(":", $.type), $.definition)),

    definition: ($) =>
      prec.right(
        choice(
          seq(
            choice(":=", seq(":", $.type, "=")),
            choice($.block, $.expression),
          ),
        ),
      ),

    any_identifier: ($) => choice($.namespaced_identifier, $.identifier),

    namespaced_identifier: ($) =>
      seq(
        optional($.identifier),
        "::",
        choice($.namespaced_identifier, $.identifier),
      ),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    type: ($) => choice($.function_type, $.any_identifier),

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
      prec(
        3,
        seq(
          $.expression,
          // the reason we have &&  additionally to & is for issues
          // with conflicting tokenization with the binary operator &&
          choice("++", "--", "*", "&", "&&", "~", "$", "..."),
        ),
      ),

    unary_prefix_expression: ($) =>
      // semantically the prefix operator should have have higher precedence
      // but it is easier to create a parse this way
      prec(2, seq(choice("-", "+", "!"), $.expression)),

    binary_expression: ($) =>
      prec(
        4,
        prec.right(
          seq(
            $.expression,
            choice(
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
            ),
            $.expression,
          ),
        ),
      ),

    parenthese_expression: ($) => seq("(", $.expression, ")"),

    pass_parameters: ($) => seq($.expression, repeat(seq(",", $.expression))),

    function_call: ($) =>
      prec(5, seq($.expression, "(", optional($.pass_parameters), ")")),

    method_call: ($) =>
      prec(
        5,
        seq(
          $.expression,
          choice(".", ".."),
          $.any_identifier,
          "(",
          optional($.pass_parameters),
          ")",
        ),
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
