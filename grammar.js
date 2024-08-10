/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "cpp2",

  rules: {
    source_file: ($) => repeat($.declaration),

    declaration: ($) =>
      seq($.identifier, ":", $.type, optional(seq("=", $.definition))),

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
      seq(optional(choice($.declaration, $.return_statement)), ";"),

    discard: ($) => seq("_", "=", $.definition),

    expression: ($) =>
      choice($.literal, $.any_identifier, $.function_call, $.method_call),

    function_call: ($) =>
      seq($.any_identifier, "(", optional($.arguments), ")"),

    method_call: ($) =>
      seq(
        $.any_identifier,
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
