"-" @operator
"+" @operator
"!" @operator
"++" @operator
"--" @operator
"*" @operator
"&" @operator
"&&" @operator
"~" @operator
"$" @operator
"..." @operator
"*" @operator
"/" @operator
"%" @operator
"+" @operator
"-" @operator
"<<" @operator
">>" @operator
"<=>" @operator
"<" @operator
">" @operator
"<=" @operator
">=" @operator
"==" @operator
"!=" @operator
"&" @operator
"^" @operator
"|" @operator
"&&" @operator
"||" @operator

"..<" @operator
"..=" @operator

; assignment operator @operator
"=" @operator
"*=" @operator
"/=" @operator
"%=" @operator
"+=" @operator
"-=" @operator
">>=" @operator
"<<=" @operator
"&=" @operator
"^=" @operator
"|=" @operator


"::" @operator


"." @delimiter
";" @delimiter


"is" @keyword
"as" @keyword

"@" @keyword

"virtual" @keyword
"override" @keyword
"final" @keyword
"implicit" @keyword

"->" @function

"template <" @punctuation.bracket
"> template" @punctuation.bracket
"(" @punctuation.bracket
")" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket

(cpp2_primitive_type) @type

(cpp2_number_literal) @number

(macro_comment) @property

(cpp2_block_declaration
    name: (cpp2_non_template_identifier) @emphasis.strong )

(cpp2_expression_declaration
    name: (cpp2_non_template_identifier) @emphasis.strong )

(cpp2_no_definition_declaration
    name: (cpp2_non_template_identifier)  @emphasis.strong)

(cpp2_function_declaration_argument
  (cpp2_any_identifier
    last: (cpp2_no_namespace_identifier
        (cpp2_non_template_identifier) @emphasis)))

(cpp2_function_declaration_argument
    (cpp2_expression_declaration
        name: (cpp2_non_template_identifier) @emphasis))

(cpp2_function_declaration_argument
    (cpp2_block_declaration
        name: (cpp2_non_template_identifier) @emphasis))

(cpp2_function_declaration_argument
    (cpp2_no_definition_declaration
        name: (cpp2_non_template_identifier) @emphasis))

(cpp2_no_definition_declaration
    type: (cpp2_expression
        (cpp2_any_identifier
            last: (cpp2_no_namespace_identifier
                (cpp2_template_identifier
                    (cpp2_non_template_identifier) @type)))))

(cpp2_no_definition_declaration
    type: (cpp2_expression
        (cpp2_any_identifier
            last: (cpp2_no_namespace_identifier) @type)))

(cpp2_left_side_of_definition
    type: (cpp2_expression
        (cpp2_any_identifier
            last: (cpp2_no_namespace_identifier
                (cpp2_template_identifier
                    (cpp2_non_template_identifier) @type)))))

(cpp2_function_type
    return: (cpp2_expression
        (cpp2_any_identifier
            last: (cpp2_no_namespace_identifier
                (cpp2_template_identifier
                    (cpp2_non_template_identifier) @type)))))

(cpp2_next) @keyword

(cpp2_type_type) @keyword

(cpp2_passing_style) @keyword

(cpp2_throws) @keyword

(cpp2_inspect) @keyword

(cpp2_function_call
    function: (cpp2_expression
        (cpp2_any_identifier
            last: (cpp2_no_namespace_identifier
                (cpp2_non_template_identifier) @function))))

(cpp2_function_call
    function: (cpp2_expression
        (cpp2_any_identifier
            last: (cpp2_no_namespace_identifier
                (cpp2_template_identifier
                    (cpp2_non_template_identifier) @function)))))


(cpp2_dot_access
    field: (cpp2_any_identifier
        last: (cpp2_no_namespace_identifier) @property))
