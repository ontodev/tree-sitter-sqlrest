#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 64
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_QMARK = 1,
  anon_sym_AMP = 2,
  anon_sym_select_EQ = 3,
  anon_sym_COMMA = 4,
  anon_sym_COLON = 5,
  anon_sym_order_EQ = 6,
  anon_sym_DOT = 7,
  anon_sym_desc = 8,
  anon_sym_asc = 9,
  anon_sym_EQin_DOT = 10,
  anon_sym_EQnot_in_DOT = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_EQ = 14,
  sym_eq = 15,
  sym_not_eq = 16,
  sym_lt = 17,
  sym_gt = 18,
  sym_lte = 19,
  sym_gte = 20,
  sym_like = 21,
  sym_not_like = 22,
  sym_ilike = 23,
  sym_not_ilike = 24,
  sym_is = 25,
  sym_not_is = 26,
  anon_sym_limit_EQ = 27,
  anon_sym_offset_EQ = 28,
  sym_STRING = 29,
  anon_sym_DQUOTE = 30,
  sym_VALUE_STRING = 31,
  sym_NUMBER = 32,
  sym_query = 33,
  sym_expression = 34,
  sym_part = 35,
  sym_select = 36,
  sym_optionally_aliased_column = 37,
  sym_order = 38,
  sym_ordering = 39,
  sym_filter = 40,
  sym_special_filter = 41,
  sym_in = 42,
  sym_not_in = 43,
  sym_list = 44,
  sym_simple_filter = 45,
  sym_operator = 46,
  sym_limit = 47,
  sym_offset = 48,
  sym_table = 49,
  sym_column = 50,
  sym_alias = 51,
  sym_value = 52,
  sym_DOUBLE_QUOTED_VALUE_STRING = 53,
  aux_sym_expression_repeat1 = 54,
  aux_sym_select_repeat1 = 55,
  aux_sym_order_repeat1 = 56,
  aux_sym_list_repeat1 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AMP] = "&",
  [anon_sym_select_EQ] = "select=",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_order_EQ] = "order=",
  [anon_sym_DOT] = ".",
  [anon_sym_desc] = "desc",
  [anon_sym_asc] = "asc",
  [anon_sym_EQin_DOT] = "=in.",
  [anon_sym_EQnot_in_DOT] = "=not_in.",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [sym_eq] = "eq",
  [sym_not_eq] = "not_eq",
  [sym_lt] = "lt",
  [sym_gt] = "gt",
  [sym_lte] = "lte",
  [sym_gte] = "gte",
  [sym_like] = "like",
  [sym_not_like] = "not_like",
  [sym_ilike] = "ilike",
  [sym_not_ilike] = "not_ilike",
  [sym_is] = "is",
  [sym_not_is] = "not_is",
  [anon_sym_limit_EQ] = "limit=",
  [anon_sym_offset_EQ] = "offset=",
  [sym_STRING] = "STRING",
  [anon_sym_DQUOTE] = "\"",
  [sym_VALUE_STRING] = "VALUE_STRING",
  [sym_NUMBER] = "NUMBER",
  [sym_query] = "query",
  [sym_expression] = "expression",
  [sym_part] = "part",
  [sym_select] = "select",
  [sym_optionally_aliased_column] = "optionally_aliased_column",
  [sym_order] = "order",
  [sym_ordering] = "ordering",
  [sym_filter] = "filter",
  [sym_special_filter] = "special_filter",
  [sym_in] = "in",
  [sym_not_in] = "not_in",
  [sym_list] = "list",
  [sym_simple_filter] = "simple_filter",
  [sym_operator] = "operator",
  [sym_limit] = "limit",
  [sym_offset] = "offset",
  [sym_table] = "table",
  [sym_column] = "column",
  [sym_alias] = "alias",
  [sym_value] = "value",
  [sym_DOUBLE_QUOTED_VALUE_STRING] = "DOUBLE_QUOTED_VALUE_STRING",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_select_repeat1] = "select_repeat1",
  [aux_sym_order_repeat1] = "order_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_select_EQ] = anon_sym_select_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_order_EQ] = anon_sym_order_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_desc] = anon_sym_desc,
  [anon_sym_asc] = anon_sym_asc,
  [anon_sym_EQin_DOT] = anon_sym_EQin_DOT,
  [anon_sym_EQnot_in_DOT] = anon_sym_EQnot_in_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_eq] = sym_eq,
  [sym_not_eq] = sym_not_eq,
  [sym_lt] = sym_lt,
  [sym_gt] = sym_gt,
  [sym_lte] = sym_lte,
  [sym_gte] = sym_gte,
  [sym_like] = sym_like,
  [sym_not_like] = sym_not_like,
  [sym_ilike] = sym_ilike,
  [sym_not_ilike] = sym_not_ilike,
  [sym_is] = sym_is,
  [sym_not_is] = sym_not_is,
  [anon_sym_limit_EQ] = anon_sym_limit_EQ,
  [anon_sym_offset_EQ] = anon_sym_offset_EQ,
  [sym_STRING] = sym_STRING,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_VALUE_STRING] = sym_VALUE_STRING,
  [sym_NUMBER] = sym_NUMBER,
  [sym_query] = sym_query,
  [sym_expression] = sym_expression,
  [sym_part] = sym_part,
  [sym_select] = sym_select,
  [sym_optionally_aliased_column] = sym_optionally_aliased_column,
  [sym_order] = sym_order,
  [sym_ordering] = sym_ordering,
  [sym_filter] = sym_filter,
  [sym_special_filter] = sym_special_filter,
  [sym_in] = sym_in,
  [sym_not_in] = sym_not_in,
  [sym_list] = sym_list,
  [sym_simple_filter] = sym_simple_filter,
  [sym_operator] = sym_operator,
  [sym_limit] = sym_limit,
  [sym_offset] = sym_offset,
  [sym_table] = sym_table,
  [sym_column] = sym_column,
  [sym_alias] = sym_alias,
  [sym_value] = sym_value,
  [sym_DOUBLE_QUOTED_VALUE_STRING] = sym_DOUBLE_QUOTED_VALUE_STRING,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_select_repeat1] = aux_sym_select_repeat1,
  [aux_sym_order_repeat1] = aux_sym_order_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_select_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_order_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_desc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQin_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQnot_in_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_eq] = {
    .visible = true,
    .named = true,
  },
  [sym_not_eq] = {
    .visible = true,
    .named = true,
  },
  [sym_lt] = {
    .visible = true,
    .named = true,
  },
  [sym_gt] = {
    .visible = true,
    .named = true,
  },
  [sym_lte] = {
    .visible = true,
    .named = true,
  },
  [sym_gte] = {
    .visible = true,
    .named = true,
  },
  [sym_like] = {
    .visible = true,
    .named = true,
  },
  [sym_not_like] = {
    .visible = true,
    .named = true,
  },
  [sym_ilike] = {
    .visible = true,
    .named = true,
  },
  [sym_not_ilike] = {
    .visible = true,
    .named = true,
  },
  [sym_is] = {
    .visible = true,
    .named = true,
  },
  [sym_not_is] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_limit_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_offset_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_STRING] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_VALUE_STRING] = {
    .visible = true,
    .named = true,
  },
  [sym_NUMBER] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_part] = {
    .visible = true,
    .named = true,
  },
  [sym_select] = {
    .visible = true,
    .named = true,
  },
  [sym_optionally_aliased_column] = {
    .visible = true,
    .named = true,
  },
  [sym_order] = {
    .visible = true,
    .named = true,
  },
  [sym_ordering] = {
    .visible = true,
    .named = true,
  },
  [sym_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_special_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_in] = {
    .visible = true,
    .named = true,
  },
  [sym_not_in] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_limit] = {
    .visible = true,
    .named = true,
  },
  [sym_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_column] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_DOUBLE_QUOTED_VALUE_STRING] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_order_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(62);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '?') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(73);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(90);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'k') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'k') ADVANCE(19);
      END_STATE();
    case 37:
      if (lookahead == 'k') ADVANCE(20);
      END_STATE();
    case 38:
      if (lookahead == 'k') ADVANCE(21);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 48:
      if (lookahead == 'q') ADVANCE(77);
      END_STATE();
    case 49:
      if (lookahead == 'q') ADVANCE(78);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 60:
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 61:
      if (eof) ADVANCE(62);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '?') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_select_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_order_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_desc);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_asc);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EQin_DOT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_EQnot_in_DOT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_not_eq);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_lte);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_gte);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_like);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_not_like);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_ilike);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_not_ilike);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_is);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_not_is);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_limit_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_offset_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == ' ') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 's') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'm') ADVANCE(106);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_VALUE_STRING);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_NUMBER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 60},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_select_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_order_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_desc] = ACTIONS(1),
    [anon_sym_asc] = ACTIONS(1),
    [anon_sym_EQin_DOT] = ACTIONS(1),
    [anon_sym_EQnot_in_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_eq] = ACTIONS(1),
    [sym_not_eq] = ACTIONS(1),
    [sym_lt] = ACTIONS(1),
    [sym_gt] = ACTIONS(1),
    [sym_lte] = ACTIONS(1),
    [sym_gte] = ACTIONS(1),
    [sym_like] = ACTIONS(1),
    [sym_not_like] = ACTIONS(1),
    [sym_ilike] = ACTIONS(1),
    [sym_not_ilike] = ACTIONS(1),
    [sym_is] = ACTIONS(1),
    [sym_not_is] = ACTIONS(1),
    [anon_sym_limit_EQ] = ACTIONS(1),
    [anon_sym_offset_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_NUMBER] = ACTIONS(1),
  },
  [1] = {
    [sym_query] = STATE(62),
    [sym_table] = STATE(30),
    [sym_STRING] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(5), 1,
      anon_sym_select_EQ,
    ACTIONS(7), 1,
      anon_sym_order_EQ,
    ACTIONS(9), 1,
      anon_sym_limit_EQ,
    ACTIONS(11), 1,
      anon_sym_offset_EQ,
    ACTIONS(13), 1,
      sym_STRING,
    STATE(26), 1,
      sym_column,
    STATE(46), 1,
      sym_part,
    STATE(47), 2,
      sym_in,
      sym_not_in,
    STATE(53), 2,
      sym_special_filter,
      sym_simple_filter,
    STATE(49), 5,
      sym_select,
      sym_order,
      sym_filter,
      sym_limit,
      sym_offset,
  [37] = 10,
    ACTIONS(5), 1,
      anon_sym_select_EQ,
    ACTIONS(7), 1,
      anon_sym_order_EQ,
    ACTIONS(9), 1,
      anon_sym_limit_EQ,
    ACTIONS(11), 1,
      anon_sym_offset_EQ,
    ACTIONS(13), 1,
      sym_STRING,
    STATE(26), 1,
      sym_column,
    STATE(34), 1,
      sym_part,
    STATE(47), 2,
      sym_in,
      sym_not_in,
    STATE(53), 2,
      sym_special_filter,
      sym_simple_filter,
    STATE(49), 5,
      sym_select,
      sym_order,
      sym_filter,
      sym_limit,
      sym_offset,
  [74] = 3,
    STATE(63), 1,
      sym_operator,
    ACTIONS(17), 2,
      sym_lt,
      sym_gt,
    ACTIONS(15), 10,
      sym_eq,
      sym_not_eq,
      sym_lte,
      sym_gte,
      sym_like,
      sym_not_like,
      sym_ilike,
      sym_not_ilike,
      sym_is,
      sym_not_is,
  [94] = 2,
    ACTIONS(21), 1,
      anon_sym_EQ,
    ACTIONS(19), 6,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_EQin_DOT,
      anon_sym_EQnot_in_DOT,
  [106] = 4,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    ACTIONS(27), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_order_repeat1,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [120] = 1,
    ACTIONS(29), 4,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [127] = 4,
    ACTIONS(31), 1,
      sym_STRING,
    STATE(18), 1,
      sym_optionally_aliased_column,
    STATE(27), 1,
      sym_column,
    STATE(59), 1,
      sym_alias,
  [140] = 3,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_order_repeat1,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [151] = 4,
    ACTIONS(35), 1,
      sym_STRING,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      sym_DOUBLE_QUOTED_VALUE_STRING,
    STATE(40), 1,
      sym_value,
  [164] = 3,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_list_repeat1,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [175] = 4,
    ACTIONS(31), 1,
      sym_STRING,
    STATE(27), 1,
      sym_column,
    STATE(38), 1,
      sym_optionally_aliased_column,
    STATE(59), 1,
      sym_alias,
  [188] = 3,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_order_repeat1,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [199] = 3,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_order_repeat1,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [210] = 2,
    ACTIONS(50), 1,
      anon_sym_DOT,
    ACTIONS(43), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [219] = 3,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_list_repeat1,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [230] = 2,
    ACTIONS(57), 1,
      anon_sym_COLON,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [239] = 3,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_select_repeat1,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [250] = 3,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_select_repeat1,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [261] = 4,
    ACTIONS(35), 1,
      sym_STRING,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      sym_DOUBLE_QUOTED_VALUE_STRING,
    STATE(11), 1,
      sym_value,
  [274] = 4,
    ACTIONS(35), 1,
      sym_STRING,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      sym_DOUBLE_QUOTED_VALUE_STRING,
    STATE(61), 1,
      sym_value,
  [287] = 3,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_order_repeat1,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [298] = 3,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_select_repeat1,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [309] = 3,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_list_repeat1,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [320] = 1,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [327] = 3,
    ACTIONS(76), 1,
      anon_sym_EQin_DOT,
    ACTIONS(78), 1,
      anon_sym_EQnot_in_DOT,
    ACTIONS(80), 1,
      anon_sym_EQ,
  [337] = 1,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [343] = 3,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 1,
      anon_sym_AMP,
    STATE(36), 1,
      aux_sym_expression_repeat1,
  [353] = 1,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [359] = 3,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      anon_sym_QMARK,
    STATE(57), 1,
      sym_expression,
  [369] = 1,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [375] = 2,
    STATE(31), 1,
      sym_ordering,
    ACTIONS(96), 2,
      anon_sym_desc,
      anon_sym_asc,
  [383] = 2,
    STATE(14), 1,
      sym_ordering,
    ACTIONS(96), 2,
      anon_sym_desc,
      anon_sym_asc,
  [391] = 3,
    ACTIONS(86), 1,
      anon_sym_AMP,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      aux_sym_expression_repeat1,
  [401] = 1,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [407] = 3,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      anon_sym_AMP,
    STATE(36), 1,
      aux_sym_expression_repeat1,
  [417] = 1,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [423] = 1,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [429] = 1,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_QMARK,
  [434] = 1,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [439] = 2,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_list,
  [446] = 1,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [451] = 1,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [456] = 1,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [461] = 1,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [466] = 1,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [471] = 1,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [476] = 2,
    ACTIONS(125), 1,
      sym_STRING,
    STATE(15), 1,
      sym_column,
  [483] = 1,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [488] = 2,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_list,
  [495] = 2,
    ACTIONS(125), 1,
      sym_STRING,
    STATE(37), 1,
      sym_column,
  [502] = 2,
    ACTIONS(125), 1,
      sym_STRING,
    STATE(6), 1,
      sym_column,
  [509] = 1,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [514] = 1,
    ACTIONS(131), 1,
      sym_NUMBER,
  [518] = 1,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
  [522] = 1,
    ACTIONS(135), 1,
      anon_sym_DOT,
  [526] = 1,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
  [530] = 1,
    ACTIONS(139), 1,
      sym_NUMBER,
  [534] = 1,
    ACTIONS(141), 1,
      anon_sym_COLON,
  [538] = 1,
    ACTIONS(143), 1,
      sym_VALUE_STRING,
  [542] = 1,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
  [546] = 1,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
  [550] = 1,
    ACTIONS(149), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 94,
  [SMALL_STATE(6)] = 106,
  [SMALL_STATE(7)] = 120,
  [SMALL_STATE(8)] = 127,
  [SMALL_STATE(9)] = 140,
  [SMALL_STATE(10)] = 151,
  [SMALL_STATE(11)] = 164,
  [SMALL_STATE(12)] = 175,
  [SMALL_STATE(13)] = 188,
  [SMALL_STATE(14)] = 199,
  [SMALL_STATE(15)] = 210,
  [SMALL_STATE(16)] = 219,
  [SMALL_STATE(17)] = 230,
  [SMALL_STATE(18)] = 239,
  [SMALL_STATE(19)] = 250,
  [SMALL_STATE(20)] = 261,
  [SMALL_STATE(21)] = 274,
  [SMALL_STATE(22)] = 287,
  [SMALL_STATE(23)] = 298,
  [SMALL_STATE(24)] = 309,
  [SMALL_STATE(25)] = 320,
  [SMALL_STATE(26)] = 327,
  [SMALL_STATE(27)] = 337,
  [SMALL_STATE(28)] = 343,
  [SMALL_STATE(29)] = 353,
  [SMALL_STATE(30)] = 359,
  [SMALL_STATE(31)] = 369,
  [SMALL_STATE(32)] = 375,
  [SMALL_STATE(33)] = 383,
  [SMALL_STATE(34)] = 391,
  [SMALL_STATE(35)] = 401,
  [SMALL_STATE(36)] = 407,
  [SMALL_STATE(37)] = 417,
  [SMALL_STATE(38)] = 423,
  [SMALL_STATE(39)] = 429,
  [SMALL_STATE(40)] = 434,
  [SMALL_STATE(41)] = 439,
  [SMALL_STATE(42)] = 446,
  [SMALL_STATE(43)] = 451,
  [SMALL_STATE(44)] = 456,
  [SMALL_STATE(45)] = 461,
  [SMALL_STATE(46)] = 466,
  [SMALL_STATE(47)] = 471,
  [SMALL_STATE(48)] = 476,
  [SMALL_STATE(49)] = 483,
  [SMALL_STATE(50)] = 488,
  [SMALL_STATE(51)] = 495,
  [SMALL_STATE(52)] = 502,
  [SMALL_STATE(53)] = 509,
  [SMALL_STATE(54)] = 514,
  [SMALL_STATE(55)] = 518,
  [SMALL_STATE(56)] = 522,
  [SMALL_STATE(57)] = 526,
  [SMALL_STATE(58)] = 530,
  [SMALL_STATE(59)] = 534,
  [SMALL_STATE(60)] = 538,
  [SMALL_STATE(61)] = 542,
  [SMALL_STATE(62)] = 546,
  [SMALL_STATE(63)] = 550,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order, 5),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_repeat1, 2), SHIFT_REPEAT(48),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order, 4),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(21),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_repeat1, 2), SHIFT_REPEAT(12),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOUBLE_QUOTED_VALUE_STRING, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionally_aliased_column, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_repeat1, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordering, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionally_aliased_column, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_filter, 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_in, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_filter, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [147] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sqlrest(void) {
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
