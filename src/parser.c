#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
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
  anon_sym_COLON_COLON = 6,
  anon_sym_order_EQ = 7,
  anon_sym_DOT = 8,
  anon_sym_desc = 9,
  anon_sym_asc = 10,
  anon_sym_EQin_DOT = 11,
  anon_sym_EQnot_in_DOT = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_EQ = 15,
  sym_eq = 16,
  sym_not_eq = 17,
  sym_lt = 18,
  sym_gt = 19,
  sym_lte = 20,
  sym_gte = 21,
  sym_like = 22,
  sym_not_like = 23,
  sym_ilike = 24,
  sym_not_ilike = 25,
  sym_is = 26,
  sym_not_is = 27,
  anon_sym_limit_EQ = 28,
  anon_sym_offset_EQ = 29,
  sym_STRING = 30,
  sym_STRING_WITH_WILDCARDS = 31,
  anon_sym_DQUOTE = 32,
  aux_sym_DOUBLE_QUOTED_NORMAL_VALUE_token1 = 33,
  aux_sym_DOUBLE_QUOTED_LIKE_VALUE_token1 = 34,
  sym_NUMBER = 35,
  sym_query = 36,
  sym_expression = 37,
  sym_part = 38,
  sym_select = 39,
  sym_optionally_aliased_column = 40,
  sym_order = 41,
  sym_ordering = 42,
  sym_filter = 43,
  sym_special_filter = 44,
  sym_in = 45,
  sym_not_in = 46,
  sym_list = 47,
  sym_simple_filter = 48,
  sym_normal_operator = 49,
  sym_like_operator = 50,
  sym_limit = 51,
  sym_offset = 52,
  sym_table = 53,
  sym_column = 54,
  sym_alias = 55,
  sym_cast = 56,
  sym_normal_value = 57,
  sym_like_value = 58,
  sym_DOUBLE_QUOTED_NORMAL_VALUE = 59,
  sym_DOUBLE_QUOTED_LIKE_VALUE = 60,
  aux_sym_expression_repeat1 = 61,
  aux_sym_select_repeat1 = 62,
  aux_sym_order_repeat1 = 63,
  aux_sym_list_repeat1 = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AMP] = "&",
  [anon_sym_select_EQ] = "select=",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_COLON] = "::",
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
  [sym_STRING_WITH_WILDCARDS] = "STRING_WITH_WILDCARDS",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_DOUBLE_QUOTED_NORMAL_VALUE_token1] = "DOUBLE_QUOTED_NORMAL_VALUE_token1",
  [aux_sym_DOUBLE_QUOTED_LIKE_VALUE_token1] = "DOUBLE_QUOTED_LIKE_VALUE_token1",
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
  [sym_normal_operator] = "normal_operator",
  [sym_like_operator] = "like_operator",
  [sym_limit] = "limit",
  [sym_offset] = "offset",
  [sym_table] = "table",
  [sym_column] = "column",
  [sym_alias] = "alias",
  [sym_cast] = "cast",
  [sym_normal_value] = "normal_value",
  [sym_like_value] = "like_value",
  [sym_DOUBLE_QUOTED_NORMAL_VALUE] = "DOUBLE_QUOTED_NORMAL_VALUE",
  [sym_DOUBLE_QUOTED_LIKE_VALUE] = "DOUBLE_QUOTED_LIKE_VALUE",
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
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
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
  [sym_STRING_WITH_WILDCARDS] = sym_STRING_WITH_WILDCARDS,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_DOUBLE_QUOTED_NORMAL_VALUE_token1] = aux_sym_DOUBLE_QUOTED_NORMAL_VALUE_token1,
  [aux_sym_DOUBLE_QUOTED_LIKE_VALUE_token1] = aux_sym_DOUBLE_QUOTED_LIKE_VALUE_token1,
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
  [sym_normal_operator] = sym_normal_operator,
  [sym_like_operator] = sym_like_operator,
  [sym_limit] = sym_limit,
  [sym_offset] = sym_offset,
  [sym_table] = sym_table,
  [sym_column] = sym_column,
  [sym_alias] = sym_alias,
  [sym_cast] = sym_cast,
  [sym_normal_value] = sym_normal_value,
  [sym_like_value] = sym_like_value,
  [sym_DOUBLE_QUOTED_NORMAL_VALUE] = sym_DOUBLE_QUOTED_NORMAL_VALUE,
  [sym_DOUBLE_QUOTED_LIKE_VALUE] = sym_DOUBLE_QUOTED_LIKE_VALUE,
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
  [anon_sym_COLON_COLON] = {
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
  [sym_STRING_WITH_WILDCARDS] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_DOUBLE_QUOTED_NORMAL_VALUE_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_DOUBLE_QUOTED_LIKE_VALUE_token1] = {
    .visible = false,
    .named = false,
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
  [sym_normal_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_like_operator] = {
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
  [sym_cast] = {
    .visible = true,
    .named = true,
  },
  [sym_normal_value] = {
    .visible = true,
    .named = true,
  },
  [sym_like_value] = {
    .visible = true,
    .named = true,
  },
  [sym_DOUBLE_QUOTED_NORMAL_VALUE] = {
    .visible = true,
    .named = true,
  },
  [sym_DOUBLE_QUOTED_LIKE_VALUE] = {
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
  [75] = 75,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(64);
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '&') ADVANCE(66);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ',') ADVANCE(68);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '?') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'g') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(106);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(41)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(118);
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(75);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(76);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(92);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(93);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(54);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'k') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'k') ADVANCE(20);
      END_STATE();
    case 38:
      if (lookahead == 'k') ADVANCE(21);
      END_STATE();
    case 39:
      if (lookahead == 'k') ADVANCE(22);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 49:
      if (lookahead == 'q') ADVANCE(80);
      END_STATE();
    case 50:
      if (lookahead == 'q') ADVANCE(81);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 61:
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 62:
      if (lookahead == ' ' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == ',' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 63:
      if (eof) ADVANCE(64);
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '&') ADVANCE(66);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ',') ADVANCE(68);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '?') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'g') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      END_STATE();
    case 64:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_select_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_order_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_desc);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_asc);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQin_DOT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQnot_in_DOT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_not_eq);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_lte);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_gte);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_like);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_not_like);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_ilike);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_not_ilike);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_is);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_not_is);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_limit_EQ);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_offset_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(106);
      if (lookahead == 's') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(101);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'm') ADVANCE(109);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_STRING_WITH_WILDCARDS);
      if (lookahead == ' ') ADVANCE(118);
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_STRING_WITH_WILDCARDS);
      if (lookahead == ' ' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_DOUBLE_QUOTED_NORMAL_VALUE_token1);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_DOUBLE_QUOTED_LIKE_VALUE_token1);
      if (lookahead == ' ' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == ',' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_NUMBER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
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
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
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
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 62},
  [68] = {.lex_state = 61},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_select_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
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
    [sym_query] = STATE(75),
    [sym_table] = STATE(31),
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
    STATE(42), 1,
      sym_column,
    STATE(50), 1,
      sym_part,
    STATE(48), 2,
      sym_in,
      sym_not_in,
    STATE(54), 2,
      sym_special_filter,
      sym_simple_filter,
    STATE(53), 5,
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
    STATE(39), 1,
      sym_part,
    STATE(42), 1,
      sym_column,
    STATE(48), 2,
      sym_in,
      sym_not_in,
    STATE(54), 2,
      sym_special_filter,
      sym_simple_filter,
    STATE(53), 5,
      sym_select,
      sym_order,
      sym_filter,
      sym_limit,
      sym_offset,
  [74] = 5,
    STATE(70), 1,
      sym_like_operator,
    STATE(72), 1,
      sym_normal_operator,
    ACTIONS(17), 2,
      sym_lt,
      sym_gt,
    ACTIONS(19), 4,
      sym_like,
      sym_not_like,
      sym_ilike,
      sym_not_ilike,
    ACTIONS(15), 6,
      sym_eq,
      sym_not_eq,
      sym_lte,
      sym_gte,
      sym_is,
      sym_not_is,
  [99] = 2,
    ACTIONS(23), 1,
      anon_sym_EQ,
    ACTIONS(21), 7,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
      anon_sym_EQin_DOT,
      anon_sym_EQnot_in_DOT,
  [112] = 2,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(21), 4,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
  [122] = 4,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    ACTIONS(31), 1,
      anon_sym_DOT,
    STATE(26), 1,
      aux_sym_order_repeat1,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [136] = 4,
    ACTIONS(33), 1,
      sym_STRING,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym_DOUBLE_QUOTED_NORMAL_VALUE,
    STATE(58), 1,
      sym_normal_value,
  [149] = 4,
    ACTIONS(37), 1,
      sym_STRING_WITH_WILDCARDS,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_DOUBLE_QUOTED_LIKE_VALUE,
    STATE(58), 1,
      sym_like_value,
  [162] = 3,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_list_repeat1,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [173] = 1,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [180] = 4,
    ACTIONS(48), 1,
      sym_STRING,
    STATE(22), 1,
      sym_column,
    STATE(24), 1,
      sym_optionally_aliased_column,
    STATE(74), 1,
      sym_alias,
  [193] = 4,
    ACTIONS(33), 1,
      sym_STRING,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym_DOUBLE_QUOTED_NORMAL_VALUE,
    STATE(71), 1,
      sym_normal_value,
  [206] = 3,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_order_repeat1,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [217] = 3,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_list_repeat1,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [228] = 1,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [235] = 3,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_order_repeat1,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [246] = 3,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym_order_repeat1,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [257] = 2,
    ACTIONS(65), 1,
      anon_sym_DOT,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [266] = 2,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [275] = 3,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_select_repeat1,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [286] = 2,
    ACTIONS(78), 1,
      anon_sym_COLON_COLON,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [295] = 3,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_list_repeat1,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [306] = 3,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_select_repeat1,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [317] = 4,
    ACTIONS(33), 1,
      sym_STRING,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_normal_value,
    STATE(16), 1,
      sym_DOUBLE_QUOTED_NORMAL_VALUE,
  [330] = 3,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_order_repeat1,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [341] = 3,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_select_repeat1,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [352] = 4,
    ACTIONS(48), 1,
      sym_STRING,
    STATE(22), 1,
      sym_column,
    STATE(41), 1,
      sym_optionally_aliased_column,
    STATE(74), 1,
      sym_alias,
  [365] = 1,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [371] = 1,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [377] = 3,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      anon_sym_QMARK,
    STATE(69), 1,
      sym_expression,
  [387] = 1,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [393] = 1,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [399] = 2,
    STATE(18), 1,
      sym_ordering,
    ACTIONS(102), 2,
      anon_sym_desc,
      anon_sym_asc,
  [407] = 3,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      anon_sym_AMP,
    STATE(37), 1,
      aux_sym_expression_repeat1,
  [417] = 1,
    ACTIONS(108), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [423] = 3,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      anon_sym_AMP,
    STATE(37), 1,
      aux_sym_expression_repeat1,
  [433] = 2,
    STATE(33), 1,
      sym_ordering,
    ACTIONS(102), 2,
      anon_sym_desc,
      anon_sym_asc,
  [441] = 3,
    ACTIONS(106), 1,
      anon_sym_AMP,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      aux_sym_expression_repeat1,
  [451] = 1,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [457] = 1,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [463] = 3,
    ACTIONS(117), 1,
      anon_sym_EQin_DOT,
    ACTIONS(119), 1,
      anon_sym_EQnot_in_DOT,
    ACTIONS(121), 1,
      anon_sym_EQ,
  [473] = 2,
    ACTIONS(123), 1,
      sym_STRING,
    STATE(20), 1,
      sym_column,
  [480] = 1,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [485] = 1,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [490] = 2,
    ACTIONS(129), 1,
      sym_STRING,
    STATE(40), 1,
      sym_cast,
  [497] = 2,
    ACTIONS(123), 1,
      sym_STRING,
    STATE(19), 1,
      sym_column,
  [504] = 1,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [509] = 1,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [514] = 1,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [519] = 2,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_list,
  [526] = 2,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      sym_list,
  [533] = 1,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [538] = 1,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [543] = 1,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [548] = 1,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [553] = 1,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_QMARK,
  [558] = 1,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [563] = 2,
    ACTIONS(129), 1,
      sym_STRING,
    STATE(36), 1,
      sym_cast,
  [570] = 1,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [575] = 2,
    ACTIONS(123), 1,
      sym_STRING,
    STATE(7), 1,
      sym_column,
  [582] = 1,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
  [586] = 1,
    ACTIONS(153), 1,
      sym_NUMBER,
  [590] = 1,
    ACTIONS(155), 1,
      anon_sym_DOT,
  [594] = 1,
    ACTIONS(157), 1,
      anon_sym_DOT,
  [598] = 1,
    ACTIONS(159), 1,
      sym_NUMBER,
  [602] = 1,
    ACTIONS(161), 1,
      aux_sym_DOUBLE_QUOTED_LIKE_VALUE_token1,
  [606] = 1,
    ACTIONS(163), 1,
      aux_sym_DOUBLE_QUOTED_NORMAL_VALUE_token1,
  [610] = 1,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
  [614] = 1,
    ACTIONS(167), 1,
      anon_sym_DOT,
  [618] = 1,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
  [622] = 1,
    ACTIONS(171), 1,
      anon_sym_DOT,
  [626] = 1,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
  [630] = 1,
    ACTIONS(175), 1,
      anon_sym_COLON,
  [634] = 1,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 122,
  [SMALL_STATE(8)] = 136,
  [SMALL_STATE(9)] = 149,
  [SMALL_STATE(10)] = 162,
  [SMALL_STATE(11)] = 173,
  [SMALL_STATE(12)] = 180,
  [SMALL_STATE(13)] = 193,
  [SMALL_STATE(14)] = 206,
  [SMALL_STATE(15)] = 217,
  [SMALL_STATE(16)] = 228,
  [SMALL_STATE(17)] = 235,
  [SMALL_STATE(18)] = 246,
  [SMALL_STATE(19)] = 257,
  [SMALL_STATE(20)] = 266,
  [SMALL_STATE(21)] = 275,
  [SMALL_STATE(22)] = 286,
  [SMALL_STATE(23)] = 295,
  [SMALL_STATE(24)] = 306,
  [SMALL_STATE(25)] = 317,
  [SMALL_STATE(26)] = 330,
  [SMALL_STATE(27)] = 341,
  [SMALL_STATE(28)] = 352,
  [SMALL_STATE(29)] = 365,
  [SMALL_STATE(30)] = 371,
  [SMALL_STATE(31)] = 377,
  [SMALL_STATE(32)] = 387,
  [SMALL_STATE(33)] = 393,
  [SMALL_STATE(34)] = 399,
  [SMALL_STATE(35)] = 407,
  [SMALL_STATE(36)] = 417,
  [SMALL_STATE(37)] = 423,
  [SMALL_STATE(38)] = 433,
  [SMALL_STATE(39)] = 441,
  [SMALL_STATE(40)] = 451,
  [SMALL_STATE(41)] = 457,
  [SMALL_STATE(42)] = 463,
  [SMALL_STATE(43)] = 473,
  [SMALL_STATE(44)] = 480,
  [SMALL_STATE(45)] = 485,
  [SMALL_STATE(46)] = 490,
  [SMALL_STATE(47)] = 497,
  [SMALL_STATE(48)] = 504,
  [SMALL_STATE(49)] = 509,
  [SMALL_STATE(50)] = 514,
  [SMALL_STATE(51)] = 519,
  [SMALL_STATE(52)] = 526,
  [SMALL_STATE(53)] = 533,
  [SMALL_STATE(54)] = 538,
  [SMALL_STATE(55)] = 543,
  [SMALL_STATE(56)] = 548,
  [SMALL_STATE(57)] = 553,
  [SMALL_STATE(58)] = 558,
  [SMALL_STATE(59)] = 563,
  [SMALL_STATE(60)] = 570,
  [SMALL_STATE(61)] = 575,
  [SMALL_STATE(62)] = 582,
  [SMALL_STATE(63)] = 586,
  [SMALL_STATE(64)] = 590,
  [SMALL_STATE(65)] = 594,
  [SMALL_STATE(66)] = 598,
  [SMALL_STATE(67)] = 602,
  [SMALL_STATE(68)] = 606,
  [SMALL_STATE(69)] = 610,
  [SMALL_STATE(70)] = 614,
  [SMALL_STATE(71)] = 618,
  [SMALL_STATE(72)] = 622,
  [SMALL_STATE(73)] = 626,
  [SMALL_STATE(74)] = 630,
  [SMALL_STATE(75)] = 634,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(13),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOUBLE_QUOTED_NORMAL_VALUE, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order, 5),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_value, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_repeat1, 2), SHIFT_REPEAT(47),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionally_aliased_column, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_repeat1, 2), SHIFT_REPEAT(28),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionally_aliased_column, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordering, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_repeat1, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionally_aliased_column, 5),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOUBLE_QUOTED_LIKE_VALUE, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_filter, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_in, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_like_value, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_filter, 5),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_like_operator, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_operator, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [177] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
