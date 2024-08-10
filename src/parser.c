#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_COLON = 2,
  anon_sym_EQ = 3,
  anon_sym_COLON_EQ = 4,
  anon_sym_STAR_EQ = 5,
  anon_sym_SLASH_EQ = 6,
  anon_sym_PERCENT_EQ = 7,
  anon_sym_PLUS_EQ = 8,
  anon_sym_DASH_EQ = 9,
  anon_sym_GT_GT_EQ = 10,
  anon_sym_LT_LT_EQ = 11,
  anon_sym_AMP_EQ = 12,
  anon_sym_CARET_EQ = 13,
  anon_sym_PIPE_EQ = 14,
  anon_sym_COLON_COLON = 15,
  sym_identifier = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_DASH_GT = 19,
  anon_sym_COMMA = 20,
  anon_sym_LBRACE = 21,
  anon_sym_RBRACE = 22,
  anon_sym__ = 23,
  anon_sym_PLUS_PLUS = 24,
  anon_sym_DASH_DASH = 25,
  anon_sym_STAR = 26,
  anon_sym_AMP = 27,
  anon_sym_TILDE = 28,
  anon_sym_DOLLAR = 29,
  anon_sym_DOT_DOT_DOT = 30,
  anon_sym_DASH = 31,
  anon_sym_PLUS = 32,
  anon_sym_BANG = 33,
  anon_sym_DOT = 34,
  anon_sym_DOT_DOT = 35,
  anon_sym_return = 36,
  sym_number = 37,
  sym_string = 38,
  sym_float = 39,
  anon_sym_true = 40,
  anon_sym_false = 41,
  sym_source_file = 42,
  sym_declaration = 43,
  sym_assignment = 44,
  sym_any_identifier = 45,
  sym_namespaced_identifier = 46,
  sym_type = 47,
  sym_function_type = 48,
  sym_parameters = 49,
  sym_parameter = 50,
  sym_definition = 51,
  sym_block = 52,
  sym_statement = 53,
  sym_expression = 54,
  sym_unary_expression = 55,
  sym_unary_postfix_expression = 56,
  sym_unary_prefix_expression = 57,
  sym_function_call = 58,
  sym_method_call = 59,
  sym_arguments = 60,
  sym_return_statement = 61,
  sym_literal = 62,
  sym_boolean = 63,
  aux_sym_source_file_repeat1 = 64,
  aux_sym_parameters_repeat1 = 65,
  aux_sym_block_repeat1 = 66,
  aux_sym_arguments_repeat1 = 67,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_COLON_COLON] = "::",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym__] = "_",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_STAR] = "*",
  [anon_sym_AMP] = "&",
  [anon_sym_TILDE] = "~",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_BANG] = "!",
  [anon_sym_DOT] = ".",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_return] = "return",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_float] = "float",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_source_file] = "source_file",
  [sym_declaration] = "declaration",
  [sym_assignment] = "assignment",
  [sym_any_identifier] = "any_identifier",
  [sym_namespaced_identifier] = "namespaced_identifier",
  [sym_type] = "type",
  [sym_function_type] = "function_type",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_definition] = "definition",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_unary_expression] = "unary_expression",
  [sym_unary_postfix_expression] = "unary_postfix_expression",
  [sym_unary_prefix_expression] = "unary_prefix_expression",
  [sym_function_call] = "function_call",
  [sym_method_call] = "method_call",
  [sym_arguments] = "arguments",
  [sym_return_statement] = "return_statement",
  [sym_literal] = "literal",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_GT_GT_EQ] = anon_sym_GT_GT_EQ,
  [anon_sym_LT_LT_EQ] = anon_sym_LT_LT_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym__] = anon_sym__,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_return] = anon_sym_return,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_float] = sym_float,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_source_file] = sym_source_file,
  [sym_declaration] = sym_declaration,
  [sym_assignment] = sym_assignment,
  [sym_any_identifier] = sym_any_identifier,
  [sym_namespaced_identifier] = sym_namespaced_identifier,
  [sym_type] = sym_type,
  [sym_function_type] = sym_function_type,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_definition] = sym_definition,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_unary_postfix_expression] = sym_unary_postfix_expression,
  [sym_unary_prefix_expression] = sym_unary_prefix_expression,
  [sym_function_call] = sym_function_call,
  [sym_method_call] = sym_method_call,
  [sym_arguments] = sym_arguments,
  [sym_return_statement] = sym_return_statement,
  [sym_literal] = sym_literal,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_any_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_namespaced_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_postfix_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_prefix_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_method_call] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      ADVANCE_MAP(
        '!', 76,
        '"', 2,
        '$', 70,
        '%', 11,
        '&', 68,
        '(', 56,
        ')', 57,
        '*', 66,
        '+', 75,
        ',', 59,
        '-', 73,
        '.', 77,
        '/', 16,
        ':', 28,
        ';', 27,
        '<', 10,
        '=', 30,
        '>', 21,
        '^', 17,
        '_', 62,
        'f', 43,
        'r', 44,
        't', 49,
        '{', 60,
        '|', 18,
        '}', 61,
        '~', 69,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 76,
        '"', 2,
        ')', 57,
        '+', 74,
        '-', 72,
        ':', 8,
        'f', 43,
        't', 49,
        '{', 60,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '%', 11,
        '&', 12,
        '*', 13,
        '+', 14,
        '-', 15,
        '/', 16,
        ':', 28,
        ';', 27,
        '<', 10,
        '=', 30,
        '>', 21,
        '^', 17,
        'r', 44,
        '|', 18,
        '}', 61,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(63);
      END_STATE();
    case 5:
      if (lookahead == '+') ADVANCE(63);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(58);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 10:
      if (lookahead == '<') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(20);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 24:
      if (eof) ADVANCE(26);
      ADVANCE_MAP(
        '$', 70,
        '%', 11,
        '&', 68,
        '(', 56,
        ')', 57,
        '*', 66,
        '+', 5,
        ',', 59,
        '-', 7,
        '.', 77,
        '/', 16,
        ':', 8,
        ';', 27,
        '<', 10,
        '=', 30,
        '>', 21,
        '^', 17,
        '|', 18,
        '~', 69,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      ADVANCE_MAP(
        '$', 70,
        '&', 67,
        '(', 56,
        ')', 57,
        '*', 65,
        '+', 4,
        ',', 59,
        '-', 6,
        '.', 77,
        ':', 8,
        ';', 27,
        '=', 30,
        '~', 69,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(58);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(71);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 25},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 25},
  [18] = {.lex_state = 25},
  [19] = {.lex_state = 25},
  [20] = {.lex_state = 25},
  [21] = {.lex_state = 25},
  [22] = {.lex_state = 25},
  [23] = {.lex_state = 25},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 25},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 25},
  [28] = {.lex_state = 25},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 25},
  [35] = {.lex_state = 25},
  [36] = {.lex_state = 24},
  [37] = {.lex_state = 24},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 24},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 24},
  [44] = {.lex_state = 24},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 24},
  [49] = {.lex_state = 24},
  [50] = {.lex_state = 24},
  [51] = {.lex_state = 24},
  [52] = {.lex_state = 24},
  [53] = {.lex_state = 24},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 24},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 24},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 24},
  [60] = {.lex_state = 24},
  [61] = {.lex_state = 24},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 24},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(74),
    [sym_declaration] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(11), 1,
      anon_sym_COLON_COLON,
    ACTIONS(13), 4,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
    ACTIONS(9), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT,
  [34] = 3,
    ACTIONS(11), 1,
      anon_sym_COLON_COLON,
    ACTIONS(17), 4,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
    ACTIONS(15), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT,
  [68] = 2,
    ACTIONS(13), 4,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
    ACTIONS(9), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT,
  [99] = 2,
    ACTIONS(21), 4,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
    ACTIONS(19), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT,
  [130] = 2,
    ACTIONS(17), 4,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
    ACTIONS(15), 22,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT,
  [161] = 14,
    ACTIONS(23), 1,
      anon_sym_COLON_COLON,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_number,
    STATE(5), 1,
      sym_namespaced_identifier,
    STATE(17), 1,
      sym_boolean,
    STATE(27), 1,
      sym_expression,
    STATE(53), 1,
      sym_definition,
    STATE(61), 1,
      sym_block,
    ACTIONS(33), 2,
      sym_string,
      sym_float,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_unary_postfix_expression,
      sym_unary_prefix_expression,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(19), 5,
      sym_any_identifier,
      sym_unary_expression,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [213] = 14,
    ACTIONS(23), 1,
      anon_sym_COLON_COLON,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym_number,
    STATE(5), 1,
      sym_namespaced_identifier,
    STATE(17), 1,
      sym_boolean,
    STATE(27), 1,
      sym_expression,
    STATE(60), 1,
      sym_definition,
    STATE(61), 1,
      sym_block,
    ACTIONS(33), 2,
      sym_string,
      sym_float,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_unary_postfix_expression,
      sym_unary_prefix_expression,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(19), 5,
      sym_any_identifier,
      sym_unary_expression,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [265] = 13,
    ACTIONS(23), 1,
      anon_sym_COLON_COLON,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_namespaced_identifier,
    STATE(17), 1,
      sym_boolean,
    STATE(28), 1,
      sym_expression,
    STATE(72), 1,
      sym_arguments,
    ACTIONS(33), 2,
      sym_string,
      sym_float,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_unary_postfix_expression,
      sym_unary_prefix_expression,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(19), 5,
      sym_any_identifier,
      sym_unary_expression,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [314] = 13,
    ACTIONS(23), 1,
      anon_sym_COLON_COLON,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_namespaced_identifier,
    STATE(17), 1,
      sym_boolean,
    STATE(28), 1,
      sym_expression,
    STATE(73), 1,
      sym_arguments,
    ACTIONS(33), 2,
      sym_string,
      sym_float,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_unary_postfix_expression,
      sym_unary_prefix_expression,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(19), 5,
      sym_any_identifier,
      sym_unary_expression,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [363] = 11,
    ACTIONS(23), 1,
      anon_sym_COLON_COLON,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_number,
    STATE(5), 1,
      sym_namespaced_identifier,
    STATE(17), 1,
      sym_boolean,
    STATE(30), 1,
      sym_expression,
    ACTIONS(33), 2,
      sym_string,
      sym_float,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_unary_postfix_expression,
      sym_unary_prefix_expression,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(19), 5,
      sym_any_identifier,
      sym_unary_expression,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [406] = 11,
    ACTIONS(23), 1,
      anon_sym_COLON_COLON,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_number,
    STATE(5), 1,
      sym_namespaced_identifier,
    STATE(17), 1,
      sym_boolean,
    STATE(34), 1,
      sym_expression,
    ACTIONS(33), 2,
      sym_string,
      sym_float,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_unary_postfix_expression,
      sym_unary_prefix_expression,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(19), 5,
      sym_any_identifier,
      sym_unary_expression,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [449] = 11,
    ACTIONS(23), 1,
      anon_sym_COLON_COLON,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_number,
    STATE(5), 1,
      sym_namespaced_identifier,
    STATE(17), 1,
      sym_boolean,
    STATE(24), 1,
      sym_expression,
    ACTIONS(33), 2,
      sym_string,
      sym_float,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_unary_postfix_expression,
      sym_unary_prefix_expression,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(19), 5,
      sym_any_identifier,
      sym_unary_expression,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [492] = 11,
    ACTIONS(23), 1,
      anon_sym_COLON_COLON,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_number,
    STATE(5), 1,
      sym_namespaced_identifier,
    STATE(17), 1,
      sym_boolean,
    STATE(35), 1,
      sym_expression,
    ACTIONS(33), 2,
      sym_string,
      sym_float,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_unary_postfix_expression,
      sym_unary_prefix_expression,
    ACTIONS(29), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_BANG,
    STATE(19), 5,
      sym_any_identifier,
      sym_unary_expression,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [535] = 3,
    ACTIONS(11), 1,
      anon_sym_COLON_COLON,
    ACTIONS(21), 2,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
    ACTIONS(19), 14,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT,
  [559] = 2,
    ACTIONS(43), 2,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
    ACTIONS(41), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT,
  [579] = 2,
    ACTIONS(47), 2,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
    ACTIONS(45), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT,
  [599] = 2,
    ACTIONS(51), 2,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
    ACTIONS(49), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT,
  [619] = 2,
    ACTIONS(55), 2,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
    ACTIONS(53), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT,
  [639] = 2,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
    ACTIONS(57), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT,
  [659] = 2,
    ACTIONS(63), 2,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
    ACTIONS(61), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT,
  [679] = 2,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
    ACTIONS(65), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT,
  [699] = 2,
    ACTIONS(71), 2,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
    ACTIONS(69), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT,
  [719] = 2,
    ACTIONS(75), 2,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
    ACTIONS(73), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT,
  [739] = 2,
    ACTIONS(79), 2,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
    ACTIONS(77), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT,
  [759] = 4,
    ACTIONS(11), 1,
      anon_sym_COLON_COLON,
    ACTIONS(81), 1,
      anon_sym_COLON,
    ACTIONS(83), 1,
      anon_sym_COLON_EQ,
    ACTIONS(19), 11,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [782] = 4,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 2,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
    ACTIONS(89), 7,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT,
  [804] = 6,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(91), 2,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
    ACTIONS(89), 7,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT,
  [830] = 9,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    ACTIONS(100), 1,
      anon_sym_COLON_COLON,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(108), 1,
      anon_sym_return,
    STATE(5), 1,
      sym_namespaced_identifier,
    STATE(33), 1,
      sym_any_identifier,
    STATE(29), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(70), 3,
      sym_declaration,
      sym_assignment,
      sym_return_statement,
  [861] = 4,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 2,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
    ACTIONS(111), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(89), 7,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT,
  [882] = 9,
    ACTIONS(23), 1,
      anon_sym_COLON_COLON,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 1,
      anon_sym_return,
    STATE(5), 1,
      sym_namespaced_identifier,
    STATE(33), 1,
      sym_any_identifier,
    STATE(29), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(70), 3,
      sym_declaration,
      sym_assignment,
      sym_return_statement,
  [913] = 9,
    ACTIONS(23), 1,
      anon_sym_COLON_COLON,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(119), 1,
      anon_sym_return,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_namespaced_identifier,
    STATE(33), 1,
      sym_any_identifier,
    STATE(31), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(70), 3,
      sym_declaration,
      sym_assignment,
      sym_return_statement,
  [944] = 1,
    ACTIONS(123), 11,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [958] = 4,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    ACTIONS(91), 2,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
    ACTIONS(89), 7,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT,
  [978] = 4,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_SEMI,
    ACTIONS(91), 2,
      anon_sym_DOT,
      anon_sym_DOT_DOT,
    ACTIONS(89), 7,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_TILDE,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT,
  [998] = 6,
    ACTIONS(23), 1,
      anon_sym_COLON_COLON,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_namespaced_identifier,
    STATE(50), 1,
      sym_type,
    STATE(44), 2,
      sym_any_identifier,
      sym_function_type,
  [1018] = 6,
    ACTIONS(23), 1,
      anon_sym_COLON_COLON,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_namespaced_identifier,
    STATE(42), 1,
      sym_type,
    STATE(44), 2,
      sym_any_identifier,
      sym_function_type,
  [1038] = 2,
    ACTIONS(135), 1,
      anon_sym_DASH_GT,
    ACTIONS(133), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1050] = 6,
    ACTIONS(23), 1,
      anon_sym_COLON_COLON,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_namespaced_identifier,
    STATE(65), 1,
      sym_type,
    STATE(44), 2,
      sym_any_identifier,
      sym_function_type,
  [1070] = 6,
    ACTIONS(23), 1,
      anon_sym_COLON_COLON,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_namespaced_identifier,
    STATE(43), 1,
      sym_type,
    STATE(44), 2,
      sym_any_identifier,
      sym_function_type,
  [1090] = 2,
    ACTIONS(139), 1,
      anon_sym_DASH_GT,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1102] = 1,
    ACTIONS(141), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1111] = 1,
    ACTIONS(143), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1120] = 1,
    ACTIONS(145), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1129] = 2,
    ACTIONS(149), 2,
      sym_identifier,
      anon_sym_return,
    ACTIONS(147), 3,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
  [1139] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 1,
      anon_sym_SEMI,
    STATE(48), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [1153] = 2,
    ACTIONS(157), 2,
      sym_identifier,
      anon_sym_return,
    ACTIONS(155), 3,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
  [1163] = 4,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      anon_sym_SEMI,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(48), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [1177] = 4,
    ACTIONS(23), 1,
      anon_sym_COLON_COLON,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(5), 1,
      sym_namespaced_identifier,
    STATE(71), 1,
      sym_any_identifier,
  [1190] = 2,
    ACTIONS(169), 1,
      anon_sym_EQ,
    ACTIONS(167), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
  [1199] = 4,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      sym_parameter,
    STATE(68), 1,
      sym_parameters,
  [1212] = 3,
    ACTIONS(23), 1,
      anon_sym_COLON_COLON,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(6), 1,
      sym_namespaced_identifier,
  [1222] = 1,
    ACTIONS(177), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
  [1228] = 3,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_parameters_repeat1,
  [1238] = 1,
    ACTIONS(183), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
  [1244] = 3,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_arguments_repeat1,
  [1254] = 1,
    ACTIONS(188), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
  [1260] = 3,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_arguments_repeat1,
  [1270] = 3,
    ACTIONS(23), 1,
      anon_sym_COLON_COLON,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(4), 1,
      sym_namespaced_identifier,
  [1280] = 1,
    ACTIONS(167), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
  [1286] = 1,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
  [1292] = 3,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_parameters_repeat1,
  [1302] = 3,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_parameters_repeat1,
  [1312] = 1,
    ACTIONS(196), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1317] = 1,
    ACTIONS(201), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1322] = 2,
    ACTIONS(81), 1,
      anon_sym_COLON,
    ACTIONS(83), 1,
      anon_sym_COLON_EQ,
  [1329] = 2,
    ACTIONS(171), 1,
      sym_identifier,
    STATE(64), 1,
      sym_parameter,
  [1336] = 1,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
  [1340] = 1,
    ACTIONS(205), 1,
      anon_sym_COLON,
  [1344] = 1,
    ACTIONS(207), 1,
      anon_sym_SEMI,
  [1348] = 1,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
  [1352] = 1,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
  [1356] = 1,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
  [1360] = 1,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 130,
  [SMALL_STATE(7)] = 161,
  [SMALL_STATE(8)] = 213,
  [SMALL_STATE(9)] = 265,
  [SMALL_STATE(10)] = 314,
  [SMALL_STATE(11)] = 363,
  [SMALL_STATE(12)] = 406,
  [SMALL_STATE(13)] = 449,
  [SMALL_STATE(14)] = 492,
  [SMALL_STATE(15)] = 535,
  [SMALL_STATE(16)] = 559,
  [SMALL_STATE(17)] = 579,
  [SMALL_STATE(18)] = 599,
  [SMALL_STATE(19)] = 619,
  [SMALL_STATE(20)] = 639,
  [SMALL_STATE(21)] = 659,
  [SMALL_STATE(22)] = 679,
  [SMALL_STATE(23)] = 699,
  [SMALL_STATE(24)] = 719,
  [SMALL_STATE(25)] = 739,
  [SMALL_STATE(26)] = 759,
  [SMALL_STATE(27)] = 782,
  [SMALL_STATE(28)] = 804,
  [SMALL_STATE(29)] = 830,
  [SMALL_STATE(30)] = 861,
  [SMALL_STATE(31)] = 882,
  [SMALL_STATE(32)] = 913,
  [SMALL_STATE(33)] = 944,
  [SMALL_STATE(34)] = 958,
  [SMALL_STATE(35)] = 978,
  [SMALL_STATE(36)] = 998,
  [SMALL_STATE(37)] = 1018,
  [SMALL_STATE(38)] = 1038,
  [SMALL_STATE(39)] = 1050,
  [SMALL_STATE(40)] = 1070,
  [SMALL_STATE(41)] = 1090,
  [SMALL_STATE(42)] = 1102,
  [SMALL_STATE(43)] = 1111,
  [SMALL_STATE(44)] = 1120,
  [SMALL_STATE(45)] = 1129,
  [SMALL_STATE(46)] = 1139,
  [SMALL_STATE(47)] = 1153,
  [SMALL_STATE(48)] = 1163,
  [SMALL_STATE(49)] = 1177,
  [SMALL_STATE(50)] = 1190,
  [SMALL_STATE(51)] = 1199,
  [SMALL_STATE(52)] = 1212,
  [SMALL_STATE(53)] = 1222,
  [SMALL_STATE(54)] = 1228,
  [SMALL_STATE(55)] = 1238,
  [SMALL_STATE(56)] = 1244,
  [SMALL_STATE(57)] = 1254,
  [SMALL_STATE(58)] = 1260,
  [SMALL_STATE(59)] = 1270,
  [SMALL_STATE(60)] = 1280,
  [SMALL_STATE(61)] = 1286,
  [SMALL_STATE(62)] = 1292,
  [SMALL_STATE(63)] = 1302,
  [SMALL_STATE(64)] = 1312,
  [SMALL_STATE(65)] = 1317,
  [SMALL_STATE(66)] = 1322,
  [SMALL_STATE(67)] = 1329,
  [SMALL_STATE(68)] = 1336,
  [SMALL_STATE(69)] = 1340,
  [SMALL_STATE(70)] = 1344,
  [SMALL_STATE(71)] = 1348,
  [SMALL_STATE(72)] = 1352,
  [SMALL_STATE(73)] = 1356,
  [SMALL_STATE(74)] = 1360,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespaced_identifier, 2, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespaced_identifier, 2, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespaced_identifier, 3, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespaced_identifier, 3, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_identifier, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any_identifier, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 6, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_call, 6, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_postfix_expression, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_postfix_expression, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_prefix_expression, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_prefix_expression, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 5, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_call, 5, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [215] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_cpp2(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
