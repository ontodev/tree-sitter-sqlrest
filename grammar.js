module.exports = grammar({
  name: 'sqlrest',

 extras: $ => [
    /\s/,
  ],

  rules: {

      query: $ => seq($.table,
                      optional($.expression)),

      expression: $ => seq('?', 
                           seq($.part,
                             repeat(seq('&',
                                        $.part)))), 

      part: $ => choice($.select,
                        $.order,
                        $.filter,
                        $.limit,
                        $.offset), 

      select: $ => seq('select=',
                       $.column,
                       repeat(seq(',',
                                  $.column))),

      order: $ => seq('order=',
                      $.column,
                      optional($.ordering),
                      repeat(seq(',',
                                  $.column,
                                  optional($.ordering)))),


      ordering: $ => choice('.desc',
                            '.asc'),

      filter: $ => choice($.simple_filter,
                          $.special_filter),
      
      special_filter: $ => $.in, //NB: there is currently just one 'special' filter

      in: $ => seq($.column,
                   '=in.',
                   choice($.list_of_strings,
                          $.list)),

      list: $ => seq('(',
                      $.STRING_NO_DOUBLE_QUOTES,
                       repeat(seq(',',
                                  $.STRING_NO_DOUBLE_QUOTES)),
                      ')'),

      list_of_strings: $ => seq('(',
                               $.QUOTED_STRING,
                                repeat(seq(',',
                                           $.QUOTED_STRING)),
                               ')'),

      simple_filter: $ => seq($.column,
                              '=',
                              $.operator,
                              $.value),

      operator: $ => choice($.eq,
                            $.gt,
                            $.lt,
                            $.gte,
                            $.lte,
                            $.like,
                            $.ilike,
                            $.is,
                            $.neq),

      limit: $ => seq('limit=',
                      $.NUMBER),

      offset: $ => seq('offset=',
                       $.NUMBER),

      eq: $ => 'eq.',
      gt: $ => 'gt.',
      lt: $ => 'lt.',
      gte: $ => 'gte.',
      lte: $ => 'lte.',
      like: $ => 'like.',
      ilike: $ => 'ilike.',
      is: $ => 'is.',
      neq: $ => 'neq.',

      table: $ => $.STRING,
      column: $ => $.STRING,
      value: $ => $.STRING,

      QUOTED_STRING: $ => seq("\"", 
                              token.immediate(/[A-Za-z0-9:_%'*,]+/),
                              "\""),
      STRING_NO_DOUBLE_QUOTES: $ => token.immediate(/[A-Za-z0-9:_%'*]+/),
      STRING: $ => token.immediate(/[A-Za-z0-9:_%'"*]+/),
      NUMBER: $ => token.immediate(/[0-9]+/),

  }
});
