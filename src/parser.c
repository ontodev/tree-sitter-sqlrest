#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
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
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_EQ = 12,
  anon_sym_limit_EQ = 13,
  anon_sym_offset_EQ = 14,
  sym_eq = 15,
  sym_gt = 16,
  sym_lt = 17,
  sym_gte = 18,
  sym_lte = 19,
  sym_like = 20,
  sym_ilike = 21,
  sym_is = 22,
  sym_neq = 23,
  anon_sym_DQUOTE = 24,
  aux_sym_QUOTED_STRING_token1 = 25,
  sym_STRING_NO_DOUBLE_QUOTES = 26,
  sym_STRING = 27,
  sym_NUMBER = 28,
  sym_query = 29,
  sym_expression = 30,
  sym_part = 31,
  sym_select = 32,
  sym_order = 33,
  sym_ordering = 34,
  sym_filter = 35,
  sym_special_filter = 36,
  sym_in = 37,
  sym_list = 38,
  sym_list_of_strings = 39,
  sym_simple_filter = 40,
  sym_operator = 41,
  sym_limit = 42,
  sym_offset = 43,
  sym_table = 44,
  sym_column = 45,
  sym_value = 46,
  sym_QUOTED_STRING = 47,
  aux_sym_expression_repeat1 = 48,
  aux_sym_select_repeat1 = 49,
  aux_sym_order_repeat1 = 50,
  aux_sym_list_repeat1 = 51,
  aux_sym_list_of_strings_repeat1 = 52,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_limit_EQ] = "limit=",
  [anon_sym_offset_EQ] = "offset=",
  [sym_eq] = "eq",
  [sym_gt] = "gt",
  [sym_lt] = "lt",
  [sym_gte] = "gte",
  [sym_lte] = "lte",
  [sym_like] = "like",
  [sym_ilike] = "ilike",
  [sym_is] = "is",
  [sym_neq] = "neq",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_QUOTED_STRING_token1] = "QUOTED_STRING_token1",
  [sym_STRING_NO_DOUBLE_QUOTES] = "STRING_NO_DOUBLE_QUOTES",
  [sym_STRING] = "STRING",
  [sym_NUMBER] = "NUMBER",
  [sym_query] = "query",
  [sym_expression] = "expression",
  [sym_part] = "part",
  [sym_select] = "select",
  [sym_order] = "order",
  [sym_ordering] = "ordering",
  [sym_filter] = "filter",
  [sym_special_filter] = "special_filter",
  [sym_in] = "in",
  [sym_list] = "list",
  [sym_list_of_strings] = "list_of_strings",
  [sym_simple_filter] = "simple_filter",
  [sym_operator] = "operator",
  [sym_limit] = "limit",
  [sym_offset] = "offset",
  [sym_table] = "table",
  [sym_column] = "column",
  [sym_value] = "value",
  [sym_QUOTED_STRING] = "QUOTED_STRING",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_select_repeat1] = "select_repeat1",
  [aux_sym_order_repeat1] = "order_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_list_of_strings_repeat1] = "list_of_strings_repeat1",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_limit_EQ] = anon_sym_limit_EQ,
  [anon_sym_offset_EQ] = anon_sym_offset_EQ,
  [sym_eq] = sym_eq,
  [sym_gt] = sym_gt,
  [sym_lt] = sym_lt,
  [sym_gte] = sym_gte,
  [sym_lte] = sym_lte,
  [sym_like] = sym_like,
  [sym_ilike] = sym_ilike,
  [sym_is] = sym_is,
  [sym_neq] = sym_neq,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_QUOTED_STRING_token1] = aux_sym_QUOTED_STRING_token1,
  [sym_STRING_NO_DOUBLE_QUOTES] = sym_STRING_NO_DOUBLE_QUOTES,
  [sym_STRING] = sym_STRING,
  [sym_NUMBER] = sym_NUMBER,
  [sym_query] = sym_query,
  [sym_expression] = sym_expression,
  [sym_part] = sym_part,
  [sym_select] = sym_select,
  [sym_order] = sym_order,
  [sym_ordering] = sym_ordering,
  [sym_filter] = sym_filter,
  [sym_special_filter] = sym_special_filter,
  [sym_in] = sym_in,
  [sym_list] = sym_list,
  [sym_list_of_strings] = sym_list_of_strings,
  [sym_simple_filter] = sym_simple_filter,
  [sym_operator] = sym_operator,
  [sym_limit] = sym_limit,
  [sym_offset] = sym_offset,
  [sym_table] = sym_table,
  [sym_column] = sym_column,
  [sym_value] = sym_value,
  [sym_QUOTED_STRING] = sym_QUOTED_STRING,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_select_repeat1] = aux_sym_select_repeat1,
  [aux_sym_order_repeat1] = aux_sym_order_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_list_of_strings_repeat1] = aux_sym_list_of_strings_repeat1,
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
  [anon_sym_limit_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_offset_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_eq] = {
    .visible = true,
    .named = true,
  },
  [sym_gt] = {
    .visible = true,
    .named = true,
  },
  [sym_lt] = {
    .visible = true,
    .named = true,
  },
  [sym_gte] = {
    .visible = true,
    .named = true,
  },
  [sym_lte] = {
    .visible = true,
    .named = true,
  },
  [sym_like] = {
    .visible = true,
    .named = true,
  },
  [sym_ilike] = {
    .visible = true,
    .named = true,
  },
  [sym_is] = {
    .visible = true,
    .named = true,
  },
  [sym_neq] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_QUOTED_STRING_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_STRING_NO_DOUBLE_QUOTES] = {
    .visible = true,
    .named = true,
  },
  [sym_STRING] = {
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
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_list_of_strings] = {
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
  [sym_QUOTED_STRING] = {
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
  [aux_sym_list_of_strings_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '&') ADVANCE(53);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'g') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(104);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('%' <= lookahead && lookahead <= '*') ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(62);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'g') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'g') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 29:
      if (lookahead == 'k') ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 'k') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'k') ADVANCE(17);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 38:
      if (lookahead == 'q') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == 'q') ADVANCE(84);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 48:
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 49:
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '&') ADVANCE(53);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '?') ADVANCE(52);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'g') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_select_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_order_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_desc);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_desc);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_asc);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_asc);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_EQin_DOT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_limit_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_offset_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_eq);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_gte);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_gte);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_lte);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_lte);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_like);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_like);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_ilike);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_ilike);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_is);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_is);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_neq);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_neq);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_QUOTED_STRING_token1);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'k') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'k') ADVANCE(99);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'q') ADVANCE(69);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'q') ADVANCE(85);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_STRING_NO_DOUBLE_QUOTES);
      if (lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'd') ADVANCE(132);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'f') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(130);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_STRING);
      if (lookahead == '"' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_NUMBER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 48},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 48},
  [39] = {.lex_state = 48},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 48},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 48},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 49},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_limit_EQ] = ACTIONS(1),
    [anon_sym_offset_EQ] = ACTIONS(1),
    [sym_eq] = ACTIONS(1),
    [sym_gt] = ACTIONS(1),
    [sym_lt] = ACTIONS(1),
    [sym_gte] = ACTIONS(1),
    [sym_lte] = ACTIONS(1),
    [sym_like] = ACTIONS(1),
    [sym_ilike] = ACTIONS(1),
    [sym_is] = ACTIONS(1),
    [sym_neq] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_STRING_NO_DOUBLE_QUOTES] = ACTIONS(1),
    [sym_NUMBER] = ACTIONS(1),
  },
  [1] = {
    [sym_query] = STATE(64),
    [sym_table] = STATE(21),
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
    STATE(32), 1,
      sym_in,
    STATE(37), 1,
      sym_part,
    STATE(43), 1,
      sym_column,
    STATE(44), 2,
      sym_special_filter,
      sym_simple_filter,
    STATE(46), 5,
      sym_select,
      sym_order,
      sym_filter,
      sym_limit,
      sym_offset,
  [36] = 10,
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
    STATE(27), 1,
      sym_part,
    STATE(32), 1,
      sym_in,
    STATE(43), 1,
      sym_column,
    STATE(44), 2,
      sym_special_filter,
      sym_simple_filter,
    STATE(46), 5,
      sym_select,
      sym_order,
      sym_filter,
      sym_limit,
      sym_offset,
  [72] = 3,
    STATE(62), 1,
      sym_operator,
    ACTIONS(17), 2,
      sym_gt,
      sym_lt,
    ACTIONS(15), 7,
      sym_eq,
      sym_gte,
      sym_lte,
      sym_like,
      sym_ilike,
      sym_is,
      sym_neq,
  [89] = 2,
    ACTIONS(21), 1,
      anon_sym_EQ,
    ACTIONS(19), 5,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_EQin_DOT,
  [100] = 4,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    ACTIONS(27), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_order_repeat1,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [114] = 3,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym_order_repeat1,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [125] = 3,
    ACTIONS(36), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_select_repeat1,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [136] = 3,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym_order_repeat1,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [147] = 3,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym_order_repeat1,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [158] = 3,
    ACTIONS(44), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_select_repeat1,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [169] = 3,
    ACTIONS(36), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_select_repeat1,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [180] = 2,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [189] = 3,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_order_repeat1,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [200] = 3,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      aux_sym_list_repeat1,
  [210] = 3,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym_list_of_strings_repeat1,
  [220] = 3,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      sym_STRING_NO_DOUBLE_QUOTES,
    STATE(26), 1,
      sym_QUOTED_STRING,
  [230] = 1,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [236] = 3,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_list_repeat1,
  [246] = 1,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [252] = 3,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      anon_sym_QMARK,
    STATE(61), 1,
      sym_expression,
  [262] = 3,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      anon_sym_AMP,
    STATE(31), 1,
      aux_sym_expression_repeat1,
  [272] = 2,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    STATE(49), 2,
      sym_list,
      sym_list_of_strings,
  [280] = 3,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_list_repeat1,
  [290] = 3,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym_list_of_strings_repeat1,
  [300] = 3,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_list_of_strings_repeat1,
  [310] = 3,
    ACTIONS(78), 1,
      anon_sym_AMP,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      aux_sym_expression_repeat1,
  [320] = 2,
    STATE(14), 1,
      sym_ordering,
    ACTIONS(95), 2,
      anon_sym_desc,
      anon_sym_asc,
  [328] = 2,
    STATE(18), 1,
      sym_ordering,
    ACTIONS(95), 2,
      anon_sym_desc,
      anon_sym_asc,
  [336] = 1,
    ACTIONS(42), 3,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_COMMA,
  [342] = 3,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      anon_sym_AMP,
    STATE(31), 1,
      aux_sym_expression_repeat1,
  [352] = 1,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [357] = 2,
    ACTIONS(104), 1,
      sym_STRING,
    STATE(8), 1,
      sym_column,
  [364] = 1,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [369] = 1,
    ACTIONS(60), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [374] = 1,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_QMARK,
  [379] = 1,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [384] = 2,
    ACTIONS(104), 1,
      sym_STRING,
    STATE(13), 1,
      sym_column,
  [391] = 2,
    ACTIONS(104), 1,
      sym_STRING,
    STATE(30), 1,
      sym_column,
  [398] = 1,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [403] = 1,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [408] = 1,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [413] = 2,
    ACTIONS(116), 1,
      anon_sym_EQin_DOT,
    ACTIONS(118), 1,
      anon_sym_EQ,
  [420] = 1,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [425] = 2,
    ACTIONS(122), 1,
      sym_STRING,
    STATE(51), 1,
      sym_value,
  [432] = 1,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [437] = 1,
    ACTIONS(85), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [442] = 1,
    ACTIONS(126), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [447] = 1,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [452] = 1,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [457] = 1,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [462] = 2,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_QUOTED_STRING,
  [469] = 1,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [474] = 2,
    ACTIONS(104), 1,
      sym_STRING,
    STATE(6), 1,
      sym_column,
  [481] = 1,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
  [486] = 1,
    ACTIONS(138), 1,
      sym_NUMBER,
  [490] = 1,
    ACTIONS(140), 1,
      sym_STRING_NO_DOUBLE_QUOTES,
  [494] = 1,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
  [498] = 1,
    ACTIONS(144), 1,
      sym_NUMBER,
  [502] = 1,
    ACTIONS(146), 1,
      aux_sym_QUOTED_STRING_token1,
  [506] = 1,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
  [510] = 1,
    ACTIONS(150), 1,
      anon_sym_DOT,
  [514] = 1,
    ACTIONS(152), 1,
      anon_sym_DOT,
  [518] = 1,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 89,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 114,
  [SMALL_STATE(8)] = 125,
  [SMALL_STATE(9)] = 136,
  [SMALL_STATE(10)] = 147,
  [SMALL_STATE(11)] = 158,
  [SMALL_STATE(12)] = 169,
  [SMALL_STATE(13)] = 180,
  [SMALL_STATE(14)] = 189,
  [SMALL_STATE(15)] = 200,
  [SMALL_STATE(16)] = 210,
  [SMALL_STATE(17)] = 220,
  [SMALL_STATE(18)] = 230,
  [SMALL_STATE(19)] = 236,
  [SMALL_STATE(20)] = 246,
  [SMALL_STATE(21)] = 252,
  [SMALL_STATE(22)] = 262,
  [SMALL_STATE(23)] = 272,
  [SMALL_STATE(24)] = 280,
  [SMALL_STATE(25)] = 290,
  [SMALL_STATE(26)] = 300,
  [SMALL_STATE(27)] = 310,
  [SMALL_STATE(28)] = 320,
  [SMALL_STATE(29)] = 328,
  [SMALL_STATE(30)] = 336,
  [SMALL_STATE(31)] = 342,
  [SMALL_STATE(32)] = 352,
  [SMALL_STATE(33)] = 357,
  [SMALL_STATE(34)] = 364,
  [SMALL_STATE(35)] = 369,
  [SMALL_STATE(36)] = 374,
  [SMALL_STATE(37)] = 379,
  [SMALL_STATE(38)] = 384,
  [SMALL_STATE(39)] = 391,
  [SMALL_STATE(40)] = 398,
  [SMALL_STATE(41)] = 403,
  [SMALL_STATE(42)] = 408,
  [SMALL_STATE(43)] = 413,
  [SMALL_STATE(44)] = 420,
  [SMALL_STATE(45)] = 425,
  [SMALL_STATE(46)] = 432,
  [SMALL_STATE(47)] = 437,
  [SMALL_STATE(48)] = 442,
  [SMALL_STATE(49)] = 447,
  [SMALL_STATE(50)] = 452,
  [SMALL_STATE(51)] = 457,
  [SMALL_STATE(52)] = 462,
  [SMALL_STATE(53)] = 469,
  [SMALL_STATE(54)] = 474,
  [SMALL_STATE(55)] = 481,
  [SMALL_STATE(56)] = 486,
  [SMALL_STATE(57)] = 490,
  [SMALL_STATE(58)] = 494,
  [SMALL_STATE(59)] = 498,
  [SMALL_STATE(60)] = 502,
  [SMALL_STATE(61)] = 506,
  [SMALL_STATE(62)] = 510,
  [SMALL_STATE(63)] = 514,
  [SMALL_STATE(64)] = 518,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_repeat1, 2), SHIFT_REPEAT(38),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order, 5),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_repeat1, 2), SHIFT_REPEAT(39),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_of_strings_repeat1, 2), SHIFT_REPEAT(52),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_of_strings_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_repeat1, 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordering, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(57),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_filter, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_strings, 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_QUOTED_STRING, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_filter, 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_of_strings, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [154] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
