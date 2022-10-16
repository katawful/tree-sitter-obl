module.exports = grammar({
  name: 'obl',

  externals: $ => [
    $.eol,
  ],

  rules: {
    source_file: $ => seq(
      $.script_declaration,
      repeat($._top_level),
    ),

    script_declaration: $ => seq(
      choice(keyword("scn"), keyword("scriptname")),
      $.script_name,
      $.eol,
    ),

    script_name: $ => $._identifier,

    _top_level: $ => seq(
      choice($.variable_declaration, $.block),
        // TODO: add header
      // $._eol,
    ),

    variable_declaration: $ => seq(
      $.variable_type,
      $.variable,
      $.eol,
    ),

    variable_type: $ => choice(
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
      // $.eol,
      repeat($._inner_block),
      $._end_block,
      // repeat($.eol),
    ),

    _start_block: $ => seq(
      keyword("begin"),
      choice($.game_feature, $.function),
      $.eol,
    ),

    game_feature: $ => choice(
      keyword("gamemode"),
      keyword("menumode"),
    ),

    function: $ => "unimplemented",

    _inner_block: $ => seq($.statement, $.eol),

    _end_block: $ => seq(keyword("end"), $.eol),

    statement: $ => $._identifier,

    // _eol: $ => choice("\n", "\r"),

    // i chose to keep identifiers anoymous as it is used in many areas
    // TODO: address invalid characters
    _identifier: $ => /[a-zA-Z_]\w*/,
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
