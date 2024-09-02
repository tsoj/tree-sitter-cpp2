
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
"> template" @operator
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


(macro_comment) @comment

(cpp2_no_definition_declaration
    name: (cpp2_non_template_identifier) @constant.builtin )

(cpp2_block_declaration
    name: (cpp2_non_template_identifier) @constant.builtin )

(cpp2_expression_declaration
    name: (cpp2_non_template_identifier) @constant.builtin )

(cpp2_no_definition_declaration
    type: (cpp2_expression
        (cpp2_any_identifier) @type))

(cpp2_left_side_of_definition
    type: (cpp2_expression
        (cpp2_any_identifier) @type))

(cpp2_next) @keyword

(cpp2_type_type) @keyword
