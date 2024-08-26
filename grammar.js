/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "cpp2",
  conflicts: ($) => [[$.identifier]],

  precedences: ($) => [
    [$.method_call, $.member_access, $.function_call, $.bracket_call],
    [$.function_type, $.definition],
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
      prec.right(
        choice(
          seq(
            seq(":", $.function_type_without_return_type),
            choice($.block, $.expression),
          ),
        ),
      ),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    type: ($) => choice($.function_type, $.expression),

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

    function_type: ($) => seq($.function_type_without_return_type),

    block: ($) => seq("{", repeat($.statement), "}"),

    statement: ($) => seq(optional(choice($.declaration, $.expression)), ";"),

    expression: ($) => choice($.identifier, $.parentheses_expression),

    parentheses_expression: ($) =>
      seq("(", optional($.expression), optional(","), ")"),

    function_call: ($) => seq($.expression, $.parentheses_expression),

    bracket_call: ($) =>
      seq($.expression, "[", optional($.expression), optional(","), "]"),

    method_call: ($) =>
      seq(
        $.expression,
        choice(".", ".."),
        $.identifier,
        $.parentheses_expression,
      ),

    member_access: ($) => seq($.expression, choice(".", ".."), $.identifier),

    function_declaration_argument: ($) =>
      seq(choice($.declaration, $.identifier)),
  },
});
