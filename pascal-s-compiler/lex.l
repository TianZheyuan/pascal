%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include "parser.tab.h"

char keyword[35][20]={
	"program","function","procedure","array","const",
	"file","label","packed","var","record","set",
	"type","case","of","do","for","while","repeat",
	"until","if","then","else","to","downto","goto",
	"with","and","or","not","div","mod","in","begin",
	"end","nil"
	};
char* token = NULL;
char* patt = NULL;
int   len=0,row = 1;   

#define YY_USER_ACTION \
	yylloc.first_line = yylloc.last_line = yylineno; \
	yylloc.first_column = row; yylloc.last_column = row+yyleng; 

%}

digit 	 [0-9]
letter 	 [A-Za-z]
id   	 ({letter}|_)+({letter}|{digit}|_)*
num      [0-9]*(\.[0-9]+)?
string   '[^']*'
expl     \{[^}]*\}

%option yylineno

%%
[\t]		{}
[\n]	   	{row = 1;}
[ ] 		{row++; }
"program"  	{ yylval = "program";len = yyleng;row += len;return SYM_program ;
}
"function" 	{ yylval = "function";len = yyleng;row += len;return SYM_function ;
}	
"procedure" 	{ yylval = "procedure";len = yyleng;row += len;return SYM_procedure ;
}
"string"    {yylval = "string";len = yyleng;row += len;return SYM_string ;
}
"array"  	{ yylval = "array";len = yyleng;row += len;return SYM_array ;
}
"const"	   	{ yylval = "const";len = yyleng;row += len;return SYM_const ;
}
"file"  	{ yylval = "file";len = yyleng;row += len;return SYM_file ;
}
"label"  	{ yylval = "lable";len = yyleng;row += len;return SYM_lable ;
}
"packed"  	{ yylval = "packed";len = yyleng;row += len;return SYM_packed ;
}
"var"  		{ yylval = "var";len = yyleng;row += len;return SYM_var ;
}
"record"  	{ yylval = "record";len = yyleng;row += len;return SYM_record ;
}
"set"  		{ yylval = "set";len = yyleng;row += len;return SYM_set ;
}
"type"  	{ yylval = "type";len = yyleng;row += len;return SYM_type ;
}
"case"  	{ yylval = "case";len = yyleng;row += len;return SYM_case ;
}
"of"  		{ yylval = "of";len = yyleng;row += len;return SYM_of ;
}
"do"  		{ yylval = "do";len = yyleng;row += len;return SYM_do ;
}
"for"  		{ yylval = "for";len = yyleng;row += len;return SYM_for ;
}
"while"  	{ yylval = "while";len = yyleng;row += len;return SYM_while ;
}
"repeat"  	{ yylval = "repeat";len = yyleng;row += len;return SYM_repeat ;
}
"until"  	{ yylval = "until";len = yyleng;row += len;return SYM_until ;
}
"if"  		{ yylval = "if";len = yyleng;row += len;return SYM_if ;
}
"then"  	{ yylval = "then";len = yyleng;row += len;return SYM_then ;
}
"else"  	{ yylval = "else";len = yyleng;row += len;return SYM_else ;
}
"to"  		{ yylval = "to";len = yyleng;row += len;return SYM_to ;
}
"downto"  	{ yylval = "downto";len = yyleng;row += len;return SYM_downto ;
}
"goto"  	{ yylval = "goto";len = yyleng;row += len;return SYM_goto ;
}
"with"  	{ yylval = "with";len = yyleng;row += len;return SYM_with ;
}
"and"  		{ yylval = "&&";len = yyleng;row += len;return SYM_and ;
}		
"or"  		{ yylval = "or";len = yyleng;row += len;return SYM_or ;
}
"not"  		{ yylval = "!";len = yyleng;row += len;return SYM_not ;
}
"div"  		{ yylval = "div";len = yyleng;row += len;return SYM_div ;
}
"mod"  		{ yylval = "%";len = yyleng;row += len;return SYM_mod ;
}
"in"  		{ yylval = "in";len = yyleng;row += len;return SYM_in ;
}
"begin"  	{ yylval = "begin";len = yyleng;row += len;return SYM_begin ;
}
"end"  		{ yylval = "end";len = yyleng;row += len;return SYM_end ;
}
"nil"  		{ yylval = "program";len = yyleng;row += len;return SYM_nil ;
}
"integer"  	{ yylval = "integer";len = yyleng;row += len;return SYM_integer ;
}
"boolean"  	{ yylval = "boolean";len = yyleng;row += len;return SYM_boolean ;
}
"char"  	{ yylval = "char";len = yyleng;row += len;return SYM_char ;
}
"real"  	{ yylval = "real";len = yyleng;row += len;return SYM_real ;
}
":="  	{ yylval = ":=";len = yyleng;row += len;return OPR_become ;
}
"+"  	{ yylval = "+" ;len = yyleng;row += len;return OPR_plus ;
}
"-"  	{ yylval = "-" ;len = yyleng;row += len;return OPR_minus ;
}
"*"  	{ yylval = "*" ;len = yyleng;row += len;return OPR_times ;
}
"/"  	{ yylval = "/" ;len = yyleng;row += len;return OPR_slash ;
}
"<"  	{ yylval = "<" ;len = yyleng;row += len;return OPR_lss ;
}
"<="  	{ yylval = "<=" ;len = yyleng;row += len;return OPR_leq ;
}
">"  	{ yylval = ">" ;len = yyleng;row += len;return OPR_gtr ;
}
">="  	{ yylval = ">=" ;len = yyleng;row += len;return OPR_geq ;
}
"<>"  	{ yylval = "<>" ;len = yyleng;row += len;return OPR_neq ;
}
"="  	{ yylval = "=" ;len = yyleng;row += len;return OPR_eql ;
}
"#"  	{ yylval = "#" ;len = yyleng;row += len;return OPR_jin ;
}
"("  	{ yylval = "(" ;len = yyleng;row += len;return BDY_lparen ;
}
")"  	{ yylval = ")" ;len = yyleng;row += len;return BDY_rparen ;
}
","  	{ yylval = "," ;len = yyleng;row += len;return BDY_comma ;
}
";"  	{ yylval = ";" ;len = yyleng;row += len;return BDY_semicolon ;
}
"["  	{ yylval = "[" ;len = yyleng;row += len;return BDY_lfang;
}
"]"  	{ yylval = "]" ;len = yyleng;row += len;return BDY_rfang;
}
"{"  	{ yylval = "{" ;len = yyleng;row += len;return BDY_lhua ;
}
"}"  	{ yylval = "}" ;len = yyleng;row += len;return BDY_rhua ;
}
":"  	{ yylval = ":" ;len = yyleng;row += len;return BDY_colon ;
}
"."  	{ yylval = "." ;len = yyleng;row += len;return BDY_dot;
}
"="  	{ yylval = "=";len = yyleng;row += len;return OPR_eval;
}
"'"  	{ yylval = "'" ;len = yyleng;row += len;return BDY_squo;
}
".."    { yylval = ".."  ; len = yyleng;row += len;return BDY_ddot;
}


{id}	{
	char *temp = (char *)malloc(strlen(yytext)+1);
	strcpy(temp,yytext);
	yylval = temp;
	len = yyleng;
	row += len;
	return id;
	}

{num} 	{
	yylval=(char*)malloc(1000000);
	strcpy( yylval,yytext);
	len = yyleng;
	row += len;
	return num;
	}

{digit}  {
	char *temp = (char *)malloc(strlen(yytext)+1);
	strcpy(temp,yytext);
	yylval = temp;
	len = yyleng;
	row += len;
	return digits;

}
{letter}  {
	char *temp = (char *)malloc(strlen(yytext)+1);
	strcpy(temp,yytext);
	yylval = temp;
	len = yyleng;
	row += len;
	return letter;
}

{string} {
	char *temp = (char *)malloc(strlen(yytext)+1);
	strcpy(temp,yytext);
	yylval = temp;
	len = yyleng;
	row += len;
	return string;
}

{expl}	{
	row += strlen(yytext); 

}

%%

