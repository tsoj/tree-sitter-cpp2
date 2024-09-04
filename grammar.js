/// <reference cpp2_types="tree-sitter-cli/dsl" />
// @ts-check

const CPP1 = require("tree-sitter-cpp/grammar");

const cpp2_prefix_operators = ["-", "+", "!"];
const cpp2_postfix_operators = ["++", "--", "*", "&", "&&", "~", "$", "..."];

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
  "is",
  "as",
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

const cpp2_non_keyword_words = [
  ...cpp2_passing_styles,
  "union",
  "type",
  "inspect",
];

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
    [$.expression, $.cpp2_ordinary_identifier],
    [$.type_specifier, $.cpp2_ordinary_identifier],
    [$.template_type, $.cpp2_ordinary_identifier],
    [$.concatenated_string, $.cpp2_ordinary_identifier],
    [$.type_specifier, $.cpp2_primitive_type],
    [$.cpp2_ordinary_identifier, $.labeled_statement],
    [$._unary_left_fold, $.cpp2_expansion_dots],
    [$.type_specifier, $.call_expression, $.cpp2_primitive_type],
    [$.expression, $.cpp2_literal],
    [$.expression, $.cpp2_keyword],
    [$._declarator, $.type_specifier, $.expression, $.cpp2_ordinary_identifier],
    [$.type_specifier, $.expression, $.cpp2_ordinary_identifier],
    [
      $.expression,
      $.template_type,
      $.template_function,
      $.cpp2_ordinary_identifier,
    ],
    [$.call_expression, $.cpp2_primitive_type],
    [$.user_defined_literal, $.cpp2_user_defined_literal],
    [$.union_specifier, $.cpp2_ordinary_identifier],
    [$.raw_string_literal, $.cpp2_raw_string_literal],

    // Cpp2
    [$.cpp2_no_namespace_identifier, $.cpp2_template_identifier],
    [$.cpp2_unary_postfix_expression, $.cpp2_binary_expression],
    [$.cpp2_unary_prefix_expression, $.cpp2_binary_expression],
    [$.cpp2_block_loop, $.cpp2_do_while_statement],
    [$._cpp2_declaration_left_side, $.cpp2_non_block_loop, $.cpp2_block_loop],
    [$._cpp2_declaration_left_side, $.cpp2_block_loop],
    [$.cpp2_type, $.cpp2_unary_postfix_expression, $.cpp2_binary_expression],
    [$._cpp2_declaration_left_side, $.cpp2_no_namespace_identifier],
    [$.cpp2_ordinary_identifier, $.cpp2_passing_style],
    [$.cpp2_passing_style],
    [$.cpp2_function_declaration_argument, $.cpp2_expression],
    [$.cpp2_function_type],
    [$.cpp2_number_literal],
    [$.cpp2_type],
    [$.cpp2_binary_expression, $.cpp2_function_type],
    [$.cpp2_expression, $.cpp2_dot_access],
  ],

  precedences: ($) => [
    // C++
    [$.argument_list, $.type_qualifier],
    [$._expression_not_binary, $._class_name],

    // Cpp2
    [
      $.cpp2_function_call,
      $.cpp2_bracket_call,
      $.cpp2_dot_access,
      $.cpp2_unary_postfix_expression,
      $.cpp2_unary_prefix_expression,
      $.cpp2_operator_keyword,
      $.cpp2_function_type,
      $.cpp2_type,
      $.cpp2_expression_definition,
    ],
    cpp2_binary_operators,
    [$.cpp2_type, $.cpp2_binary_expression],
    [$.cpp2_function_type_without_return_type, $.cpp2_parentheses_expression],
    [$._cpp2_block_statement, $.cpp2_expression],
    [$.cpp2_const_and_star, $.type_qualifier],
    [$.cpp2_keyword, $.cpp2_expression],
    [$.cpp2_operator_keyword, $.cpp2_expression],
    [$.cpp2_operator_keyword, $.cpp2_const_and_star],
    [$.cpp2_expansion_dots, $.cpp2_operator_keyword],
    [$.cpp2_binary_expression, $.cpp2_operator_keyword],
    [$.cpp2_left_side_of_definition, $.cpp2_function_type],
    [$.cpp2_function_type, $.cpp2_statement],
    [$.cpp2_left_side_of_definition, $.cpp2_binary_expression],
    [$.cpp2_binary_expression, $.cpp2_expression_definition],
    [$.cpp2_type_type, $.cpp2_namespace_type, $.cpp2_ordinary_identifier],
    [$.cpp2_inspect, $.cpp2_ordinary_identifier],
    [$._cpp2_normal_type_or_hardcode_type, $.cpp2_binary_expression],
  ],

  extras: ($) => [/\s|\\\r?\n/, $.comment, $.macro_comment],

  rules: {
    _top_level_item: ($, original) =>
      choice(
        original,
        ";",
        $.cpp2_block_declaration,
        seq($._cpp2_no_block_declaration, ";"),

        // this is only really here to parse cases like `v := :() -> bool = true;();` at least without error
        $.cpp2_parentheses_expression,
      ),

    _cpp2_no_block_declaration: ($) =>
      choice($.cpp2_no_definition_declaration, $.cpp2_expression_declaration),

    cpp2_block_declaration: ($) =>
      seq($._cpp2_declaration_left_side, $.cpp2_block_definition),

    cpp2_expression_declaration: ($) =>
      seq($._cpp2_declaration_left_side, $.cpp2_expression_definition),

    cpp2_no_definition_declaration: ($) =>
      seq(
        $._cpp2_declaration_left_side,
        ":",
        optional(field("metafunctions", $.cpp2_metafunction_arguments)),
        optional(field("template", $.cpp2_template_declaration_arguments)),
        optional(field("type", $._cpp2_normal_type_or_hardcode_type)),
        optional(field("requires", seq("requires", $.cpp2_expression))),
      ),

    _cpp2_declaration_left_side: ($) =>
      seq(
        optional(choice("public", "protected", "private")),
        field("name", $.cpp2_non_template_identifier),
        optional("..."),
      ),

    cpp2_block_definition: ($) =>
      prec.left(seq($.cpp2_left_side_of_definition, $.cpp2_block)),

    cpp2_expression_definition: ($) =>
      prec.left(
        seq($.cpp2_left_side_of_definition, $.cpp2_expression, optional(";")),
      ),

    // TODO try to remove duplication with cpp2_no_definition_declaration
    cpp2_left_side_of_definition: ($) =>
      seq(
        ":",
        optional(field("metafunctions", $.cpp2_metafunction_arguments)),
        optional(field("template", $.cpp2_template_declaration_arguments)),
        choice(
          seq(
            optional(
              seq(
                field("type", $._cpp2_normal_type_or_hardcode_type),
                optional(seq("requires", $.cpp2_expression)),
              ),
            ),
            field(
              "contracts",
              repeat(
                seq(
                  choice("pre", "post"),
                  optional($.cpp2_template_call_arguments),
                  $.cpp2_parentheses_expression,
                ),
              ),
            ),
            choice("=", "=="),
          ),
          field("type", $.cpp2_function_type_without_return_type),
        ),
      ),

    _cpp2_normal_type_or_hardcode_type: ($) =>
      choice(
        $.cpp2_expression,
        $.cpp2_type_type,
        $.cpp2_namespace_type,
        $.cpp2_const_and_star,
      ),

    cpp2_type_type: ($) => seq(optional("final"), "type"),
    cpp2_namespace_type: ($) => "namespace",

    cpp2_metafunction_arguments: ($) =>
      repeat1(seq("@", $.cpp2_any_identifier)),

    cpp2_block: ($) => seq("{", repeat($.cpp2_statement), "}"),

    cpp2_statement: ($) =>
      seq(
        optional(field("parameters", $.cpp2_function_type_without_return_type)),
        choice(
          $._cpp2_block_statement,
          seq(optional($._cpp2_non_block_statement), ";"),
        ),
      ),

    _cpp2_non_block_statement: ($) =>
      choice(
        $._cpp2_no_block_declaration,
        $.cpp2_command_statement,
        $.cpp2_expression,
        $.cpp2_non_block_loop,
      ),

    _cpp2_block_statement: ($) =>
      choice(
        $.cpp2_block_declaration,
        $.cpp2_block_definition,
        $.cpp2_block,
        $.cpp2_if_else_statement,
        $.cpp2_block_loop,
      ),

    cpp2_non_block_loop: ($) =>
      seq(
        optional(field("name", seq($.cpp2_non_template_identifier, ":"))),
        choice($.cpp2_do_while_statement, $.cpp2_non_block_for_statement),
      ),

    cpp2_block_loop: ($) =>
      seq(
        optional(field("name", seq($.cpp2_non_template_identifier, ":"))),
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
          optional("constexpr"),
          $.cpp2_expression,
          $._cpp2_block_statement,
          optional(seq("else", $._cpp2_block_statement)),
        ),
      ),

    cpp2_while_statement: ($) =>
      seq(
        "while",
        $.cpp2_expression,
        optional(seq($.cpp2_next, $.cpp2_expression)),
        $._cpp2_block_statement,
      ),

    cpp2_for_statement: ($) =>
      seq($.cpp2_for_statement_left_side, $._cpp2_block_statement),

    cpp2_non_block_for_statement: ($) =>
      seq($.cpp2_for_statement_left_side, $.cpp2_expression),

    cpp2_for_statement_left_side: ($) =>
      seq(
        "for",
        $.cpp2_expression,
        optional(seq($.cpp2_next, $.cpp2_expression)),
        "do",
        $.cpp2_function_type_without_return_type,
      ),

    cpp2_do_statement: ($) => seq("do", $._cpp2_block_statement),

    cpp2_do_while_statement: ($) =>
      seq(
        $.cpp2_do_statement,
        optional(seq($.cpp2_next, $.cpp2_expression)),
        "while",
        $.cpp2_expression,
      ),

    cpp2_next: ($) => "next",

    cpp2_expression: ($) =>
      choice(
        $.cpp2_literal,
        $.cpp2_keyword,
        $.cpp2_primitive_type,
        $.cpp2_any_identifier,
        $.cpp2_dot_access,
        $.cpp2_function_call,
        $.cpp2_bracket_call,
        $.cpp2_unary_expression,
        $.cpp2_binary_expression,
        $.cpp2_parentheses_expression,
        $.cpp2_block_definition,
        $.cpp2_expression_definition,
        $.cpp2_expansion_dots,
        $.cpp2_inspect_expression,
        $.cpp2_type,
      ),

    cpp2_type: ($) =>
      choice(
        seq(optional($.cpp2_const_and_star), $.cpp2_function_type),
        // lower preference to prefer unary postfix operator
        prec.dynamic(-1, seq($.cpp2_const_and_star, $.cpp2_expression)),
      ),

    cpp2_const_and_star: ($) =>
      prec.right(seq(choice("const", "*"), optional($.cpp2_const_and_star))),

    cpp2_function_type: ($) =>
      seq(
        field("parameters", $.cpp2_function_type_without_return_type),
        optional($.cpp2_throws),
        optional(
          seq(
            $._cpp2_arrow,
            optional($.cpp2_passing_style),
            field("return", $.cpp2_expression),
          ),
        ),
      ),

    cpp2_throws: ($) => "throws",

    cpp2_function_type_without_return_type: ($) =>
      seq("(", optional($.cpp2_comma_seperated_declarations), ")"),

    cpp2_comma_seperated_declarations: ($) =>
      prec.right(
        seq(
          $.cpp2_function_declaration_argument,
          repeat(seq(",", $.cpp2_function_declaration_argument)),
          optional(","),
        ),
      ),

    // we need this to prefer closing templates to the >> operator
    _cpp2_template_close_token: ($) => alias(token(prec(1, ">")), "> template"),

    cpp2_template_declaration_arguments: ($) =>
      seq(
        alias("<", "template <"),
        optional($.cpp2_comma_seperated_declarations),
        $._cpp2_template_close_token,
      ),

    cpp2_function_declaration_argument: ($) =>
      seq(
        optional($.cpp2_passing_style),
        choice(
          $._cpp2_no_block_declaration,
          $.cpp2_block_declaration,
          seq($.cpp2_any_identifier, optional("...")),
        ),
      ),

    cpp2_passing_style: ($) =>
      repeat1(choice(...cpp2_passing_styles, ...cpp2_keyword_passing_styles)),

    cpp2_template_call_arguments: ($) =>
      prec.right(
        seq(
          alias("<", "template <"),
          optional($.cpp2_comma_expressions),
          $._cpp2_template_close_token,
        ),
      ),

    cpp2_parentheses_expression: ($) =>
      seq("(", optional($.cpp2_comma_expressions), ")"),

    cpp2_comma_expressions: ($) =>
      prec.right(
        seq(
          seq(optional($.cpp2_passing_style), $.cpp2_expression),
          repeat(seq(",", optional($.cpp2_passing_style), $.cpp2_expression)),
          optional(","),
        ),
      ),

    cpp2_function_call: ($) =>
      seq(
        field("function", $.cpp2_expression),
        field("arguments", $.cpp2_parentheses_expression),
      ),

    cpp2_bracket_call: ($) =>
      seq(
        field("function", $.cpp2_expression),
        field("arguments", seq("[", optional($.cpp2_comma_expressions), "]")),
      ),

    cpp2_dot_access: ($) =>
      seq(
        field("object", $.cpp2_expression),
        choice("..", "."),
        choice(
          prec.dynamic(10, field("function", $.cpp2_function_call)),
          field("field", $.cpp2_any_identifier),
        ),
      ),

    cpp2_inspect_expression: ($) =>
      seq(
        $.cpp2_inspect,
        $.cpp2_expression,
        $._cpp2_arrow,
        $.cpp2_expression,
        "{",
        repeat(seq("is", $.cpp2_expression, "=", $.cpp2_statement)),
        "}",
      ),

    cpp2_inspect: ($) => "inspect",

    cpp2_expansion_dots: ($) => "...",

    cpp2_unary_expression: ($) =>
      choice($.cpp2_unary_prefix_expression, $.cpp2_unary_postfix_expression),

    cpp2_unary_postfix_expression: ($) =>
      seq(
        $.cpp2_expression,
        // the reason we have &&  additionally to & is for issues
        // with conflicting tokenization with the binary operator &&
        choice(...cpp2_postfix_operators),
      ),

    cpp2_unary_prefix_expression: ($) =>
      seq(choice(...cpp2_prefix_operators), $.cpp2_expression),

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

    cpp2_command_statement: ($) =>
      seq(
        choice("return", "continue", "break", "using", "delete", "throw"),
        optional($.cpp2_expression),
      ),

    cpp2_any_identifier: ($) =>
      prec.left(
        seq(
          optional(
            field(
              "namespaces",
              seq(
                choice(seq($.cpp2_no_namespace_identifier, "::"), " ::"),
                repeat(seq($.cpp2_no_namespace_identifier, "::")),
              ),
            ),
          ),
          field("last", $.cpp2_no_namespace_identifier),
        ),
      ),

    cpp2_no_namespace_identifier: ($) =>
      choice($.cpp2_non_template_identifier, $.cpp2_template_identifier),

    cpp2_template_identifier: ($) =>
      seq($.cpp2_non_template_identifier, $.cpp2_template_call_arguments),

    cpp2_non_template_identifier: ($) =>
      choice($.cpp2_operator_keyword, $.cpp2_ordinary_identifier),

    cpp2_ordinary_identifier: ($) =>
      // dynamic precedence for preferring cpp2 grammar to labeled_statement
      prec.dynamic(1, choice(...cpp2_non_keyword_words, $.identifier)),

    cpp2_operator_keyword: ($) =>
      seq(
        "operator",
        choice(
          $.cpp2_expression,
          seq("new", "[]"),
          seq("delete", "[]"),
          ...[
            ...new Set([
              ...cpp2_binary_operators,
              ...cpp2_postfix_operators,
              "co_await",
              "new",
              "delete",
              "[]",
              "()",
              '""',
            ]),
          ].map((operator) => {
            return operator;
          }),
        ),
      ),

    cpp2_literal: ($) =>
      choice(
        $.cpp2_number_literal,
        $._string,
        $.cpp2_raw_string_literal,
        $.char_literal,
        $.cpp2_user_defined_literal,
      ),

    cpp2_number_literal: ($) => {
      const sign = /[-\+]/;
      const separator = "'";
      const binary = /[01]/;
      const binaryDigits = seq(
        repeat1(binary),
        repeat(seq(separator, repeat1(binary))),
      );
      const decimal = /[0-9]/;
      const firstDecimal = /[1-9]/;
      const intDecimalDigits = seq(
        firstDecimal,
        repeat(decimal),
        repeat(seq(separator, repeat1(decimal))),
      );
      const floatDecimalDigits = seq(
        repeat1(decimal),
        repeat(seq(separator, repeat1(decimal))),
      );
      const hex = /[0-9a-fA-F]/;
      const hexDigits = seq(repeat1(hex), repeat(seq(separator, repeat1(hex))));
      const octal = /[0-7]/;
      const octalDigits = seq(
        "0",
        repeat(octal),
        repeat(seq(separator, repeat1(octal))),
      );
      const hexExponent = seq(/[pP]/, optional(sign), floatDecimalDigits);
      const decimalExponent = seq(/[eE]/, optional(sign), floatDecimalDigits);
      const intSuffix =
        /(ll|LL)[uU]?|[uU](ll|LL)?|[uU][lL]?|[uU][zZ]?|[lL][uU]?|[zZ][uU]?/;
      const floatSuffix = /([fF](16|32|64|128)?)|[lL]|(bf16|BF16)/;

      return choice(
        seq(
          optional(sign),
          floatDecimalDigits,
          ".",
          optional(decimalExponent),
          optional(floatSuffix),
        ),
        token(
          prec(
            1,
            seq(
              optional(sign),
              choice(
                seq(
                  choice(
                    seq(choice("0b", "0B"), binaryDigits),
                    intDecimalDigits,
                    seq(choice("0x", "0X"), hexDigits),
                    octalDigits,
                  ),
                  optional(intSuffix),
                ),
                seq(
                  choice(
                    seq(floatDecimalDigits, decimalExponent),
                    seq(
                      floatDecimalDigits,
                      ".",
                      floatDecimalDigits,
                      optional(decimalExponent),
                    ),
                    seq(".", floatDecimalDigits, optional(decimalExponent)),
                    seq(
                      choice("0x", "0X"),
                      choice(
                        hexDigits,
                        seq(hexDigits, ".", optional(hexDigits)),
                        seq(".", hexDigits),
                      ),
                      hexExponent,
                    ),
                  ),
                  optional(floatSuffix),
                ),
              ),
            ),
          ),
        ),
      );
    },

    cpp2_user_defined_literal: ($) =>
      seq(
        choice(
          $.cpp2_number_literal,
          $.char_literal,
          $.string_literal,
          $.cpp2_raw_string_literal,
          $.concatenated_string,
        ),
        $.literal_suffix,
      ),

    cpp2_raw_string_literal: ($) =>
      seq(
        choice('$R"', 'R"', 'LR"', 'uR"', 'UR"', 'u8R"'),
        choice(
          seq(
            field("delimiter", $.raw_string_delimiter),
            "(",
            $.raw_string_content,
            ")",
            $.raw_string_delimiter,
          ),
          seq("(", $.raw_string_content, ")"),
        ),
        '"',
      ),

    cpp2_keyword: ($) => choice($.true, $.false, $.cpp2_primitive_type),

    cpp2_primitive_type: ($) =>
      choice(
        $.primitive_type,
        token(
          choice(
            "ushort",
            "uint",
            "ulong",
            "longlong",
            "ulonglong",
            "longdouble",
            "_schar",
            "_uchar",
            ...[8, 16, 32, 64].map((n) => `i${n}`),
            ...[8, 16, 32, 64].map((n) => `u${n}`),
            ...[8, 16, 32, 64].map((n) => `f${n}`),
          ),
        ),
      ),

    _cpp2_arrow: ($) => alias(token(prec(1, "->")), "->"),

    // we need to remove the dollar sign from allowed chars in identifier, so we override the tree-sitter-c identifier rule
    identifier: (_) =>
      /(\p{XID_Start}|\$|_|\\u[0-9A-Fa-f]{4}|\\U[0-9A-Fa-f]{8})(\p{XID_Continue}|\\u[0-9A-Fa-f]{4}|\\U[0-9A-Fa-f]{8})*/,

    macro_comment: (_) =>
      token(
        seq(
          "#",
          choice(
            "define",
            "undef",
            "if",
            "ifdef",
            "ifndef",
            "else",
            "elif",
            "endif",
            "error",
            "pragma",
          ),
          /(\\+(.|\r?\n)|[^\\\n])*/,
        ),
      ),
  },
});
