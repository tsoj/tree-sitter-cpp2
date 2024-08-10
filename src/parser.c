#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 71
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
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
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
    [sym_source_file] = STATE(65),
    [sym_declaration] = STATE(36),
    [aux_sym_source_file_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(9), 1,
      anon_sym_COLON_COLON,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_number,
    STATE(17), 1,
      sym_namespaced_identifier,
    STATE(24), 1,
      sym_boolean,
    STATE(34), 1,
      sym_expression,
    STATE(50), 1,
      sym_definition,
    STATE(52), 1,
      sym_block,
    ACTIONS(17), 2,
      sym_string,
      sym_float,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 4,
      sym_any_identifier,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [42] = 12,
    ACTIONS(9), 1,
      anon_sym_COLON_COLON,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_number,
    STATE(17), 1,
      sym_namespaced_identifier,
    STATE(24), 1,
      sym_boolean,
    STATE(34), 1,
      sym_expression,
    STATE(51), 1,
      sym_definition,
    STATE(52), 1,
      sym_block,
    ACTIONS(17), 2,
      sym_string,
      sym_float,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 4,
      sym_any_identifier,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [84] = 11,
    ACTIONS(9), 1,
      anon_sym_COLON_COLON,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_namespaced_identifier,
    STATE(24), 1,
      sym_boolean,
    STATE(33), 1,
      sym_expression,
    STATE(69), 1,
      sym_arguments,
    ACTIONS(17), 2,
      sym_string,
      sym_float,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 4,
      sym_any_identifier,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [123] = 11,
    ACTIONS(9), 1,
      anon_sym_COLON_COLON,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_namespaced_identifier,
    STATE(24), 1,
      sym_boolean,
    STATE(33), 1,
      sym_expression,
    STATE(70), 1,
      sym_arguments,
    ACTIONS(17), 2,
      sym_string,
      sym_float,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 4,
      sym_any_identifier,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [162] = 9,
    ACTIONS(9), 1,
      anon_sym_COLON_COLON,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_number,
    STATE(17), 1,
      sym_namespaced_identifier,
    STATE(24), 1,
      sym_boolean,
    STATE(38), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_string,
      sym_float,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 4,
      sym_any_identifier,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [195] = 9,
    ACTIONS(9), 1,
      anon_sym_COLON_COLON,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_number,
    STATE(17), 1,
      sym_namespaced_identifier,
    STATE(24), 1,
      sym_boolean,
    STATE(43), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_string,
      sym_float,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 4,
      sym_any_identifier,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [228] = 9,
    ACTIONS(9), 1,
      anon_sym_COLON_COLON,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_number,
    STATE(17), 1,
      sym_namespaced_identifier,
    STATE(24), 1,
      sym_boolean,
    STATE(46), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_string,
      sym_float,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 4,
      sym_any_identifier,
      sym_function_call,
      sym_method_call,
      sym_literal,
  [261] = 9,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(28), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    ACTIONS(36), 1,
      anon_sym_return,
    STATE(17), 1,
      sym_namespaced_identifier,
    STATE(64), 1,
      sym_any_identifier,
    STATE(9), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(63), 3,
      sym_declaration,
      sym_assignment,
      sym_return_statement,
  [292] = 9,
    ACTIONS(9), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      anon_sym_SEMI,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      anon_sym_return,
    STATE(17), 1,
      sym_namespaced_identifier,
    STATE(64), 1,
      sym_any_identifier,
    STATE(9), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(63), 3,
      sym_declaration,
      sym_assignment,
      sym_return_statement,
  [323] = 9,
    ACTIONS(9), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      anon_sym_SEMI,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_return,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_namespaced_identifier,
    STATE(64), 1,
      sym_any_identifier,
    STATE(10), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(63), 3,
      sym_declaration,
      sym_assignment,
      sym_return_statement,
  [354] = 3,
    ACTIONS(51), 1,
      anon_sym_COLON_COLON,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(49), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [371] = 3,
    ACTIONS(51), 1,
      anon_sym_COLON_COLON,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(55), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [388] = 3,
    ACTIONS(51), 1,
      anon_sym_COLON_COLON,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(59), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [405] = 2,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(59), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [419] = 2,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(55), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [433] = 2,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(49), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [447] = 2,
    ACTIONS(65), 1,
      anon_sym_DOT,
    ACTIONS(63), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [460] = 2,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(67), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [473] = 2,
    ACTIONS(73), 1,
      anon_sym_DOT,
    ACTIONS(71), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [486] = 2,
    ACTIONS(77), 1,
      anon_sym_DOT,
    ACTIONS(75), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [499] = 2,
    ACTIONS(81), 1,
      anon_sym_DOT,
    ACTIONS(79), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [512] = 2,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(83), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [525] = 2,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [538] = 6,
    ACTIONS(9), 1,
      anon_sym_COLON_COLON,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_namespaced_identifier,
    STATE(62), 1,
      sym_type,
    STATE(35), 2,
      sym_any_identifier,
      sym_function_type,
  [558] = 2,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    ACTIONS(95), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [570] = 2,
    ACTIONS(101), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [582] = 6,
    ACTIONS(9), 1,
      anon_sym_COLON_COLON,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_namespaced_identifier,
    STATE(31), 1,
      sym_type,
    STATE(35), 2,
      sym_any_identifier,
      sym_function_type,
  [602] = 6,
    ACTIONS(9), 1,
      anon_sym_COLON_COLON,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_namespaced_identifier,
    STATE(45), 1,
      sym_type,
    STATE(35), 2,
      sym_any_identifier,
      sym_function_type,
  [622] = 6,
    ACTIONS(9), 1,
      anon_sym_COLON_COLON,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_namespaced_identifier,
    STATE(32), 1,
      sym_type,
    STATE(35), 2,
      sym_any_identifier,
      sym_function_type,
  [642] = 1,
    ACTIONS(103), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [651] = 1,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [660] = 6,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    STATE(56), 1,
      aux_sym_arguments_repeat1,
  [679] = 4,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
  [694] = 1,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [703] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    STATE(39), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [717] = 2,
    ACTIONS(127), 2,
      sym_identifier,
      anon_sym_return,
    ACTIONS(125), 3,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
  [727] = 4,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(129), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [741] = 4,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 1,
      anon_sym_SEMI,
    ACTIONS(136), 1,
      sym_identifier,
    STATE(39), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [755] = 2,
    ACTIONS(141), 2,
      sym_identifier,
      anon_sym_return,
    ACTIONS(139), 3,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
  [765] = 4,
    ACTIONS(49), 1,
      anon_sym_EQ,
    ACTIONS(51), 1,
      anon_sym_COLON_COLON,
    ACTIONS(143), 1,
      anon_sym_COLON,
    ACTIONS(145), 1,
      anon_sym_COLON_EQ,
  [778] = 4,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym_parameter,
    STATE(66), 1,
      sym_parameters,
  [791] = 4,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(151), 1,
      anon_sym_SEMI,
  [804] = 4,
    ACTIONS(9), 1,
      anon_sym_COLON_COLON,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(17), 1,
      sym_namespaced_identifier,
    STATE(68), 1,
      sym_any_identifier,
  [817] = 2,
    ACTIONS(155), 1,
      anon_sym_EQ,
    ACTIONS(153), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
  [826] = 4,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(157), 1,
      anon_sym_SEMI,
  [839] = 3,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_parameters_repeat1,
  [849] = 3,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_parameters_repeat1,
  [859] = 1,
    ACTIONS(168), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
  [865] = 1,
    ACTIONS(153), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
  [871] = 1,
    ACTIONS(170), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
  [877] = 1,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
  [883] = 3,
    ACTIONS(9), 1,
      anon_sym_COLON_COLON,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(16), 1,
      sym_namespaced_identifier,
  [893] = 3,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_arguments_repeat1,
  [903] = 3,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_parameters_repeat1,
  [913] = 3,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_arguments_repeat1,
  [923] = 1,
    ACTIONS(181), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_identifier,
  [929] = 3,
    ACTIONS(9), 1,
      anon_sym_COLON_COLON,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(15), 1,
      sym_namespaced_identifier,
  [939] = 1,
    ACTIONS(163), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [944] = 2,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(59), 1,
      sym_parameter,
  [951] = 2,
    ACTIONS(143), 1,
      anon_sym_COLON,
    ACTIONS(145), 1,
      anon_sym_COLON_EQ,
  [958] = 1,
    ACTIONS(185), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [963] = 1,
    ACTIONS(187), 1,
      anon_sym_SEMI,
  [967] = 1,
    ACTIONS(189), 1,
      anon_sym_EQ,
  [971] = 1,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
  [975] = 1,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
  [979] = 1,
    ACTIONS(195), 1,
      anon_sym_COLON,
  [983] = 1,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
  [987] = 1,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
  [991] = 1,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 162,
  [SMALL_STATE(7)] = 195,
  [SMALL_STATE(8)] = 228,
  [SMALL_STATE(9)] = 261,
  [SMALL_STATE(10)] = 292,
  [SMALL_STATE(11)] = 323,
  [SMALL_STATE(12)] = 354,
  [SMALL_STATE(13)] = 371,
  [SMALL_STATE(14)] = 388,
  [SMALL_STATE(15)] = 405,
  [SMALL_STATE(16)] = 419,
  [SMALL_STATE(17)] = 433,
  [SMALL_STATE(18)] = 447,
  [SMALL_STATE(19)] = 460,
  [SMALL_STATE(20)] = 473,
  [SMALL_STATE(21)] = 486,
  [SMALL_STATE(22)] = 499,
  [SMALL_STATE(23)] = 512,
  [SMALL_STATE(24)] = 525,
  [SMALL_STATE(25)] = 538,
  [SMALL_STATE(26)] = 558,
  [SMALL_STATE(27)] = 570,
  [SMALL_STATE(28)] = 582,
  [SMALL_STATE(29)] = 602,
  [SMALL_STATE(30)] = 622,
  [SMALL_STATE(31)] = 642,
  [SMALL_STATE(32)] = 651,
  [SMALL_STATE(33)] = 660,
  [SMALL_STATE(34)] = 679,
  [SMALL_STATE(35)] = 694,
  [SMALL_STATE(36)] = 703,
  [SMALL_STATE(37)] = 717,
  [SMALL_STATE(38)] = 727,
  [SMALL_STATE(39)] = 741,
  [SMALL_STATE(40)] = 755,
  [SMALL_STATE(41)] = 765,
  [SMALL_STATE(42)] = 778,
  [SMALL_STATE(43)] = 791,
  [SMALL_STATE(44)] = 804,
  [SMALL_STATE(45)] = 817,
  [SMALL_STATE(46)] = 826,
  [SMALL_STATE(47)] = 839,
  [SMALL_STATE(48)] = 849,
  [SMALL_STATE(49)] = 859,
  [SMALL_STATE(50)] = 865,
  [SMALL_STATE(51)] = 871,
  [SMALL_STATE(52)] = 877,
  [SMALL_STATE(53)] = 883,
  [SMALL_STATE(54)] = 893,
  [SMALL_STATE(55)] = 903,
  [SMALL_STATE(56)] = 913,
  [SMALL_STATE(57)] = 923,
  [SMALL_STATE(58)] = 929,
  [SMALL_STATE(59)] = 939,
  [SMALL_STATE(60)] = 944,
  [SMALL_STATE(61)] = 951,
  [SMALL_STATE(62)] = 958,
  [SMALL_STATE(63)] = 963,
  [SMALL_STATE(64)] = 967,
  [SMALL_STATE(65)] = 971,
  [SMALL_STATE(66)] = 975,
  [SMALL_STATE(67)] = 979,
  [SMALL_STATE(68)] = 983,
  [SMALL_STATE(69)] = 987,
  [SMALL_STATE(70)] = 991,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any_identifier, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any_identifier, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespaced_identifier, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespaced_identifier, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespaced_identifier, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespaced_identifier, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 6, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_call, 6, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 5, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_call, 5, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [191] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
