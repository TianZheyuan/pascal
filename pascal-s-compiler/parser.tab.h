/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 24 "parser.y" /* yacc.c:1909  */

#define YYSTYPE char*

#line 48 "parser.tab.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    id = 258,
    num = 259,
    letter = 260,
    digits = 261,
    string = 262,
    SYM_program = 263,
    SYM_function = 264,
    SYM_procedure = 265,
    SYM_array = 266,
    SYM_const = 267,
    SYM_file = 268,
    SYM_lable = 269,
    SYM_packed = 270,
    SYM_var = 271,
    SYM_record = 272,
    SYM_set = 273,
    SYM_type = 274,
    SYM_case = 275,
    SYM_of = 276,
    SYM_do = 277,
    SYM_for = 278,
    SYM_while = 279,
    SYM_repeat = 280,
    SYM_until = 281,
    SYM_if = 282,
    SYM_then = 283,
    SYM_else = 284,
    SYM_to = 285,
    SYM_downto = 286,
    SYM_goto = 287,
    SYM_with = 288,
    SYM_and = 289,
    SYM_or = 290,
    SYM_not = 291,
    SYM_div = 292,
    SYM_mod = 293,
    SYM_in = 294,
    SYM_begin = 295,
    SYM_end = 296,
    SYM_nil = 297,
    SYM_integer = 298,
    SYM_real = 299,
    SYM_boolean = 300,
    SYM_char = 301,
    SYM_string = 302,
    OPR_become = 303,
    OPR_plus = 304,
    OPR_minus = 305,
    OPR_times = 306,
    OPR_slash = 307,
    OPR_lss = 308,
    OPR_leq = 309,
    OPR_gtr = 310,
    OPR_geq = 311,
    OPR_neq = 312,
    OPR_eql = 313,
    OPR_jin = 314,
    OPR_eval = 315,
    BDY_lparen = 316,
    BDY_rparen = 317,
    BDY_comma = 318,
    BDY_semicolon = 319,
    BDY_lhua = 320,
    BDY_rhua = 321,
    BDY_colon = 322,
    BDY_squo = 323,
    BDY_lfang = 324,
    BDY_rfang = 325,
    BDY_dot = 326,
    BDY_ddot = 327,
    LOWER_THAN_ELSE = 328
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
