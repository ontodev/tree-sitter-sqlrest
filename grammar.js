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

      filter: $ => seq($.column,
                       '=',
                       $.operator,
                       $.value),

      operator: $ => choice($.eq,
                            $.gt,
                            $.lt),

      limit: $ => seq('limit=',
                      $.NUMBER),

      offset: $ => seq('offset=',
                       $.NUMBER),

      eq: $ => 'eq.',
      gt: $ => 'gt.',
      lt: $ => 'lt.',

      table: $ => $.STRING,
      column: $ => $.STRING,
      value: $ => $.STRING,

      STRING: $ => token.immediate(/[A-Za-z0-9:_]+/),
      NUMBER: $ => token.immediate(/[0-9]+/),

  }
});
