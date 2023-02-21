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
                      optional(seq('.',
                                   $.ordering)),
                      repeat(seq(',',
                                  $.column,
                                  optional(seq('.',
                                           $.ordering))))),


      ordering: $ => choice('desc',
                            'asc'),

      filter: $ => choice($.simple_filter,
                          $.special_filter),
      
      special_filter: $ => choice($.in,
                                  $.not_in),

      in: $ => seq($.column,
                   '=in.',
                   $.list),

      not_in: $ => seq($.column,
                       '=not_in.',
                       $.list),

      list: $ => seq('(',
                     choice($.STRING,
                            $.DOUBLE_QUOTED_STRING),
                     repeat(seq(',',
                                choice($.STRING,
                                       $.DOUBLE_QUOTED_STRING),
                                ')'))),

      simple_filter: $ => seq($.column,
                              '=',
                              $.operator,
                              '.',
                              $.value),

      operator: $ => choice($.eq,
                            $.not_eq,
                            $.lt,
                            $.gt,
                            $.lte,
                            $.gte,
                            $.like,
                            $.not_like,
                            $.ilike,
                            $.not_ilike,
                            $.is,
                            $.not_is),

      eq: $ => 'eq',
      not_eq: $ => 'not_eq',
      lt: $ => 'lt',
      gt: $ => 'gt',
      lte: $ => 'lte',
      gte: $ => 'gte',
      like: $ => 'like',
      not_like: $ => 'not_like',
      ilike: $ => 'ilike',
      not_ilike: $ => 'not_ilike',
      is: $ => 'is',
      not_is: $ => 'not_is',

      limit: $ => seq('limit=',
                      $.NUMBER),

      offset: $ => seq('offset=',
                       $.NUMBER),

      table: $ => choice($.STRING,
                         $.DOUBLE_QUOTED_STRING),
      column: $ => choice($.STRING,
                          $.DOUBLE_QUOTED_STRING),
      value: $ => choice($.STRING,
                         $.DOUBLE_QUOTED_STRING),

      STRING: $ => token.immediate(/[A-Za-z0-9:_%*]+/),
      NUMBER: $ => token.immediate(/[0-9]+/),
      DOUBLE_QUOTED_STRING: $ => seq("\"",
                                     $.STRING,
                                     "\""),
  }
});
