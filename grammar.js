module.exports = grammar({
  name: 'obl',

  rules: {
    source_file: $ => seq(
      $.script_declaration,
      $._eol, // eol should be here so that the source file node itself knows about it
      repeat($._top_level),
    ),

    script_declaration: $ => seq(
      choice(keyword("scn"), keyword("scriptname")),
      $.script_name,
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
      $._eol,
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
      $._eol,
      repeat($._inner_block),
      keyword("end"),
      repeat($._eol),
    ),

    _start_block: $ => seq(
      keyword("begin"),
      choice($.game_feature, $.function),
    ),

    game_feature: $ => choice(
      keyword("gamemode"),
      keyword("menumode"),
    ),

    function: $ => "unimplemented",

    _inner_block: $ => seq($.statement, $._eol),

    _end_block: $ => keyword("end"),

    statement: $ => $._identifier,

    _eol: $ => choice("\n", "\r"),

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
