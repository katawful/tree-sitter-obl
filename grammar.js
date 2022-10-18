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
      // $._terminator,
      repeat($._inner_block),
      $._end_block,
      // repeat($._terminator),
    ),

    _start_block: $ => seq(
      keyword("begin"),
      choice($.game_feature, $.user_defined_function),
      $._terminator,
    ),

    game_feature: $ => seq(
      // optional(
      //   /_/
      // ),
      choice(
        keywordRegex("gamemode", true, "_?"),
        keywordRegex("menumode", true, "_?"),
      )),

    user_defined_function: $ => seq(
      seq(
        optional(
          /_/,
        ),
        keywordRegex("function", true, "_?"),
      ),
      $.parameter_list,
    ),

    parameter_list: $ => seq(
      "{",
      optional(seq(
        $.parameter,
        repeat(
          seq(',', $.parameter),
        ),
      )),
      "}",
    ),

    parameter: $ => alias($.variable, 'parameter'),

    _inner_block: $ => seq($.statement, $._terminator),

    _end_block: $ => seq(keyword("end"), $._terminator),

    statement: $ => $._identifier,

    // i chose to keep identifiers anoymous as it is used in many areas
    // TODO: address invalid characters
    _identifier: $ => /[a-zA-Z_]\w*/,

    comment: $ => seq(
      ';',
      /(\\(.|\r?\n)|[^\\\n])*/
    ),

    _compile_with_oblivion_expr: $ => '_',
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
