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
  ],

  word: $ => $._identifier,

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
      $.script_name,
      $._terminator,
    ),

    script_name: $ => $._identifier,

    _top_level: $ => seq(
      choice($.variable_declaration, $.block),
        // TODO: add header
    ),

    variable_declaration: $ => seq(
      $.type,
      field('variable', $.variable),
      $._terminator,
    ),

    type: $ => choice(
      keyword("int"),
      keyword("short"),
      keyword("long"),
      keyword("float"),
      keyword("ref"),
      keyword("array_var"),
      keyword("string_var"),
    ),

    variable: $ => $._identifier,

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
        seq(',', $.parameter),
      ),
    ),

    _parameter_list_opt_comma: $ => seq(
      $.parameter,
      repeat(
        seq(optional(','), $.parameter),
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
    ),

    set_statement: $ => seq(
      keyword("set"),
      $.left,
      keyword("to"),
      $.right,
    ),

    left: $ => field("left", $.variable),
    right: $ => field("right", $._expression),

    _expression: $ => choice(
      $._literal, // note that this will have to cover variables and literals for now
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
      // prec(PREC.ASSIGNMENT, ':='),
      prec(PREC.LOGICAL_OR, '||'),
      prec(PREC.LOGICAL_AND, '&&'),
      prec(PREC.SLICE_PAIR, '::'),
      prec(PREC.EQUALITY, '=='),
      prec(PREC.EQUALITY, '!='),
      prec(PREC.GREATER_LESS, '>'),
      prec(PREC.GREATER_LESS, '>='),
      prec(PREC.GREATER_LESS, '<'),
      prec(PREC.GREATER_LESS, '<='),
      prec(PREC.BITWISE_OR, '|'),
      prec(PREC.BITWISE_AND, '&'),
      prec(PREC.BITWISE_SHIFT, '<<'),
      prec(PREC.BITWISE_SHIFT, '>>'),
      prec(PREC.ADD_SUB_CAT, '+'),
      prec(PREC.ADD_SUB_CAT, '-'),
      prec(PREC.MULT_DIV, '*'),
      prec(PREC.MULT_DIV, '/'),
      prec(PREC.MULT_DIV, '%'),
      prec(PREC.EXPONENT, '^'),
    ),

    unary_operator: $ => choice(
      prec(PREC.NEGATION, '-'),
      prec(PREC.STRINGIZE, '$'),
      prec(PREC.NUMERICIZE, '#'),
      prec(PREC.DEREFERENCE, '*'),
      prec(PREC.BOX, '&'),
      prec(PREC.LOGICAL_NOT, '!'),
    ),

    // i chose to keep identifiers anoymous as it is used in many areas
    // TODO: address invalid characters
    _identifier: $ => /[a-zA-Z_][a-zA-Z_0-9]?\w*/,

    comment: $ => seq(
      ';',
      /(\\(.|\r?\n)|[^\\\n])*/
    ),

    // TODO: add ref, sci notation, type literals
    _literal: $ => choice(
      field('integer', $.integer),
      field('float', $.float),
      field('string', $.string),
      field('reference', $.reference),
    ),
    reference: $ => $._identifier,
    string: $ => /".*"/,
    float: $ => choice(
      /\-?\d+\.\d*/,
    ),
    integer: $ => choice(
      /\-?\d+/,
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
