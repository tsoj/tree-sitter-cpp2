/// <reference cpp2_types="tree-sitter-cli/dsl" />
// @ts-check

const CPP1 = require("tree-sitter-cpp/grammar");

const cpp2_unary_operators = ["++", "--", "*", "&", "&&", "~", "$", "..."];

const cpp2_binary_operators = [
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

const cpp2_passing_styles = ["in", "copy", "inout", "out", "move", "forward"];

const cpp2_keyword_passing_styles = [
  "virtual",
  "override",
  "final",
  "implicit",
];

const cpp2_non_keyword_words = [...cpp2_passing_styles];

module.exports = grammar(CPP1, {
  name: "cpp2",

  // C++
  externals: ($) => [$.raw_string_delimiter, $.raw_string_content],

  conflicts: ($) => [
    // C
    [$.type_specifier, $._declarator],
    [$.type_specifier, $.expression],
    [$.sized_type_specifier],
    [$.attributed_statement],
    [$._declaration_modifiers, $.attributed_statement],
    [$._top_level_item, $._top_level_statement],
    [$._block_item, $.statement],

    // C++
    [$.template_function, $.template_type],
    [$.template_function, $.template_type, $.expression],
    [$.template_function, $.template_type, $.qualified_identifier],
    [$.template_type, $.qualified_type_identifier],
    [$.qualified_type_identifier, $.qualified_identifier],
    [$.comma_expression, $.initializer_list],
    [$.expression, $._declarator],
    [$.expression, $.structured_binding_declarator],
    [$.expression, $._declarator, $.type_specifier],
    [$.parameter_list, $.argument_list],
    [$.type_specifier, $.call_expression],
    [$._declaration_specifiers, $._constructor_specifiers],
    [$._binary_fold_operator, $._fold_operator],
    [$._function_declarator_seq],
    [$.type_specifier, $.sized_type_specifier],
    [$.initializer_pair, $.comma_expression],
    [$.expression_statement, $._for_statement_body],
    [$.init_statement, $._for_statement_body],
    [$.field_expression, $.template_method, $.template_type],
    [$.qualified_field_identifier, $.template_method, $.template_type],

    // Cpp2 vs C++
    // [$.type_qualifier, $.cpp2_type],
    [$.expression, $.cpp2_ordinary_identifier],
    [$.type_specifier, $.cpp2_ordinary_identifier],
    [$.template_type, $.cpp2_ordinary_identifier],

    // Cpp2
    [$.cpp2_no_namespace_identifier, $.cpp2_template_identifier],
    [$.cpp2_unary_postfix_expression, $.cpp2_binary_expression],
    [$.cpp2_unary_prefix_expression, $.cpp2_binary_expression],
    [$.cpp2_function_type, $.cpp2_left_side_of_definition],
    [$.cpp2_declaration, $.cpp2_block_statement],
    [$.cpp2_block_loop, $.cpp2_do_while_statement],
    [$.cpp2_declaration_left_side, $.cpp2_non_block_loop, $.cpp2_block_loop],
    [$.cpp2_declaration_left_side, $.cpp2_block_loop],
    [$.cpp2_type, $.cpp2_unary_postfix_expression, $.cpp2_binary_expression],
    [$.cpp2_left_side_of_definition, $.cpp2_binary_expression],
    [$.cpp2_declaration_left_side, $.cpp2_no_namespace_identifier],
    [$.cpp2_ordinary_identifier, $.cpp2_passing_style],
    [$.cpp2_passing_style],
    [$.cpp2_no_definition_declaration, $.cpp2_left_side_of_definition],
    [$.cpp2_no_definition_declaration, $.cpp2_function_call],
    [$.cpp2_no_definition_declaration, $.cpp2_unary_postfix_expression],
    [$.cpp2_no_definition_declaration, $.cpp2_binary_expression],
    [
      $.cpp2_no_definition_declaration,
      $.cpp2_unary_postfix_expression,
      $.cpp2_binary_expression,
    ],
    [$.cpp2_no_definition_declaration, $.cpp2_bracket_call],
  ],

  precedences: ($) => [
    // C++
    [$.argument_list, $.type_qualifier],
    [$._expression_not_binary, $._class_name],

    // Cpp2
    [
      $.cpp2_method_call,
      $.cpp2_member_access,
      $.cpp2_function_call,
      $.cpp2_bracket_call,
      $.cpp2_unary_postfix_expression,
      $.cpp2_unary_prefix_expression,
      $.cpp2_type,
    ],
    cpp2_binary_operators,
    [$.cpp2_type, $.cpp2_binary_expression],
    [$.cpp2_function_declaration_argument, $.cpp2_expression],
    [$.cpp2_function_type_without_return_type, $.cpp2_parentheses_expression],
    [$.cpp2_comma_expressions, $.cpp2_expression_or_comma_expressions],
    [$.cpp2_expression_or_comma_expressions, $.cpp2_type],
    [$.cpp2_block_statement, $.cpp2_definition],
    [$.cpp2_binary_expression, $.cpp2_expression_definition],
    [$.cpp2_operator_keyword, $._const_and_star],
    [$.cpp2_operator_keyword, $.cpp2_unary_prefix_expression],
    [$.cpp2_operator_keyword, $.cpp2_expansion_dots],
    [$._const_and_star, $.type_qualifier],
    // [$.cpp2_declaration, $.translation_unit],
  ],

  rules: {
    _top_level_item: ($, original) =>
      choice(
        //
        // C
        $.function_definition,
        $.linkage_specification,
        $.declaration,
        // $._top_level_statement,
        choice(
          $.case_statement,
          $.attributed_statement,
          // $.labeled_statement,
          $.compound_statement,
          alias($._top_level_expression_statement, $.expression_statement),
          $.if_statement,
          $.switch_statement,
          $.do_statement,
          $.while_statement,
          $.for_statement,
          $.return_statement,
          $.break_statement,
          $.continue_statement,
          $.goto_statement,
        ),
        $.attributed_statement,
        $.type_definition,
        $._empty_declaration,
        $.preproc_if,
        $.preproc_ifdef,
        $.preproc_include,
        $.preproc_def,
        $.preproc_function_def,
        $.preproc_call,

        // // C++
        $.namespace_definition,
        $.concept_definition,
        $.namespace_alias_definition,
        $.using_declaration,
        $.alias_declaration,
        $.static_assert_declaration,
        $.template_declaration,
        $.template_instantiation,
        alias($.constructor_or_destructor_definition, $.function_definition),
        alias($.operator_cast_definition, $.function_definition),
        alias($.operator_cast_declaration, $.declaration),

        // original,
        seq("/**/", original),
        // Cpp2
        ";",
        $.cpp2_declaration,
      ),

    // cpp2_source_file: ($) => repeat(choice($.cpp2_declaration, ";")),

    cpp2_declaration: ($) =>
      choice(
        $.cpp2_no_definition_declaration,
        $.cpp2_block_declaration,
        $.cpp2_expression_declaration,
      ),

    cpp2_block_declaration: ($) =>
      seq($.cpp2_declaration_left_side, $.cpp2_block_definition),

    cpp2_expression_declaration: ($) =>
      seq($.cpp2_declaration_left_side, $.cpp2_expression_definition),

    cpp2_no_definition_declaration: ($) =>
      seq(
        $.cpp2_declaration_left_side,
        ":",
        optional($.cpp2_metafunction_arguments),
        optional($.cpp2_template_declaration_arguments),
        $.cpp2_type,
        optional(seq("requires", $.cpp2_expression)),
      ),

    cpp2_declaration_left_side: ($) =>
      seq(
        optional(choice("public", "protected", "private")),
        $.cpp2_non_template_identifier,
        optional("..."),
      ),

    cpp2_definition: ($) =>
      choice($.cpp2_block_definition, $.cpp2_expression_definition),

    cpp2_block_definition: ($) =>
      prec.left(seq($.cpp2_left_side_of_definition, $.cpp2_block)),

    cpp2_expression_definition: ($) =>
      prec.left(seq($.cpp2_left_side_of_definition, $.cpp2_expression)),

    // TODO remove duplication of cpp2_no_definition_declaration and cpp2_definition_declaration
    cpp2_left_side_of_definition: ($) =>
      seq(
        ":",
        optional($.cpp2_metafunction_arguments),
        optional($.cpp2_template_declaration_arguments),
        choice(
          seq(
            optional(
              seq($.cpp2_type, optional(seq("requires", $.cpp2_expression))),
            ),
            repeat(
              seq(
                choice("pre", "post"),
                optional($.cpp2_template_call_arguments),
                $.cpp2_parentheses_expression,
              ),
            ),
            choice("=", "=="),
          ),
          $.cpp2_function_type_without_return_type,
        ),
      ),

    cpp2_metafunction_arguments: ($) =>
      repeat1(seq("@", $.cpp2_any_identifier)),

    // we need this to prefer closing templates to the >> operator
    _template_close_token: ($) => alias(token(prec(1, ">")), "> template"),

    cpp2_template_declaration_arguments: ($) =>
      seq("<", $.cpp2_comma_seperated_declarations, $._template_close_token),

    cpp2_template_call_arguments: ($) =>
      prec.right(
        seq(
          "<",
          $.cpp2_expression_or_comma_expressions,
          optional(","),
          $._template_close_token,
        ),
      ),

    cpp2_any_identifier: ($) =>
      prec.left(
        choice($.cpp2_no_namespace_identifier, $.cpp2_namespaced_identifier),
      ),

    cpp2_namespaced_identifier: ($) =>
      prec.left(
        seq(
          choice(seq($.cpp2_no_namespace_identifier, "::"), " ::"),
          $.cpp2_no_namespace_identifier,
          repeat(seq("::", $.cpp2_no_namespace_identifier)),
        ),
      ),

    cpp2_no_namespace_identifier: ($) =>
      choice($.cpp2_non_template_identifier, $.cpp2_template_identifier),

    cpp2_template_identifier: ($) =>
      seq($.cpp2_non_template_identifier, $.cpp2_template_call_arguments),

    cpp2_non_template_identifier: ($) =>
      choice($.cpp2_operator_keyword, $.cpp2_ordinary_identifier),

    cpp2_ordinary_identifier: ($) =>
      choice(...cpp2_non_keyword_words, $.identifier),

    cpp2_operator_keyword: ($) =>
      seq(
        "operator",
        choice(
          $.cpp2_type,
          seq("new", "[]"),
          seq("delete", "[]"),
          ...[
            ...new Set([
              ...cpp2_binary_operators,
              ...cpp2_unary_operators,
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

    cpp2_type: ($) =>
      choice(
        seq(
          optional($._const_and_star),
          choice($.cpp2_expression, $.cpp2_function_type),
        ),
        $.cpp2_type_type,
        $.cpp2_namespace_type,
      ),

    _const_and_star: ($) => repeat1(choice("const", "*")),

    cpp2_type_type: ($) => "cpp2_type",
    cpp2_namespace_type: ($) => "namespace",

    cpp2_function_type_without_return_type: ($) =>
      seq(
        "(",
        optional($.cpp2_comma_seperated_declarations),
        optional(","),
        ")",
      ),

    cpp2_comma_seperated_declarations: ($) =>
      prec.right(
        seq(
          $.cpp2_function_declaration_argument,
          repeat(seq(",", $.cpp2_function_declaration_argument)),
        ),
      ),

    cpp2_function_type: ($) =>
      seq(
        $.cpp2_function_type_without_return_type,
        optional(seq("->", optional($.cpp2_passing_style), $.cpp2_type)),
      ),

    cpp2_block: ($) => seq("{", repeat($.cpp2_statement), "}"),

    cpp2_statement: ($) =>
      seq(
        optional($.cpp2_function_type_without_return_type),
        choice(
          $.cpp2_block_statement,
          seq(optional($.cpp2_non_cpp2_block_statement), ";"),
        ),
      ),

    cpp2_non_cpp2_block_statement: ($) =>
      choice(
        $.cpp2_declaration,
        $.cpp2_return_statement,
        $.cpp2_continue_statement,
        $.cpp2_break_statement,
        $.cpp2_using_statement,
        $.cpp2_expression,
        $.cpp2_non_block_loop,
      ),

    cpp2_block_statement: ($) =>
      choice(
        $.cpp2_block_declaration,
        $.cpp2_block_definition,
        $.cpp2_block,
        $.cpp2_if_else_statement,
        $.cpp2_block_loop,
      ),

    cpp2_non_block_loop: ($) =>
      seq(
        optional(seq($.cpp2_non_template_identifier, ":")),
        $.cpp2_do_while_statement,
      ),

    cpp2_block_loop: ($) =>
      seq(
        optional(seq($.cpp2_non_template_identifier, ":")),
        choice(
          $.cpp2_while_statement,
          $.cpp2_for_statement,
          $.cpp2_do_statement,
        ),
      ),

    cpp2_if_else_statement: ($) =>
      prec.left(
        seq(
          "if",
          $.cpp2_expression,
          $.cpp2_block_statement,
          optional(seq("else", $.cpp2_block_statement)),
        ),
      ),

    cpp2_while_statement: ($) =>
      seq(
        "while",
        $.cpp2_expression,
        optional(seq("next", $.cpp2_expression)),
        $.cpp2_block_statement,
      ),

    cpp2_for_statement: ($) =>
      seq(
        "for",
        $.cpp2_expression,
        optional(seq("next", $.cpp2_expression)),
        "do",
        $.cpp2_function_type_without_return_type,
        $.cpp2_block_statement,
      ),

    cpp2_do_statement: ($) => seq("do", $.cpp2_block_statement),

    cpp2_do_while_statement: ($) =>
      seq(
        $.cpp2_do_statement,
        optional(seq("next", $.cpp2_expression)),
        "while",
        $.cpp2_expression,
      ),

    cpp2_expression: ($) =>
      choice(
        $.cpp2_literal,
        $.cpp2_any_identifier,
        $.cpp2_function_call,
        $.cpp2_method_call,
        $.cpp2_member_access,
        $.cpp2_bracket_call,
        $.cpp2_unary_expression,
        $.cpp2_binary_expression,
        $.cpp2_parentheses_expression,
        $.cpp2_definition,
        $.cpp2_expansion_dots,
      ),

    cpp2_expansion_dots: ($) => "...",

    cpp2_unary_expression: ($) =>
      choice($.cpp2_unary_prefix_expression, $.cpp2_unary_postfix_expression),

    cpp2_unary_postfix_expression: ($) =>
      seq(
        $.cpp2_expression,
        // the reason we have &&  additionally to & is for issues
        // with conflicting tokenization with the binary operator &&
        choice(...cpp2_unary_operators),
      ),

    cpp2_unary_prefix_expression: ($) =>
      seq(choice("-", "+", "!"), $.cpp2_expression),

    cpp2_binary_expression: ($) => {
      return choice(
        ...cpp2_binary_operators.map((operator) => {
          return prec.right(
            operator,
            seq($.cpp2_expression, operator, $.cpp2_expression),
          );
        }),
      );
    },

    cpp2_expression_or_comma_expressions: ($) =>
      prec.left(
        choice($.cpp2_type, $.cpp2_expression, $.cpp2_comma_expressions),
      ),

    cpp2_comma_expressions: ($) =>
      seq(
        choice($.cpp2_expression, $.cpp2_type),
        ",",
        $.cpp2_expression_or_comma_expressions,
      ),

    cpp2_parentheses_expression: ($) =>
      seq(
        "(",
        optional($.cpp2_expression_or_comma_expressions),
        optional(","),
        ")",
      ),

    cpp2_function_call: ($) =>
      seq($.cpp2_expression, $.cpp2_parentheses_expression),

    cpp2_bracket_call: ($) =>
      seq(
        $.cpp2_expression,
        "[",
        optional($.cpp2_expression_or_comma_expressions),
        optional(","),
        "]",
      ),

    cpp2_method_call: ($) =>
      seq(
        $.cpp2_expression,
        choice(".", ".."),
        $.cpp2_any_identifier,
        $.cpp2_parentheses_expression,
      ),

    cpp2_member_access: ($) =>
      seq($.cpp2_expression, choice(".", ".."), $.cpp2_any_identifier),

    cpp2_function_declaration_argument: ($) =>
      seq(
        optional($.cpp2_passing_style),
        choice($.cpp2_declaration, $.cpp2_any_identifier),
      ),

    cpp2_passing_style: ($) =>
      repeat1(choice(...cpp2_passing_styles, ...cpp2_keyword_passing_styles)),

    cpp2_return_statement: ($) => seq("return", optional($.cpp2_expression)),
    cpp2_continue_statement: ($) =>
      seq("continue", optional($.cpp2_expression)),
    cpp2_break_statement: ($) => seq("break", optional($.cpp2_expression)),
    cpp2_using_statement: ($) => seq("using", optional($.cpp2_expression)),

    cpp2_literal: ($) =>
      choice($.cpp2_number, $.cpp2_string, $.cpp2_float, $.cpp2_boolean),

    cpp2_number: ($) => /\d+/,
    cpp2_string: ($) => /"([^"\\]|\\.)*"/,
    cpp2_float: ($) => /\d+\.\d+/,
    cpp2_boolean: ($) => choice("true", "false"),
  },
});
