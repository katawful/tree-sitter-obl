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

    statement: $ => "word",

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
