#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_COLON = 2,
  anon_sym_EQ = 3,
  anon_sym_COLON_EQ = 4,
  anon_sym_COLON_COLON = 5,
  sym_identifier = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_DASH_GT = 9,
  anon_sym_COMMA = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym__ = 13,
  anon_sym_DOT = 14,
  anon_sym_DOT_DOT = 15,
  anon_sym_return = 16,
  sym_number = 17,
  sym_string = 18,
  sym_float = 19,
  anon_sym_true = 20,
  anon_sym_false = 21,
  sym_source_file = 22,
  sym_declaration = 23,
  sym_assignment = 24,
  sym_any_identifier = 25,
  sym_namespaced_identifier = 26,
  sym_type = 27,
  sym_function_type = 28,
  sym_parameters = 29,
  sym_parameter = 30,
  sym_definition = 31,
  sym_block = 32,
  sym_statement = 33,
  sym_expression = 34,
  sym_function_call = 35,
  sym_method_call = 36,
  sym_arguments = 37,
  sym_return_statement = 38,
  sym_literal = 39,
  sym_boolean = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym_parameters_repeat1 = 42,
  aux_sym_block_repeat1 = 43,
  aux_sym_arguments_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_COLON_COLON] = "::",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      ADVANCE_MAP(
        '"', 2,
        '(', 30,
        ')', 31,
        ',', 33,
        '-', 6,
        '.', 37,
        ':', 12,
        ';', 11,
        '=', 14,
        '_', 36,
        'f', 17,
        'r', 18,
        't', 23,
        '{', 34,
        '}', 35,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '{') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == '}') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(32);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      ADVANCE_MAP(
        '(', 30,
        ')', 31,
        ',', 33,
        '-', 6,
        '.', 37,
        ':', 3,
        ';', 11,
        '=', 14,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [sym_source_file] = STATE(72),
    [sym_declaration] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(41),
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
    STATE(15), 1,
      sym_namespaced_identifier,
    STATE(18), 1,
      sym_any_identifier,
    STATE(36), 1,
      sym_boolean,
    STATE(47), 1,
      sym_definition,
    ACTIONS(15), 2,
      sym_string,
      sym_float,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_block,
      sym_expression,
    STATE(33), 3,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [42] = 12,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_number,
    STATE(15), 1,
      sym_namespaced_identifier,
    STATE(18), 1,
      sym_any_identifier,
    STATE(36), 1,
      sym_boolean,
    STATE(44), 1,
      sym_definition,
    ACTIONS(15), 2,
      sym_string,
      sym_float,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 2,
      sym_block,
      sym_expression,
    STATE(33), 3,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [84] = 12,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      sym_namespaced_identifier,
    STATE(18), 1,
      sym_any_identifier,
    STATE(36), 1,
      sym_boolean,
    STATE(43), 1,
      sym_expression,
    STATE(71), 1,
      sym_arguments,
    ACTIONS(15), 2,
      sym_string,
      sym_float,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 3,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [125] = 12,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      sym_namespaced_identifier,
    STATE(18), 1,
      sym_any_identifier,
    STATE(36), 1,
      sym_boolean,
    STATE(43), 1,
      sym_expression,
    STATE(65), 1,
      sym_arguments,
    ACTIONS(15), 2,
      sym_string,
      sym_float,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 3,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [166] = 10,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_number,
    STATE(15), 1,
      sym_namespaced_identifier,
    STATE(18), 1,
      sym_any_identifier,
    STATE(36), 1,
      sym_boolean,
    STATE(61), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_string,
      sym_float,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 3,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [201] = 10,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_number,
    STATE(15), 1,
      sym_namespaced_identifier,
    STATE(18), 1,
      sym_any_identifier,
    STATE(36), 1,
      sym_boolean,
    STATE(66), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_string,
      sym_float,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 3,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [236] = 10,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_number,
    STATE(15), 1,
      sym_namespaced_identifier,
    STATE(18), 1,
      sym_any_identifier,
    STATE(36), 1,
      sym_boolean,
    STATE(70), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_string,
      sym_float,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 3,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [271] = 9,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(23), 1,
      anon_sym_SEMI,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_return,
    STATE(15), 1,
      sym_namespaced_identifier,
    STATE(69), 1,
      sym_any_identifier,
    STATE(11), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(68), 3,
      sym_declaration,
      sym_assignment,
      sym_return_statement,
  [302] = 9,
    ACTIONS(31), 1,
      anon_sym_SEMI,
    ACTIONS(34), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    ACTIONS(42), 1,
      anon_sym_return,
    STATE(15), 1,
      sym_namespaced_identifier,
    STATE(69), 1,
      sym_any_identifier,
    STATE(10), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(68), 3,
      sym_declaration,
      sym_assignment,
      sym_return_statement,
  [333] = 9,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(23), 1,
      anon_sym_SEMI,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym_namespaced_identifier,
    STATE(69), 1,
      sym_any_identifier,
    STATE(10), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(68), 3,
      sym_declaration,
      sym_assignment,
      sym_return_statement,
  [364] = 3,
    ACTIONS(49), 1,
      anon_sym_COLON_COLON,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(47), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [381] = 3,
    ACTIONS(49), 1,
      anon_sym_COLON_COLON,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(53), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [398] = 3,
    ACTIONS(49), 1,
      anon_sym_COLON_COLON,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(57), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [415] = 2,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(47), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [429] = 2,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(53), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [443] = 2,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(57), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [457] = 4,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_DOT,
    ACTIONS(67), 1,
      anon_sym_DOT_DOT,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [474] = 6,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_namespaced_identifier,
    STATE(57), 1,
      sym_type,
    STATE(25), 2,
      sym_any_identifier,
      sym_function_type,
  [494] = 2,
    ACTIONS(75), 1,
      anon_sym_DASH_GT,
    ACTIONS(73), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [506] = 2,
    ACTIONS(79), 1,
      anon_sym_DASH_GT,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [518] = 6,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_namespaced_identifier,
    STATE(27), 1,
      sym_type,
    STATE(25), 2,
      sym_any_identifier,
      sym_function_type,
  [538] = 6,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_namespaced_identifier,
    STATE(26), 1,
      sym_type,
    STATE(25), 2,
      sym_any_identifier,
      sym_function_type,
  [558] = 6,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_namespaced_identifier,
    STATE(42), 1,
      sym_type,
    STATE(25), 2,
      sym_any_identifier,
      sym_function_type,
  [578] = 1,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [587] = 1,
    ACTIONS(83), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [596] = 1,
    ACTIONS(85), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [605] = 1,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [613] = 1,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [621] = 2,
    ACTIONS(93), 2,
      sym_identifier,
      anon_sym_return,
    ACTIONS(91), 3,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
  [631] = 1,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [639] = 2,
    ACTIONS(99), 2,
      sym_identifier,
      anon_sym_return,
    ACTIONS(97), 3,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
  [649] = 1,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [657] = 1,
    ACTIONS(101), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [665] = 1,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [673] = 1,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [681] = 4,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      sym_parameter,
    STATE(67), 1,
      sym_parameters,
  [694] = 4,
    ACTIONS(47), 1,
      anon_sym_EQ,
    ACTIONS(49), 1,
      anon_sym_COLON_COLON,
    ACTIONS(111), 1,
      anon_sym_COLON,
    ACTIONS(113), 1,
      anon_sym_COLON_EQ,
  [707] = 4,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      sym_identifier,
    STATE(39), 1,
      aux_sym_source_file_repeat1,
    STATE(45), 1,
      sym_declaration,
  [720] = 4,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(15), 1,
      sym_namespaced_identifier,
    STATE(64), 1,
      sym_any_identifier,
  [733] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      aux_sym_source_file_repeat1,
    STATE(45), 1,
      sym_declaration,
  [746] = 2,
    ACTIONS(124), 1,
      anon_sym_EQ,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
  [755] = 3,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_arguments_repeat1,
  [765] = 1,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
  [771] = 2,
    ACTIONS(132), 1,
      anon_sym_SEMI,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [779] = 3,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_parameters_repeat1,
  [789] = 1,
    ACTIONS(138), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
  [795] = 3,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_arguments_repeat1,
  [805] = 3,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(145), 1,
      sym_identifier,
    STATE(17), 1,
      sym_namespaced_identifier,
  [815] = 3,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_arguments_repeat1,
  [825] = 1,
    ACTIONS(149), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
  [831] = 1,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
  [837] = 3,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_parameters_repeat1,
  [847] = 1,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
  [853] = 3,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_parameters_repeat1,
  [863] = 3,
    ACTIONS(7), 1,
      anon_sym_COLON_COLON,
    ACTIONS(162), 1,
      sym_identifier,
    STATE(16), 1,
      sym_namespaced_identifier,
  [873] = 1,
    ACTIONS(164), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [878] = 1,
    ACTIONS(157), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [883] = 2,
    ACTIONS(111), 1,
      anon_sym_COLON,
    ACTIONS(113), 1,
      anon_sym_COLON_EQ,
  [890] = 1,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [895] = 1,
    ACTIONS(140), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [900] = 2,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(58), 1,
      sym_parameter,
  [907] = 1,
    ACTIONS(166), 1,
      anon_sym_COLON,
  [911] = 1,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
  [915] = 1,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
  [919] = 1,
    ACTIONS(172), 1,
      anon_sym_SEMI,
  [923] = 1,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
  [927] = 1,
    ACTIONS(176), 1,
      anon_sym_SEMI,
  [931] = 1,
    ACTIONS(178), 1,
      anon_sym_EQ,
  [935] = 1,
    ACTIONS(180), 1,
      anon_sym_SEMI,
  [939] = 1,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
  [943] = 1,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 125,
  [SMALL_STATE(6)] = 166,
  [SMALL_STATE(7)] = 201,
  [SMALL_STATE(8)] = 236,
  [SMALL_STATE(9)] = 271,
  [SMALL_STATE(10)] = 302,
  [SMALL_STATE(11)] = 333,
  [SMALL_STATE(12)] = 364,
  [SMALL_STATE(13)] = 381,
  [SMALL_STATE(14)] = 398,
  [SMALL_STATE(15)] = 415,
  [SMALL_STATE(16)] = 429,
  [SMALL_STATE(17)] = 443,
  [SMALL_STATE(18)] = 457,
  [SMALL_STATE(19)] = 474,
  [SMALL_STATE(20)] = 494,
  [SMALL_STATE(21)] = 506,
  [SMALL_STATE(22)] = 518,
  [SMALL_STATE(23)] = 538,
  [SMALL_STATE(24)] = 558,
  [SMALL_STATE(25)] = 578,
  [SMALL_STATE(26)] = 587,
  [SMALL_STATE(27)] = 596,
  [SMALL_STATE(28)] = 605,
  [SMALL_STATE(29)] = 613,
  [SMALL_STATE(30)] = 621,
  [SMALL_STATE(31)] = 631,
  [SMALL_STATE(32)] = 639,
  [SMALL_STATE(33)] = 649,
  [SMALL_STATE(34)] = 657,
  [SMALL_STATE(35)] = 665,
  [SMALL_STATE(36)] = 673,
  [SMALL_STATE(37)] = 681,
  [SMALL_STATE(38)] = 694,
  [SMALL_STATE(39)] = 707,
  [SMALL_STATE(40)] = 720,
  [SMALL_STATE(41)] = 733,
  [SMALL_STATE(42)] = 746,
  [SMALL_STATE(43)] = 755,
  [SMALL_STATE(44)] = 765,
  [SMALL_STATE(45)] = 771,
  [SMALL_STATE(46)] = 779,
  [SMALL_STATE(47)] = 789,
  [SMALL_STATE(48)] = 795,
  [SMALL_STATE(49)] = 805,
  [SMALL_STATE(50)] = 815,
  [SMALL_STATE(51)] = 825,
  [SMALL_STATE(52)] = 831,
  [SMALL_STATE(53)] = 837,
  [SMALL_STATE(54)] = 847,
  [SMALL_STATE(55)] = 853,
  [SMALL_STATE(56)] = 863,
  [SMALL_STATE(57)] = 873,
  [SMALL_STATE(58)] = 878,
  [SMALL_STATE(59)] = 883,
  [SMALL_STATE(60)] = 890,
  [SMALL_STATE(61)] = 895,
  [SMALL_STATE(62)] = 900,
  [SMALL_STATE(63)] = 907,
  [SMALL_STATE(64)] = 911,
  [SMALL_STATE(65)] = 915,
  [SMALL_STATE(66)] = 919,
  [SMALL_STATE(67)] = 923,
  [SMALL_STATE(68)] = 927,
  [SMALL_STATE(69)] = 931,
  [SMALL_STATE(70)] = 935,
  [SMALL_STATE(71)] = 939,
  [SMALL_STATE(72)] = 943,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_identifier, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any_identifier, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespaced_identifier, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespaced_identifier, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespaced_identifier, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespaced_identifier, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 6, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 5, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [184] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
