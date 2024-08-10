/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "cpp2",

  rules: {
    // TODO make ";" only optional when the declaration has a block at the end
    source_file: ($) => repeat(choice($.declaration, ";")),

    declaration: ($) =>
      seq(
        $.identifier,
        choice(
          seq(":", $.type, optional(seq("=", $.definition))),
          seq(":=", $.definition),
        ),
      ),

    assignment: ($) =>
      seq(
        $.any_identifier,
        choice(
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
      seq("(", optional($.parameters), ")", optional(seq("->", $.type))),

    parameters: ($) => seq($.parameter, repeat(seq(",", $.parameter))),

    parameter: ($) => seq($.identifier, ":", $.type),

    definition: ($) => choice($.block, $.expression),

    block: ($) => seq("{", repeat($.statement), "}"),

    statement: ($) =>
      seq(
        optional(choice($.declaration, $.return_statement, $.assignment)),
        ";",
      ),

    discard: ($) => seq("_", "=", $.definition),

    expression: ($) =>
      choice(
        $.literal,
        $.any_identifier,
        $.function_call,
        $.method_call,
        $.unary_expression,
        $.binary_expression,
        $.parenthese_expression,
      ),

    unary_expression: ($) =>
      choice($.unary_prefix_expression, $.unary_postfix_expression),

    unary_postfix_expression: ($) =>
      prec(
        2,
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
      prec(1, seq(choice("-", "+", "!"), $.expression)),

    binary_expression: ($) =>
      prec(
        3,
        prec.left(
          seq(
            $.expression,
            choice(
              "*",
              // "**",
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
              // "&&",
              "||",
            ),
            $.expression,
          ),
        ),
      ),

    parenthese_expression: ($) => seq("(", $.expression, ")"),

    function_call: ($) => seq($.expression, "(", optional($.arguments), ")"),

    method_call: ($) =>
      seq(
        $.expression,
        choice(".", ".."),
        $.any_identifier,
        "(",
        optional($.arguments),
        ")",
      ),

    arguments: ($) => seq($.expression, repeat(seq(",", $.expression))),

    return_statement: ($) => seq("return", $.expression),

    literal: ($) => choice($.number, $.string, $.float, $.boolean),

    number: ($) => /\d+/,
    string: ($) => /"([^"\\]|\\.)*"/,
    float: ($) => /\d+\.\d+/,
    boolean: ($) => choice("true", "false"),
  },
});
