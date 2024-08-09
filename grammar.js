/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "cpp2",

  rules: {
    source_file: ($) => repeat($.declaration),

    declaration: ($) =>
      seq($.identifier, ":", $.type, optional(seq("=", $.definition))),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    type: ($) => choice($.function_type, $.basic_type),

    function_type: ($) =>
      seq("(", optional($.parameters), ")", optional(seq("->", $.type))),

    basic_type: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    parameters: ($) => seq($.parameter, repeat(seq(",", $.parameter))),

    parameter: ($) => seq($.identifier, ":", $.type),

    definition: ($) => choice($.block, $.expression),

    block: ($) => seq("{", repeat($.statement), "}"),

    statement: ($) => seq(choice($.declaration, $.return_statement), ";"),

    expression: ($) => choice($.number, $.identifier),

    return_statement: ($) => seq("return", $.expression),

    number: ($) => /\d+/,
  },
});
