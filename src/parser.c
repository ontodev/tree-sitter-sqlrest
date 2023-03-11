#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
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
  anon_sym_DQUOTE = 31,
  sym_VALUE_STRING = 32,
  sym_NUMBER = 33,
  sym_query = 34,
  sym_expression = 35,
  sym_part = 36,
  sym_select = 37,
  sym_optionally_aliased_column = 38,
  sym_order = 39,
  sym_ordering = 40,
  sym_filter = 41,
  sym_special_filter = 42,
  sym_in = 43,
  sym_not_in = 44,
  sym_list = 45,
  sym_simple_filter = 46,
  sym_operator = 47,
  sym_limit = 48,
  sym_offset = 49,
  sym_table = 50,
  sym_column = 51,
  sym_alias = 52,
  sym_cast = 53,
  sym_value = 54,
  sym_DOUBLE_QUOTED_VALUE_STRING = 55,
  aux_sym_expression_repeat1 = 56,
  aux_sym_select_repeat1 = 57,
  aux_sym_order_repeat1 = 58,
  aux_sym_list_repeat1 = 59,
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
  [sym_cast] = "cast",
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
  [sym_cast] = sym_cast,
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
  [sym_cast] = {
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
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(62);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '=') ADVANCE(77);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(104);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(73);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(74);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(90);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(91);
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
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(71);
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
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(87);
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
      if (lookahead == 't') ADVANCE(80);
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
      if (lookahead == 's') ADVANCE(88);
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
      if (lookahead == 's') ADVANCE(89);
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
      if (lookahead == 'q') ADVANCE(78);
      END_STATE();
    case 49:
      if (lookahead == 'q') ADVANCE(79);
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
      if (lookahead == 't') ADVANCE(81);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 61:
      if (eof) ADVANCE(62);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '=') ADVANCE(77);
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
      if (lookahead == ':') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_order_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_desc);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_asc);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_EQin_DOT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EQnot_in_DOT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_not_eq);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_lte);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_gte);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_like);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_not_like);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_ilike);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_not_ilike);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_is);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_not_is);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_limit_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_offset_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == ' ') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(104);
      if (lookahead == 's') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_VALUE_STRING);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_NUMBER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
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
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
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
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 60},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
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
    STATE(31), 1,
      sym_column,
    STATE(48), 1,
      sym_part,
    STATE(47), 2,
      sym_special_filter,
      sym_simple_filter,
    STATE(53), 2,
      sym_in,
      sym_not_in,
    STATE(46), 5,
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
    STATE(31), 1,
      sym_column,
    STATE(36), 1,
      sym_part,
    STATE(47), 2,
      sym_special_filter,
      sym_simple_filter,
    STATE(53), 2,
      sym_in,
      sym_not_in,
    STATE(46), 5,
      sym_select,
      sym_order,
      sym_filter,
      sym_limit,
      sym_offset,
  [74] = 3,
    STATE(64), 1,
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
    ACTIONS(19), 7,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
      anon_sym_EQin_DOT,
      anon_sym_EQnot_in_DOT,
  [107] = 4,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    ACTIONS(27), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_order_repeat1,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [121] = 2,
    ACTIONS(29), 1,
      anon_sym_COLON,
    ACTIONS(19), 4,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
  [131] = 3,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_order_repeat1,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [142] = 2,
    ACTIONS(36), 1,
      anon_sym_DOT,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [151] = 3,
    ACTIONS(40), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_select_repeat1,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [162] = 4,
    ACTIONS(43), 1,
      sym_STRING,
    STATE(20), 1,
      sym_optionally_aliased_column,
    STATE(21), 1,
      sym_column,
    STATE(60), 1,
      sym_alias,
  [175] = 3,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_list_repeat1,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [186] = 1,
    ACTIONS(50), 4,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [193] = 4,
    ACTIONS(52), 1,
      sym_STRING,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      sym_DOUBLE_QUOTED_VALUE_STRING,
    STATE(27), 1,
      sym_value,
  [206] = 2,
    ACTIONS(58), 1,
      anon_sym_COLON_COLON,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [215] = 3,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_order_repeat1,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [226] = 3,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_list_repeat1,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [237] = 4,
    ACTIONS(52), 1,
      sym_STRING,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      sym_DOUBLE_QUOTED_VALUE_STRING,
    STATE(66), 1,
      sym_value,
  [250] = 3,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_order_repeat1,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [261] = 3,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_select_repeat1,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [272] = 2,
    ACTIONS(74), 1,
      anon_sym_COLON_COLON,
    ACTIONS(72), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [281] = 3,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_order_repeat1,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [292] = 3,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_select_repeat1,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [303] = 4,
    ACTIONS(43), 1,
      sym_STRING,
    STATE(21), 1,
      sym_column,
    STATE(39), 1,
      sym_optionally_aliased_column,
    STATE(60), 1,
      sym_alias,
  [316] = 1,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [323] = 4,
    ACTIONS(52), 1,
      sym_STRING,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      sym_DOUBLE_QUOTED_VALUE_STRING,
    STATE(51), 1,
      sym_value,
  [336] = 3,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_list_repeat1,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [347] = 3,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 1,
      anon_sym_AMP,
    STATE(37), 1,
      aux_sym_expression_repeat1,
  [357] = 2,
    STATE(38), 1,
      sym_ordering,
    ACTIONS(88), 2,
      anon_sym_desc,
      anon_sym_asc,
  [365] = 3,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      anon_sym_QMARK,
    STATE(63), 1,
      sym_expression,
  [375] = 3,
    ACTIONS(94), 1,
      anon_sym_EQin_DOT,
    ACTIONS(96), 1,
      anon_sym_EQnot_in_DOT,
    ACTIONS(98), 1,
      anon_sym_EQ,
  [385] = 1,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [391] = 1,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [397] = 2,
    STATE(19), 1,
      sym_ordering,
    ACTIONS(88), 2,
      anon_sym_desc,
      anon_sym_asc,
  [405] = 1,
    ACTIONS(102), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [411] = 3,
    ACTIONS(86), 1,
      anon_sym_AMP,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      aux_sym_expression_repeat1,
  [421] = 3,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      anon_sym_AMP,
    STATE(37), 1,
      aux_sym_expression_repeat1,
  [431] = 1,
    ACTIONS(111), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [437] = 1,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [443] = 1,
    ACTIONS(113), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [449] = 1,
    ACTIONS(115), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [455] = 1,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [460] = 2,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      sym_list,
  [467] = 1,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [472] = 2,
    ACTIONS(123), 1,
      sym_STRING,
    STATE(6), 1,
      sym_column,
  [479] = 1,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [484] = 1,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [489] = 1,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [494] = 2,
    ACTIONS(123), 1,
      sym_STRING,
    STATE(9), 1,
      sym_column,
  [501] = 2,
    ACTIONS(123), 1,
      sym_STRING,
    STATE(15), 1,
      sym_column,
  [508] = 1,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [513] = 2,
    ACTIONS(131), 1,
      sym_STRING,
    STATE(33), 1,
      sym_cast,
  [520] = 1,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [525] = 1,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      anon_sym_QMARK,
  [530] = 1,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [535] = 2,
    ACTIONS(131), 1,
      sym_STRING,
    STATE(35), 1,
      sym_cast,
  [542] = 2,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_list,
  [549] = 1,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [554] = 1,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
  [558] = 1,
    ACTIONS(143), 1,
      anon_sym_COLON,
  [562] = 1,
    ACTIONS(145), 1,
      sym_VALUE_STRING,
  [566] = 1,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
  [570] = 1,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
  [574] = 1,
    ACTIONS(151), 1,
      anon_sym_DOT,
  [578] = 1,
    ACTIONS(153), 1,
      sym_NUMBER,
  [582] = 1,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
  [586] = 1,
    ACTIONS(157), 1,
      sym_NUMBER,
  [590] = 1,
    ACTIONS(159), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 94,
  [SMALL_STATE(6)] = 107,
  [SMALL_STATE(7)] = 121,
  [SMALL_STATE(8)] = 131,
  [SMALL_STATE(9)] = 142,
  [SMALL_STATE(10)] = 151,
  [SMALL_STATE(11)] = 162,
  [SMALL_STATE(12)] = 175,
  [SMALL_STATE(13)] = 186,
  [SMALL_STATE(14)] = 193,
  [SMALL_STATE(15)] = 206,
  [SMALL_STATE(16)] = 215,
  [SMALL_STATE(17)] = 226,
  [SMALL_STATE(18)] = 237,
  [SMALL_STATE(19)] = 250,
  [SMALL_STATE(20)] = 261,
  [SMALL_STATE(21)] = 272,
  [SMALL_STATE(22)] = 281,
  [SMALL_STATE(23)] = 292,
  [SMALL_STATE(24)] = 303,
  [SMALL_STATE(25)] = 316,
  [SMALL_STATE(26)] = 323,
  [SMALL_STATE(27)] = 336,
  [SMALL_STATE(28)] = 347,
  [SMALL_STATE(29)] = 357,
  [SMALL_STATE(30)] = 365,
  [SMALL_STATE(31)] = 375,
  [SMALL_STATE(32)] = 385,
  [SMALL_STATE(33)] = 391,
  [SMALL_STATE(34)] = 397,
  [SMALL_STATE(35)] = 405,
  [SMALL_STATE(36)] = 411,
  [SMALL_STATE(37)] = 421,
  [SMALL_STATE(38)] = 431,
  [SMALL_STATE(39)] = 437,
  [SMALL_STATE(40)] = 443,
  [SMALL_STATE(41)] = 449,
  [SMALL_STATE(42)] = 455,
  [SMALL_STATE(43)] = 460,
  [SMALL_STATE(44)] = 467,
  [SMALL_STATE(45)] = 472,
  [SMALL_STATE(46)] = 479,
  [SMALL_STATE(47)] = 484,
  [SMALL_STATE(48)] = 489,
  [SMALL_STATE(49)] = 494,
  [SMALL_STATE(50)] = 501,
  [SMALL_STATE(51)] = 508,
  [SMALL_STATE(52)] = 513,
  [SMALL_STATE(53)] = 520,
  [SMALL_STATE(54)] = 525,
  [SMALL_STATE(55)] = 530,
  [SMALL_STATE(56)] = 535,
  [SMALL_STATE(57)] = 542,
  [SMALL_STATE(58)] = 549,
  [SMALL_STATE(59)] = 554,
  [SMALL_STATE(60)] = 558,
  [SMALL_STATE(61)] = 562,
  [SMALL_STATE(62)] = 566,
  [SMALL_STATE(63)] = 570,
  [SMALL_STATE(64)] = 574,
  [SMALL_STATE(65)] = 578,
  [SMALL_STATE(66)] = 582,
  [SMALL_STATE(67)] = 586,
  [SMALL_STATE(68)] = 590,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_repeat1, 2), SHIFT_REPEAT(49),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_repeat1, 2), SHIFT_REPEAT(24),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(18),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOUBLE_QUOTED_VALUE_STRING, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionally_aliased_column, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order, 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionally_aliased_column, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order, 5),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordering, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionally_aliased_column, 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_repeat1, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_in, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_filter, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_filter, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [147] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
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
