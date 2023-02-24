#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_QMARK = 1,
  anon_sym_AMP = 2,
  anon_sym_select_EQ = 3,
  anon_sym_COMMA = 4,
  anon_sym_order_EQ = 5,
  anon_sym_DOT = 6,
  anon_sym_desc = 7,
  anon_sym_asc = 8,
  anon_sym_EQin_DOT = 9,
  anon_sym_EQnot_in_DOT = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_EQ = 13,
  sym_eq = 14,
  sym_not_eq = 15,
  sym_lt = 16,
  sym_gt = 17,
  sym_lte = 18,
  sym_gte = 19,
  sym_like = 20,
  sym_not_like = 21,
  sym_ilike = 22,
  sym_not_ilike = 23,
  sym_is = 24,
  sym_not_is = 25,
  anon_sym_limit_EQ = 26,
  anon_sym_offset_EQ = 27,
  sym_STRING = 28,
  sym_NUMBER = 29,
  anon_sym_DQUOTE = 30,
  sym_query = 31,
  sym_expression = 32,
  sym_part = 33,
  sym_select = 34,
  sym_order = 35,
  sym_ordering = 36,
  sym_filter = 37,
  sym_special_filter = 38,
  sym_in = 39,
  sym_not_in = 40,
  sym_list = 41,
  sym_simple_filter = 42,
  sym_operator = 43,
  sym_limit = 44,
  sym_offset = 45,
  sym_table = 46,
  sym_column = 47,
  sym_value = 48,
  sym_DOUBLE_QUOTED_STRING = 49,
  aux_sym_expression_repeat1 = 50,
  aux_sym_select_repeat1 = 51,
  aux_sym_order_repeat1 = 52,
  aux_sym_list_repeat1 = 53,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AMP] = "&",
  [anon_sym_select_EQ] = "select=",
  [anon_sym_COMMA] = ",",
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
  [sym_NUMBER] = "NUMBER",
  [anon_sym_DQUOTE] = "\"",
  [sym_query] = "query",
  [sym_expression] = "expression",
  [sym_part] = "part",
  [sym_select] = "select",
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
  [sym_value] = "value",
  [sym_DOUBLE_QUOTED_STRING] = "DOUBLE_QUOTED_STRING",
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
  [sym_NUMBER] = sym_NUMBER,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_query] = sym_query,
  [sym_expression] = sym_expression,
  [sym_part] = sym_part,
  [sym_select] = sym_select,
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
  [sym_value] = sym_value,
  [sym_DOUBLE_QUOTED_STRING] = sym_DOUBLE_QUOTED_STRING,
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
  [sym_NUMBER] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
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
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_DOUBLE_QUOTED_STRING] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(65);
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '&') ADVANCE(67);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '?') ADVANCE(66);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == 'g') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(76);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(77);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'g') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'g') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 37:
      if (lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 38:
      if (lookahead == 'k') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == 'k') ADVANCE(20);
      END_STATE();
    case 40:
      if (lookahead == 'k') ADVANCE(21);
      END_STATE();
    case 41:
      if (lookahead == 'k') ADVANCE(22);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 52:
      if (lookahead == 'q') ADVANCE(81);
      END_STATE();
    case 53:
      if (lookahead == 'q') ADVANCE(83);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '&') ADVANCE(67);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '?') ADVANCE(66);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'g') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_select_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_order_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_desc);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_desc);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_asc);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_asc);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQin_DOT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_EQnot_in_DOT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_eq);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_not_eq);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_not_eq);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_lte);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_lte);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_gte);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_gte);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_like);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_like);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_not_like);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_not_like);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_ilike);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_ilike);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_not_ilike);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_not_ilike);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_is);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_is);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_not_is);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_not_is);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_limit_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_offset_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '=') ADVANCE(106);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '_') ADVANCE(122);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'd') ADVANCE(118);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'k') ADVANCE(117);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'k') ADVANCE(119);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'k') ADVANCE(120);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'k') ADVANCE(121);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'q') ADVANCE(82);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'q') ADVANCE(84);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_STRING);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '%' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_NUMBER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 43},
  [3] = {.lex_state = 43},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 12},
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
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_select_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_STRING] = ACTIONS(1),
    [sym_NUMBER] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_query] = STATE(57),
    [sym_table] = STATE(27),
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
    STATE(39), 1,
      sym_part,
    STATE(40), 2,
      sym_in,
      sym_not_in,
    STATE(42), 2,
      sym_special_filter,
      sym_simple_filter,
    STATE(43), 5,
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
    STATE(29), 1,
      sym_part,
    STATE(31), 1,
      sym_column,
    STATE(40), 2,
      sym_in,
      sym_not_in,
    STATE(42), 2,
      sym_special_filter,
      sym_simple_filter,
    STATE(43), 5,
      sym_select,
      sym_order,
      sym_filter,
      sym_limit,
      sym_offset,
  [74] = 3,
    STATE(58), 1,
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
    STATE(19), 1,
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
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      sym_DOUBLE_QUOTED_STRING,
    STATE(56), 1,
      sym_value,
  [140] = 3,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_order_repeat1,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [151] = 4,
    ACTIONS(31), 1,
      sym_STRING,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      sym_DOUBLE_QUOTED_STRING,
    STATE(34), 1,
      sym_value,
  [164] = 3,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_list_repeat1,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [175] = 3,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_order_repeat1,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [186] = 3,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_order_repeat1,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [197] = 2,
    ACTIONS(48), 1,
      anon_sym_DOT,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [206] = 3,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_select_repeat1,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [217] = 4,
    ACTIONS(31), 1,
      sym_STRING,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      sym_DOUBLE_QUOTED_STRING,
    STATE(11), 1,
      sym_value,
  [230] = 3,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_select_repeat1,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [241] = 3,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_list_repeat1,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [252] = 3,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_order_repeat1,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [263] = 3,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_select_repeat1,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [274] = 3,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_list_repeat1,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [285] = 1,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [292] = 2,
    STATE(13), 1,
      sym_ordering,
    ACTIONS(72), 2,
      anon_sym_desc,
      anon_sym_asc,
  [300] = 2,
    STATE(28), 1,
      sym_ordering,
    ACTIONS(72), 2,
      anon_sym_desc,
      anon_sym_asc,
  [308] = 3,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      anon_sym_AMP,
    STATE(32), 1,
      aux_sym_expression_repeat1,
  [318] = 1,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [324] = 3,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      anon_sym_QMARK,
    STATE(52), 1,
      sym_expression,
  [334] = 1,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [340] = 3,
    ACTIONS(76), 1,
      anon_sym_AMP,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      aux_sym_expression_repeat1,
  [350] = 1,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [356] = 3,
    ACTIONS(90), 1,
      anon_sym_EQin_DOT,
    ACTIONS(92), 1,
      anon_sym_EQnot_in_DOT,
    ACTIONS(94), 1,
      anon_sym_EQ,
  [366] = 3,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      anon_sym_AMP,
    STATE(32), 1,
      aux_sym_expression_repeat1,
  [376] = 1,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [382] = 1,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [387] = 1,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [392] = 2,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_list,
  [399] = 2,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_list,
  [406] = 1,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [411] = 1,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [416] = 1,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [421] = 1,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      anon_sym_QMARK,
  [426] = 1,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [431] = 1,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [436] = 2,
    ACTIONS(117), 1,
      sym_STRING,
    STATE(14), 1,
      sym_column,
  [443] = 2,
    ACTIONS(117), 1,
      sym_STRING,
    STATE(33), 1,
      sym_column,
  [450] = 1,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [455] = 1,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [460] = 2,
    ACTIONS(117), 1,
      sym_STRING,
    STATE(6), 1,
      sym_column,
  [467] = 2,
    ACTIONS(117), 1,
      sym_STRING,
    STATE(17), 1,
      sym_column,
  [474] = 1,
    ACTIONS(123), 1,
      sym_NUMBER,
  [478] = 1,
    ACTIONS(125), 1,
      sym_NUMBER,
  [482] = 1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
  [486] = 1,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
  [490] = 1,
    ACTIONS(131), 1,
      anon_sym_DOT,
  [494] = 1,
    ACTIONS(133), 1,
      sym_STRING,
  [498] = 1,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
  [502] = 1,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
  [506] = 1,
    ACTIONS(139), 1,
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
  [SMALL_STATE(13)] = 186,
  [SMALL_STATE(14)] = 197,
  [SMALL_STATE(15)] = 206,
  [SMALL_STATE(16)] = 217,
  [SMALL_STATE(17)] = 230,
  [SMALL_STATE(18)] = 241,
  [SMALL_STATE(19)] = 252,
  [SMALL_STATE(20)] = 263,
  [SMALL_STATE(21)] = 274,
  [SMALL_STATE(22)] = 285,
  [SMALL_STATE(23)] = 292,
  [SMALL_STATE(24)] = 300,
  [SMALL_STATE(25)] = 308,
  [SMALL_STATE(26)] = 318,
  [SMALL_STATE(27)] = 324,
  [SMALL_STATE(28)] = 334,
  [SMALL_STATE(29)] = 340,
  [SMALL_STATE(30)] = 350,
  [SMALL_STATE(31)] = 356,
  [SMALL_STATE(32)] = 366,
  [SMALL_STATE(33)] = 376,
  [SMALL_STATE(34)] = 382,
  [SMALL_STATE(35)] = 387,
  [SMALL_STATE(36)] = 392,
  [SMALL_STATE(37)] = 399,
  [SMALL_STATE(38)] = 406,
  [SMALL_STATE(39)] = 411,
  [SMALL_STATE(40)] = 416,
  [SMALL_STATE(41)] = 421,
  [SMALL_STATE(42)] = 426,
  [SMALL_STATE(43)] = 431,
  [SMALL_STATE(44)] = 436,
  [SMALL_STATE(45)] = 443,
  [SMALL_STATE(46)] = 450,
  [SMALL_STATE(47)] = 455,
  [SMALL_STATE(48)] = 460,
  [SMALL_STATE(49)] = 467,
  [SMALL_STATE(50)] = 474,
  [SMALL_STATE(51)] = 478,
  [SMALL_STATE(52)] = 482,
  [SMALL_STATE(53)] = 486,
  [SMALL_STATE(54)] = 490,
  [SMALL_STATE(55)] = 494,
  [SMALL_STATE(56)] = 498,
  [SMALL_STATE(57)] = 502,
  [SMALL_STATE(58)] = 506,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order, 5),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_repeat1, 2), SHIFT_REPEAT(44),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order, 4),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_repeat1, 2), SHIFT_REPEAT(45),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(8),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOUBLE_QUOTED_STRING, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_repeat1, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordering, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_filter, 5),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_in, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_filter, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [137] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
