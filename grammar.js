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
    $.function,
  ],

  word: $ => $._identifier,

  precedence: $ => [
    [
      $._literal,
      $._variable,
    ],
    [
      $.plain_string,
      $.string,
    ],
    [
      $._start_block,
      $.statement,
    ],
    [
      $._variable,
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
    [$.plain_string, $.string],
    [$._parameter_list_opt_comma],
    [$.while],
    // [$.parameter, $._expression],
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
      optional($._parameter_list_opt_comma),
      "}",
    ),

    parameter: $ => alias($._literal, 'parameter'),

    _inner_block: $ => seq($.statement, $._terminator),

    _end_block: $ => seq(keyword("end"), $._terminator),

    statement: $ => choice(
      $._function,
      "word",
      $.set_statement,
      $.let_statement,
      $._conditional,
      $.while,
      $.for_each,
      $.break,
      $.continue,
      $.call,
      $.return,
    ),

    _function: $ => prec.left(seq(
      choice($.method, $.function),
      optional($.args),
    )),

    method: $ => seq(
      $.reference,
      $._dot,
      '.',
      $._no_whitespace,
      $.function,
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

    _conditional: $ => seq(
      $.if,
      repeat($._inner_block),
      repeat($.else_if),
      optional($.else),
      $._end_if,
    ),

    condition: $ => $._expression,

    if: $ => seq(
      keyword('if'),
      $.condition,
      $._terminator,
    ),

    else_if: $ => seq(
      keyword("elseif"),
      $.condition,
      $._terminator,
      repeat($._inner_block),
    ),

    else: $ => seq(
      keyword("else"),
      $._terminator,
      repeat($._inner_block),
    ),

    _end_if: $ => seq(
      keyword("endif"),
      $._terminator,
    ),

    while: $ => seq(
      $._while,
      repeat($._inner_block),
      $._loop,
    ),

    break: $ => keyword("break"),
    continue: $ => keyword("continue"),

    _while: $ => seq(
      keyword("while"),
      $.condition,
      $._terminator
    ),

    _loop: $ => seq(
      keyword("loop"),
      $._terminator,
    ),

    for_each: $ => seq(
      $._for_each,
      repeat($._inner_block),
      $._loop,
    ),

    _for_each: $ => seq(
      keyword("foreach"),
      $.iter,
      $._terminator,
    ),

    iter: $ => seq(
      field("variable", $.reference),
      '<-',
      choice($._literal, $._variable),
    ),

    call: $ => prec.left(seq(
      keyword("call"),
      field("user_defined_function", $.reference),
      optional($.args),
    )),

    args: $ => prec.right(1000, seq(
      optional(","),
      field('argument', $.expression),
      repeat(
        seq(optional(','), field('argument', prec.right($.expression))),
      ),
    )),

    filter: $ => seq(
      field("field", $.reference),
      '::',
      field("value", $._literal),
    ),

    return: $ => keyword("return"),

    _variable: $ => prec.left(1000, choice(
      field('quest_variable', $.quest_variable), // namespace.var
      field('array_variable', $.array_variable), // array[x]
      field('variable', $.reference), // var -- these are all references anyways
    )),

    quest_variable: $ => seq(
      field('quest', $.reference),
      $._dot,
      '.',
      $._no_whitespace,
      field('variable', $.reference),
    ),

    array_variable: $ => prec.left(seq(
      choice($.quest_variable, field('variable', $.reference)),
      choice(
        seq(
          $._open_subscript,
          repeat1($.subscript)
        ),
        repeat1($.member_access),
      ),
    )),

    member_access: $ => seq(
      '->',
      field("key", $._literal),
    ),

    subscript: $ => seq(
      $._open_subscript,
      '[',
      $._expression,
      ']',
    ),

    slice: $ => prec.right(PREC.SLICE_PAIR, seq(
      optional($._literal),
      ':',
      optional($._literal),
    )),

    expression: $ => prec(1000, alias($._expression, "expression")),

    _expression: $ => choice(
      $._literal,
      $._variable,
      $._binary_expression,
      $._unary_expression,
      $.parenthesized_expression,
      $.slice,
      $.call,
      $.filter,
      $._function,
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
      field('string', choice($.string, $.plain_string)),
      field('reference', $.reference),
    ),

    reference: $ => prec(PREC.LITERAL, $._identifier),

    plain_string: $ => seq(
      '"',
      /[^"%\|]+/,
      '"',
    ),

    string: $ => seq(
      '"',
      repeat(choice(
        $.format_specifier,
        $.pipe,
        /[^"%\|]+/,
      )),
      '"',
      // strings can have parameters for format specifiers
      prec(1000, optional($.args)),
    ),
    float: $ => choice(
      /\-?\d+\.\d*/, // regular floatsneovim/
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
