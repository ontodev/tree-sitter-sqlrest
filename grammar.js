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
                         $.optionally_aliased_column,
                         repeat(seq(',',
                                    $.optionally_aliased_column))),

        optionally_aliased_column: $ => seq(optional(seq($.alias,
                                                         ':')),
                                            $.column,
                                            optional(seq('::',
                                                         $.cast))),

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
                       $.normal_value,
                       repeat(seq(',',
                                  $.normal_value,
                                  ')'))),

        simple_filter: $ => seq($.column,
                                '=',
                                choice(seq($.normal_operator,
                                           '.',
                                           $.normal_value),
                                       seq($.like_operator,
                                           '.',
                                           $.like_value))),

        normal_operator: $ => choice($.eq,
                                     $.not_eq,
                                     $.lt,
                                     $.gt,
                                     $.lte,
                                     $.gte,
                                     $.is,
                                     $.not_is),

        like_operator: $ => choice($.like,
                                   $.not_like,
                                   $.ilike,
                                   $.not_ilike),

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

        table: $ => $.STRING,
        column: $ => $.STRING,
        alias: $ => $.STRING,
        cast: $ => $.STRING,
        normal_value: $ => choice($.STRING,
                                  $.DOUBLE_QUOTED_NORMAL_VALUE),
        like_value: $ => choice($.STRING_WITH_WILDCARDS,
                                $.DOUBLE_QUOTED_LIKE_VALUE),

        STRING: $ => token.immediate(/[A-Za-z0-9_ ]+/),
        STRING_WITH_WILDCARDS: $ => token.immediate(/[A-Za-z0-9_* ]+/),
        DOUBLE_QUOTED_STRING: $ => seq("\"",
                                       $.STRING,
                                       "\""),
        DOUBLE_QUOTED_NORMAL_VALUE: $ => seq("\"",
                                             token.immediate(/[A-Za-z0-9_ :,\.\(\)]+/),
                                             "\""),
        DOUBLE_QUOTED_LIKE_VALUE: $ => seq("\"",
                                           token.immediate(/[A-Za-z0-9_* :,\.\(\)]+/),
                                           "\""),
        NUMBER: $ => token.immediate(/[0-9]+/),
    }
});
