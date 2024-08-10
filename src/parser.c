#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_COLON = 1,
  anon_sym_EQ = 2,
  anon_sym_COLON_COLON = 3,
  sym_identifier = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_DASH_GT = 7,
  anon_sym_COMMA = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_SEMI = 11,
  anon_sym__ = 12,
  anon_sym_DOT = 13,
  anon_sym_DOT_DOT = 14,
  anon_sym_return = 15,
  sym_number = 16,
  sym_string = 17,
  sym_float = 18,
  anon_sym_true = 19,
  anon_sym_false = 20,
  sym_source_file = 21,
  sym_declaration = 22,
  sym_any_identifier = 23,
  sym_namespaced_identifier = 24,
  sym_type = 25,
  sym_function_type = 26,
  sym_parameters = 27,
  sym_parameter = 28,
  sym_definition = 29,
  sym_block = 30,
  sym_statement = 31,
  sym_expression = 32,
  sym_function_call = 33,
  sym_method_call = 34,
  sym_arguments = 35,
  sym_return_statement = 36,
  sym_literal = 37,
  sym_boolean = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_parameters_repeat1 = 40,
  aux_sym_block_repeat1 = 41,
  aux_sym_arguments_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON_COLON] = "::",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym__] = "_",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym__] = anon_sym__,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '"', 2,
        '(', 26,
        ')', 27,
        ',', 29,
        '-', 5,
        '.', 34,
        ':', 10,
        ';', 32,
        '=', 11,
        '_', 33,
        'f', 13,
        'r', 14,
        't', 19,
        '{', 30,
        '}', 31,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '{') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == '}') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(28);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 7:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '(', 26,
        ')', 27,
        ',', 29,
        '-', 5,
        '.', 34,
        ':', 3,
        ';', 32,
        '=', 11,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
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
    [sym_source_file] = STATE(64),
    [sym_declaration] = STATE(39),
    [aux_sym_source_file_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_number,
    STATE(11), 1,
      sym_namespaced_identifier,
    STATE(16), 1,
      sym_any_identifier,
    STATE(29), 1,
      sym_boolean,
    STATE(46), 1,
      sym_definition,
    ACTIONS(15), 2,
      sym_string,
      sym_float,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 2,
      sym_block,
      sym_expression,
    STATE(31), 3,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [42] = 12,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_namespaced_identifier,
    STATE(16), 1,
      sym_any_identifier,
    STATE(29), 1,
      sym_boolean,
    STATE(49), 1,
      sym_expression,
    STATE(60), 1,
      sym_arguments,
    ACTIONS(15), 2,
      sym_string,
      sym_float,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 3,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [83] = 12,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_namespaced_identifier,
    STATE(16), 1,
      sym_any_identifier,
    STATE(29), 1,
      sym_boolean,
    STATE(49), 1,
      sym_expression,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(15), 2,
      sym_string,
      sym_float,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 3,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [124] = 10,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_number,
    STATE(11), 1,
      sym_namespaced_identifier,
    STATE(16), 1,
      sym_any_identifier,
    STATE(29), 1,
      sym_boolean,
    STATE(62), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_string,
      sym_float,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 3,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [159] = 10,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_number,
    STATE(11), 1,
      sym_namespaced_identifier,
    STATE(16), 1,
      sym_any_identifier,
    STATE(29), 1,
      sym_boolean,
    STATE(52), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_string,
      sym_float,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 3,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [194] = 3,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(23), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
  [211] = 3,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(29), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
  [228] = 3,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(33), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
  [245] = 2,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(29), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
  [259] = 2,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(33), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
  [273] = 2,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(23), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
  [287] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      anon_sym_SEMI,
    ACTIONS(43), 1,
      anon_sym_return,
    STATE(14), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(61), 2,
      sym_declaration,
      sym_return_statement,
  [308] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_SEMI,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(15), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(61), 2,
      sym_declaration,
      sym_return_statement,
  [329] = 6,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 1,
      anon_sym_SEMI,
    ACTIONS(55), 1,
      anon_sym_return,
    STATE(15), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(61), 2,
      sym_declaration,
      sym_return_statement,
  [350] = 4,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      anon_sym_DOT,
    ACTIONS(64), 1,
      anon_sym_DOT_DOT,
    ACTIONS(58), 5,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [367] = 2,
    ACTIONS(68), 1,
      anon_sym_DASH_GT,
    ACTIONS(66), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [379] = 2,
    ACTIONS(72), 1,
      anon_sym_DASH_GT,
    ACTIONS(70), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [391] = 6,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_namespaced_identifier,
    STATE(53), 1,
      sym_type,
    STATE(23), 2,
      sym_any_identifier,
      sym_function_type,
  [411] = 6,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_namespaced_identifier,
    STATE(25), 1,
      sym_type,
    STATE(23), 2,
      sym_any_identifier,
      sym_function_type,
  [431] = 6,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_namespaced_identifier,
    STATE(24), 1,
      sym_type,
    STATE(23), 2,
      sym_any_identifier,
      sym_function_type,
  [451] = 6,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_namespaced_identifier,
    STATE(34), 1,
      sym_type,
    STATE(23), 2,
      sym_any_identifier,
      sym_function_type,
  [471] = 1,
    ACTIONS(78), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [480] = 1,
    ACTIONS(80), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [489] = 1,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [498] = 1,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [506] = 1,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [514] = 1,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [522] = 1,
    ACTIONS(90), 5,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [530] = 1,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [538] = 1,
    ACTIONS(58), 5,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [546] = 1,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [554] = 2,
    ACTIONS(96), 2,
      sym_identifier,
      anon_sym_return,
    ACTIONS(98), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [563] = 2,
    ACTIONS(102), 1,
      anon_sym_EQ,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_SEMI,
  [572] = 4,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(74), 1,
      sym_identifier,
    STATE(11), 1,
      sym_namespaced_identifier,
    STATE(57), 1,
      sym_any_identifier,
  [585] = 4,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      sym_parameter,
    STATE(58), 1,
      sym_parameters,
  [598] = 2,
    ACTIONS(108), 2,
      sym_identifier,
      anon_sym_return,
    ACTIONS(110), 2,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [607] = 3,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 1,
      sym_identifier,
    STATE(38), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [618] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(38), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [629] = 3,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(119), 1,
      sym_identifier,
    STATE(10), 1,
      sym_namespaced_identifier,
  [639] = 3,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(121), 1,
      sym_identifier,
    STATE(12), 1,
      sym_namespaced_identifier,
  [649] = 3,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_parameters_repeat1,
  [659] = 1,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_SEMI,
  [665] = 1,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_SEMI,
  [671] = 3,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_arguments_repeat1,
  [681] = 1,
    ACTIONS(137), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_SEMI,
  [687] = 1,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_SEMI,
  [693] = 3,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_parameters_repeat1,
  [703] = 3,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_arguments_repeat1,
  [713] = 3,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_parameters_repeat1,
  [723] = 3,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_arguments_repeat1,
  [733] = 1,
    ACTIONS(132), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [738] = 1,
    ACTIONS(153), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [743] = 1,
    ACTIONS(123), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [748] = 2,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(54), 1,
      sym_parameter,
  [755] = 1,
    ACTIONS(155), 1,
      anon_sym_COLON,
  [759] = 1,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
  [763] = 1,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
  [767] = 1,
    ACTIONS(161), 1,
      anon_sym_COLON,
  [771] = 1,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
  [775] = 1,
    ACTIONS(165), 1,
      anon_sym_SEMI,
  [779] = 1,
    ACTIONS(167), 1,
      anon_sym_SEMI,
  [783] = 1,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
  [787] = 1,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 83,
  [SMALL_STATE(5)] = 124,
  [SMALL_STATE(6)] = 159,
  [SMALL_STATE(7)] = 194,
  [SMALL_STATE(8)] = 211,
  [SMALL_STATE(9)] = 228,
  [SMALL_STATE(10)] = 245,
  [SMALL_STATE(11)] = 259,
  [SMALL_STATE(12)] = 273,
  [SMALL_STATE(13)] = 287,
  [SMALL_STATE(14)] = 308,
  [SMALL_STATE(15)] = 329,
  [SMALL_STATE(16)] = 350,
  [SMALL_STATE(17)] = 367,
  [SMALL_STATE(18)] = 379,
  [SMALL_STATE(19)] = 391,
  [SMALL_STATE(20)] = 411,
  [SMALL_STATE(21)] = 431,
  [SMALL_STATE(22)] = 451,
  [SMALL_STATE(23)] = 471,
  [SMALL_STATE(24)] = 480,
  [SMALL_STATE(25)] = 489,
  [SMALL_STATE(26)] = 498,
  [SMALL_STATE(27)] = 506,
  [SMALL_STATE(28)] = 514,
  [SMALL_STATE(29)] = 522,
  [SMALL_STATE(30)] = 530,
  [SMALL_STATE(31)] = 538,
  [SMALL_STATE(32)] = 546,
  [SMALL_STATE(33)] = 554,
  [SMALL_STATE(34)] = 563,
  [SMALL_STATE(35)] = 572,
  [SMALL_STATE(36)] = 585,
  [SMALL_STATE(37)] = 598,
  [SMALL_STATE(38)] = 607,
  [SMALL_STATE(39)] = 618,
  [SMALL_STATE(40)] = 629,
  [SMALL_STATE(41)] = 639,
  [SMALL_STATE(42)] = 649,
  [SMALL_STATE(43)] = 659,
  [SMALL_STATE(44)] = 665,
  [SMALL_STATE(45)] = 671,
  [SMALL_STATE(46)] = 681,
  [SMALL_STATE(47)] = 687,
  [SMALL_STATE(48)] = 693,
  [SMALL_STATE(49)] = 703,
  [SMALL_STATE(50)] = 713,
  [SMALL_STATE(51)] = 723,
  [SMALL_STATE(52)] = 733,
  [SMALL_STATE(53)] = 738,
  [SMALL_STATE(54)] = 743,
  [SMALL_STATE(55)] = 748,
  [SMALL_STATE(56)] = 755,
  [SMALL_STATE(57)] = 759,
  [SMALL_STATE(58)] = 763,
  [SMALL_STATE(59)] = 767,
  [SMALL_STATE(60)] = 771,
  [SMALL_STATE(61)] = 775,
  [SMALL_STATE(62)] = 779,
  [SMALL_STATE(63)] = 783,
  [SMALL_STATE(64)] = 787,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespaced_identifier, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespaced_identifier, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespaced_identifier, 3, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespaced_identifier, 3, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_identifier, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any_identifier, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 6, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 5, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [171] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
