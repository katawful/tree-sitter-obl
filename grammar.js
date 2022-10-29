const PREC = {
  TOP: 20,
  ASSIGNMENT: 15,
  LOGICAL_AND: 14,
  LOGICAL_OR: 13,
  SLICE_PAIR: 12,
  COMPOUND: 13,
  EQUALITY: 11,
  GREATER_LESS: 10,
  BITWISE_OR: 9,
  BITWISE_AND: 8,
  BITWISE_SHIFT: 7,
  ADD_SUB_CAT: 6,
  MULT_DIV: 5,
  EXPONENT: 4,
  NEGATION: 3,
  STRINGIZE: 3,
  NUMERICIZE: 3,
  DEREFERENCE: 3,
  BOX: 3,
  LOGICAL_NOT: 2,
  PARENTHETICAL: 1,
  SUBSCRIPT: 0,
  MEMBER_ACCESS: 0,
  ARRAY: 1,
  PLAIN: -5, //stuff like GetFPS
  DOT: -10, // stuff like quest.variable
  ARGUMENTATIVE: -15, // stuff like GetName object
  LITERAL: -20,
  BOTTOM: -30,
};

module.exports = grammar({
  name: 'obl',

  externals: $ => [
    $._terminator,
    $._no_whitespace,
    $._dot,
    $._open_subscript,
    $._close_subscript,
  ],

  word: $ => $._identifier,

  precedence: $ => [
    [
      $._literal,
      $._variable,
    ],
    [
      $.array_variable,
      $.variable,
    ],
    [
      $._variable,
      $._expression,
    ],
    [
      $._dot,
      $._open_subscript,
    ],
  ],

  supertypes: $ => [
    $._type,
  ],

  conflicts: $ => [
    [$._literal, $._variable],
    [$.string],
    [$._parameter_list_opt_comma],
  ],

  extras: $ => [
    /\\\r?\n/,
    /\s/,
    /\t/,
    $.comment,
  ],

  rules: {
    source_file: $ => seq(
      $.script_declaration,
      repeat($._top_level),
    ),

    script_declaration: $ => seq(
      choice(keyword("scn"), keyword("scriptname")),
      field("script_name", $.reference),
      $._terminator,
    ),

    _top_level: $ => seq(
      choice($.variable_declaration, $.block),
        // TODO: add header
    ),

    variable_declaration: $ => seq(
      field('type', $._type),
      field('variable', $.reference),
      $._terminator,
    ),

    _type: $ => choice(
      field('number', $.number_type),
      field('float', $.float_type),
      field('ref', $.ref_type),
      field('array', $.array_type),
      field('string', $.string_type),
    ),

    number_type: $ => choice(
      keyword("int"),
      keyword("short"),
      keyword("long"),
    ),

    float_type: $ => keyword("float"),
    ref_type: $ => keyword("ref"),
    array_type: $ => keyword("array_var"),
    string_type: $ => keyword("string_var"),

    block: $ => seq(
      $._start_block,
      repeat($._inner_block),
      $._end_block,
    ),

    _start_block: $ => seq(
      keyword("begin"),
      choice($.game_feature, $.user_defined_function),
      $._terminator,
    ),

    game_feature: $ => seq(
      $._identifier,
      optional($._parameter_list_opt_comma),
    ),

    user_defined_function: $ => seq(
      keywordRegex("function", true, "_?"),
      $._enclosed_parameter_list,
    ),

    _parameter_list: $ => seq(
      $.parameter,
      repeat(
        seq(',', field('parameter', $.parameter)),
      ),
    ),

    _parameter_list_opt_comma: $ => seq(
      $.parameter,
      repeat(
        seq(optional(','), field('parameter', $.parameter)),
      ),
    ),

    _enclosed_parameter_list: $ => seq(
      "{",
      optional($._parameter_list),
      "}",
    ),

    parameter: $ => alias($._literal, 'parameter'),

    _inner_block: $ => seq($.statement, $._terminator),

    _end_block: $ => seq(keyword("end"), $._terminator),

    statement: $ => choice(
      "word",
      $.set_statement,
      $.let_statement,
    ),

    set_statement: $ => seq(
      keyword("set"),
      field("left", $.left),
      keyword("to"),
      field("right", $.right),
    ),

    let_statement: $ => seq(
      keyword("let"),
      choice(
        repeat1($._let_inside_assignment),
        $._let_inside_compound,
      ),
      field("right", $.right),
    ),

    _let_inside_assignment: $ => seq(
      field("left", $.left),
      $.assignment,
    ),

    _let_inside_compound: $ => seq(
      field("left", $.left),
      $.compound,
    ),

    left: $ => $._variable,
    right: $ => $._expression,

    _variable: $ => choice(
      field('quest_variable', $.quest_variable), // namespace.var
      field('array_variable', $.array_variable), // array[x]
      field('variable', $.reference), // var -- these are all references anyways
    ),

    quest_variable: $ => seq(
      field('quest', $.reference),
      $._dot,
      '.',
      $._no_whitespace,
      field('variable', $.reference),
    ),

    array_variable: $ => prec.left(seq(
      choice($.quest_variable, field('variable', $.reference)),
      $._open_subscript,
      repeat1($.subscript),
    )),

    subscript: $ => seq(
      $._open_subscript,
      '[',
      $._expression,
      ']',
    ),

    _expression: $ => choice(
      $._literal,
      $._variable,
      $._binary_expression,
      $._unary_expression,
      $.parenthesized_expression,
    ),

    parenthesized_expression: $ => seq(
      "(",
      $._expression,
      ")",
    ),

    _binary_expression: $ => seq(
      prec.left($._expression),
      $.binary_operator,
      prec.left($._expression),
    ),

    _unary_expression: $ => seq(
      $.unary_operator,
      prec.left($._expression),
    ),

    binary_operator: $ => choice(
      prec.left(PREC.LOGICAL_OR, '||'),
      prec.left(PREC.LOGICAL_AND, '&&'),
      prec.left(PREC.SLICE_PAIR, '::'),
      prec.left(PREC.EQUALITY, '=='),
      prec.left(PREC.EQUALITY, '!='),
      prec.left(PREC.GREATER_LESS, '>'),
      prec.left(PREC.GREATER_LESS, '>='),
      prec.left(PREC.GREATER_LESS, '<'),
      prec.left(PREC.GREATER_LESS, '<='),
      prec.left(PREC.BITWISE_OR, '|'),
      prec.left(PREC.BITWISE_AND, '&'),
      prec.left(PREC.BITWISE_SHIFT, '<<'),
      prec.left(PREC.BITWISE_SHIFT, '>>'),
      prec.left(PREC.ADD_SUB_CAT, '+'),
      prec.left(PREC.ADD_SUB_CAT, '-'),
      prec.left(PREC.MULT_DIV, '*'),
      prec.left(PREC.MULT_DIV, '/'),
      prec.left(PREC.MULT_DIV, '%'),
      prec.left(PREC.EXPONENT, '^'),
    ),

    compound: $ => choice(
      // prec(PREC.ASSIGNMENT, ':='),
      prec.left(PREC.COMPOUND, '+='),
      prec.left(PREC.COMPOUND, '-='),
      prec.left(PREC.COMPOUND, '*='),
      prec.left(PREC.COMPOUND, '/='),
      prec.left(PREC.COMPOUND, '^='),
    ),

    assignment: $ => prec(PREC.ASSIGNMENT, ':='),

    unary_operator: $ => choice(
      prec.left(PREC.NEGATION, '-'),
      prec.left(PREC.STRINGIZE, '$'),
      prec.left(PREC.NUMERICIZE, '#'),
      prec.left(PREC.DEREFERENCE, '*'),
      prec.left(PREC.BOX, '&'),
      prec.left(PREC.LOGICAL_NOT, '!'),
    ),

    pipe: $ => "|",

    format_specifier: $ => seq(
      "%",
      choice(
        "%",
        "a",
        "c",
        "e",
        /\d*\.\d*e/,
        "f",
        /[ \-+]?\d*\.\d*f/,
        "g",
        "i",
        "k",
        "n",
        "ps",
        "pp",
        "po",
        "q",
        "r",
        "v",
        "x",
        "z",
        seq(
          "{",
          repeat(choice(
            $.pipe,
            /[^"%\|]+/,
          )),
          "%}",
        ),
        "B",
        "b",
      )),

    // TODO: add  type literals
    _literal: $ => choice(
      field('integer', $.integer),
      field('float', $.float),
      field('string', $.string),
      field('reference', $.reference),
    ),

    reference: $ => prec(PREC.LITERAL, $._identifier),

    string: $ => seq(
      '"',
      repeat(choice(
        $.format_specifier,
        $.pipe,
        /[^"%\|]+/,
      )),
      '"',
      // strings can have parameters for format specifiers
      optional(seq(
        optional(','),
        $._parameter_list_opt_comma
      )),
    ),
    float: $ => choice(
      /\-?\d+\.\d*/, // regular floats
      /\-?\d+\.\d*E\-?\d+/, // sci-notation
    ),
    integer: $ => /\-?\d+/,

    // i chose to keep identifiers anoymous as it is used in many areas
    // TODO: address invalid characters
    _identifier: $ => /[a-zA-Z_][a-zA-Z_0-9]?\w*/,

    comment: $ => seq(
      ';',
      /(\\(.|\r?\n)|[^\\\n])*/
    ),

  }
});

function keyword(word, aliasAsWord = true) {
  let pattern = ''
  for (const letter of word) {
    pattern += `[${letter}${letter.toLocaleUpperCase()}]`
  }
  let result = new RegExp(pattern)
  if (aliasAsWord) result = alias(result, word)
  return result
}
function keywordRegex(word, aliasAsWord = true, regex) {
  let pattern = ''
  for (const letter of word) {
    pattern += `[${letter}${letter.toLocaleUpperCase()}]`
  }
  let mid_result = regex + pattern
  let result = new RegExp(mid_result)
  if (aliasAsWord) result = alias(result, word)
  return result
}
