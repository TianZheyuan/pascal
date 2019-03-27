/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

#line 67 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
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
#line 24 "parser.y" /* yacc.c:355  */

#define YYSTYPE char*

#line 101 "parser.tab.c" /* yacc.c:355  */

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

/* Copy the second part of user declarations.  */

#line 212 "parser.tab.c" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 28 "parser.y" /* yacc.c:359  */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<malloc.h>
#include <stdarg.h>
#include"code.h"
#include "parsererror.h"
#include"symtable.h"

extern FILE* yyin;
extern char* patt;
extern int yylineno;
char*  filename;
char*  sentence;
char* var_name;
char* array_num;
char* s;
unsigned int error_num = 0;
char * function_type[3];
char* function_name="";
int flag=0;
int array_flag=0;


int function_id=0;
int var_flag=0;

int const_flag=0;
char * function_type[3];
char * id_type;
int dimen = 0;
symbol_type lefttype;
int pos;
char * id_name[10]; 
int id_num;
int truble;
int var_flag;
int function_flag;
char * func_type;
char * func_name;
char * pro_name;
int procedure_flag;
int parameter_flag;
int par_num;
char * const_type;
char * const_id;
char * id_name1;
symbol_type par_type_list[10];
int var_dec_flag;

char*global_pro_name[]={"write_char","write_int","write_string","read_char","read_int"};
char*global_par_name[]={"w_c","w_i","w_s","r_c","r_i"};
int global_par_type[]={CHAR,INT,STRING,CHAR,INT};

#define MAX_SIZE 256
#define	MAX_SIZE_OF_PF 10

symbol_type stack_c[MAX_SIZE];				//分析栈存储类型
int position_c = 0;							//分析栈当前栈顶位置
int num_of_arr = 0;							//
symbol_type type_of_pf[MAX_SIZE_OF_PF];		//用来存储获取的函数或者过程的形参
char* array_of_pf[10];						//用来存储函数调用中的函数名称
int array_of_dimen[10]={0};						//用来记录每次嵌套调用时的形参进行程度
int depth_of_pf=0;							//用来记录函数当前深度
int dimension = 0;						
char* ttemp;
char* itemp;
int numa;

void into_pf(const char* name);				//进入函数或过程调用时进行的保存现场操作
void out_pf();								//完成函数或者过程调用所需要的恢复现场操作
void into_pf(const char* name)
{
	if( depth_of_pf == 0)
	{
		array_of_pf[0] = name;
		dimension = 0;
		depth_of_pf++;
	}
	else 
	{
		array_of_pf[depth_of_pf] = name;
		array_of_dimen[depth_of_pf-1] = dimension;
		depth_of_pf++;
		dimension = 0;
	}
}

void out_pf()
{
	depth_of_pf--;
	if(depth_of_pf!=0)
		dimension = array_of_dimen[depth_of_pf-1];
}




typedef struct p_list
{
    char * name;
    char * type;
	int is_var;
    char * proc_func_name;
}p_list;

int par_all_num;
p_list par_list[50];

int get_parameter(char * a)//返回第一个参数的位置
{
    int i = 0;
    for( ; i < par_all_num; i++ )
    {
        if( strcmp( par_list[i].proc_func_name, a ) )
            return i;
    }
    return -1;
}

symbol_type return_symtype(char* a)
{
    if(strcmp(a,"int")==0)
    {
        return INT;
    }
    if(strcmp(a,"char")==0)
    {
        return CHAR;
    }
    if(strcmp(a,"bool")==0)
    {
        return BOOL;
    }
    if(strcmp(a,"float")==0)
    {
        return FLOAT;
    }
	if(strcmp(a,"string")==0)
    {
        return STRING;
    }
}

char * return_chartype(symbol_type a)
{
    if(a == INT)
    {
        return "int";
    }
    if(a == CHAR)
    {
        return "char";
    }
    if(a == BOOL)
    {
        return "bool";
    }
    if(a == FLOAT)
    {
        return "float";
    }
	if(a==STRING)
    {
        return "string";
    }
}

char * get_num_type( char * a )
{
    if(strstr(a,"."))
    {
        return "float";
    }
    return "int";
}

void lyyerror(YYLTYPE t, const char *s, ...)
{
    va_list ap;
    va_start(ap, s);

    if(t.first_line)
        fprintf(stderr, "%s: line %d-%d: column %d-%d: error: ", filename,
            t.first_line, t.last_line, 
            t.first_column, t.last_column);
    vfprintf(stderr, s, ap);
    fprintf(stderr, "\n");
    underline_code(filename, t.first_line, t.first_column, t.last_column-t.first_column);
    error_num++;
}

void yyerror(const char* str, ...)
{
    lyyerror(yylloc, str);
}

int yywrap()
{
    return 1;
}

void help(const char* command_line)
{
    printf("Pascal-S Compiler 1.0.0. Build Time: %s %s\n", __DATE__, __TIME__);
    puts("This software is written by Donggang Jia, Guoliang Tian, "
        "Yongjie Xu, Yongkang Huang, Zhaoyu Gan and Zheyuan Tian.");
    putchar('\n');
    printf("Usage: %s <filename>\n", command_line);
}

struct id_list* head;
struct id_list* ppp;
struct id_list* test;
struct id_list* test_function;
struct id_list* p1;
struct id_list* p2;



int main(int argc, char* argv[])
{
    head=(struct id_list*)malloc(sizeof(struct id_list));
    head->next=NULL;
    ppp=(struct id_list*)malloc(sizeof(struct id_list));
    ppp->next=NULL;
    if(argc == 1)
    {
        help(argv[0]);
        puts("No input file.");
        return -1;
    }

    // Call Parser
    yyin=fopen(argv[1], "r");
    if(yyin == NULL)
    {
        printf("%s: error: Can't open file.\n", argv[1]);
        exit(255);
    }
    filename = argv[1];
    file_clean();
    yyparse();
    fclose(yyin);
    printf("Finished. %u error(s).\n", error_num);
    if(error_num)
        {
            system("rm print_file.cpp");
        }
    else
    {
        system("gcc print_file.cpp -o pascal_c");
    }
    return 0;
}

#line 472 "parser.tab.c" /* yacc.c:359  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   251

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  99
/* YYNRULES -- Number of rules.  */
#define YYNRULES  170
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  285

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   328

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   288,   288,   288,   309,   312,   317,   320,   330,   342,
     353,   368,   394,   394,   403,   409,   409,   409,   415,   415,
     420,   422,   441,   459,   477,   495,   513,   531,   561,   560,
     574,   580,   579,   615,   644,   647,   678,   677,   720,   726,
     732,   738,   744,   750,   765,   780,   790,   796,   797,   796,
     865,   868,   867,   909,   908,   953,   959,   964,   966,   972,
     977,   979,   985,   991,   991,   998,  1022,  1032,  1031,  1044,
    1044,  1051,  1057,  1062,  1065,  1074,  1064,  1093,  1099,  1105,
    1106,  1113,  1113,  1105,  1119,  1120,  1131,  1138,  1138,  1139,
    1119,  1154,  1159,  1153,  1170,  1176,  1175,  1221,  1221,  1243,
    1250,  1277,  1297,  1276,  1316,  1316,  1322,  1329,  1329,  1336,
    1342,  1345,  1344,  1371,  1377,  1377,  1413,  1419,  1419,  1461,
    1467,  1479,  1484,  1490,  1491,  1502,  1490,  1521,  1521,  1521,
    1527,  1535,  1543,  1543,  1543,  1551,  1558,  1564,  1564,  1588,
    1594,  1594,  1626,  1632,  1645,  1652,  1653,  1664,  1652,  1682,
    1682,  1682,  1688,  1696,  1704,  1740,  1742,  1742,  1742,  1742,
    1742,  1742,  1744,  1744,  1744,  1746,  1746,  1746,  1746,  1746,
    1748
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "id", "num", "letter", "digits",
  "string", "SYM_program", "SYM_function", "SYM_procedure", "SYM_array",
  "SYM_const", "SYM_file", "SYM_lable", "SYM_packed", "SYM_var",
  "SYM_record", "SYM_set", "SYM_type", "SYM_case", "SYM_of", "SYM_do",
  "SYM_for", "SYM_while", "SYM_repeat", "SYM_until", "SYM_if", "SYM_then",
  "SYM_else", "SYM_to", "SYM_downto", "SYM_goto", "SYM_with", "SYM_and",
  "SYM_or", "SYM_not", "SYM_div", "SYM_mod", "SYM_in", "SYM_begin",
  "SYM_end", "SYM_nil", "SYM_integer", "SYM_real", "SYM_boolean",
  "SYM_char", "SYM_string", "OPR_become", "OPR_plus", "OPR_minus",
  "OPR_times", "OPR_slash", "OPR_lss", "OPR_leq", "OPR_gtr", "OPR_geq",
  "OPR_neq", "OPR_eql", "OPR_jin", "OPR_eval", "BDY_lparen", "BDY_rparen",
  "BDY_comma", "BDY_semicolon", "BDY_lhua", "BDY_rhua", "BDY_colon",
  "BDY_squo", "BDY_lfang", "BDY_rfang", "BDY_dot", "BDY_ddot",
  "LOWER_THAN_ELSE", "$accept", "programstruct", "$@1", "program_head",
  "program_body", "idlist", "function_idlist", "const_declarations", "$@2",
  "const_declaration", "$@3", "$@4", "$@5", "const_value",
  "var_declarations", "$@6", "var_declaration", "$@7", "type", "$@8",
  "simple_type", "period", "subprogram_declarations", "subprogram", "$@9",
  "$@10", "subprogram_head", "$@11", "$@12", "formal_parameter",
  "parameter_list", "parameter", "var_parameter", "$@13",
  "value_parameter", "subprogram_body", "compound_statement", "$@14",
  "program_compound_statement", "$@15", "statement_list", "statement",
  "$@16", "$@17", "$@18", "$@19", "$@20", "$@21", "$@22", "$@23", "$@24",
  "$@25", "$@26", "$@27", "$@28", "$@29", "variable", "$@30", "id_varpart",
  "$@31", "procedure_call", "$@32", "$@33", "else_part", "$@34",
  "expression_list", "$@35", "expression", "$@36", "simple_expression",
  "$@37", "term", "$@38", "factor", "$@39", "$@40", "$@41", "$@42", "$@43",
  "array_expression_list", "$@44", "$@45", "array_expression",
  "array_simple_expression", "$@46", "array_term", "$@47", "array_factor",
  "$@48", "$@49", "$@50", "$@51", "$@52", "str", "assignop", "relop",
  "addop", "mulop", "uminus", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328
};
# endif

#define YYPACT_NINF -196

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-196)))

#define YYTABLE_NINF -146

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      31,    90,    24,    67,  -196,  -196,    75,    55,  -196,    47,
    -196,    66,   124,   144,    75,   150,  -196,  -196,  -196,  -196,
      64,    91,    92,  -196,    96,   154,    85,  -196,   170,  -196,
     183,   129,   185,   125,    -4,   126,   127,  -196,  -196,  -196,
     130,  -196,  -196,  -196,   135,    89,   192,   144,    87,   193,
      75,   194,   197,    10,  -196,   137,    89,  -196,  -196,  -196,
     172,   174,  -196,  -196,  -196,    18,  -196,  -196,  -196,  -196,
    -196,  -196,  -196,  -196,   144,   124,  -196,     5,    14,   138,
      36,  -196,  -196,  -196,  -196,  -196,   -22,  -196,   155,  -196,
    -196,  -196,  -196,  -196,  -196,  -196,   146,    87,   136,    50,
     166,   145,    40,   141,  -196,    80,   142,   149,   209,    21,
      21,    10,  -196,    80,  -196,  -196,    75,    89,  -196,   210,
      87,  -196,  -196,   151,  -196,  -196,    61,    97,  -196,  -196,
    -196,    99,  -196,  -196,  -196,  -196,  -196,   152,  -196,    21,
    -196,  -196,  -196,  -196,   114,    84,  -196,  -196,    21,  -196,
     -11,  -196,    21,  -196,  -196,   147,    38,  -196,    33,   213,
     214,    99,  -196,    33,  -196,    41,    19,   155,  -196,  -196,
      21,   196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
     195,  -196,  -196,   216,   217,   201,  -196,  -196,  -196,  -196,
    -196,   163,  -196,    41,  -196,  -196,   156,  -196,    12,    84,
    -196,    41,   164,   118,  -196,    21,   167,   169,    80,    21,
      21,    21,  -196,  -196,  -196,   157,    99,  -196,  -196,    21,
    -196,   171,  -196,  -196,  -196,    21,  -196,  -196,  -196,  -196,
    -196,  -196,    12,    84,  -196,    80,   228,  -196,   175,   173,
    -196,    41,    41,  -196,    21,   203,    19,  -196,  -196,  -196,
    -196,  -196,    41,    84,  -196,  -196,  -196,   120,   208,    19,
    -196,  -196,    21,  -196,  -196,  -196,   122,  -196,    80,  -196,
    -196,  -196,   218,    80,  -196
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     6,    14,     0,     1,     0,
      12,     0,    30,     0,    14,     0,     4,    28,    46,     9,
       0,     0,     0,    18,     0,     0,     0,     5,     0,     3,
       0,     0,    13,     0,     0,     0,     0,    53,    51,    69,
       0,    47,     7,     8,     0,     0,     0,     0,     0,    29,
      14,     0,     0,     0,    45,     0,     0,    23,    26,   154,
       0,     0,    19,    27,    16,     0,    36,    38,    39,    40,
      41,    42,    33,    35,     0,    30,    50,     0,     0,     0,
     100,    84,    91,    79,    67,    78,     0,    72,     0,    77,
      48,    20,    21,    24,    22,    25,     0,     0,     0,     0,
       0,     0,     0,     0,    52,    94,    99,     0,     0,     0,
       0,     0,    70,    94,   155,    74,    14,     0,    34,     0,
       0,    66,    57,     0,    11,    63,     0,     0,    59,    61,
      62,     0,    73,    97,    96,   102,    85,    95,   120,     0,
     170,   127,   122,    92,   113,   116,   119,   121,     0,    80,
       0,    71,     0,    49,    17,     0,     0,    32,     0,     0,
       0,     0,    55,     0,    54,     0,     0,     0,   124,   130,
       0,     0,   164,   162,   163,   158,   159,   160,   161,   157,
     156,   111,   114,   169,   167,   168,   165,   166,   117,   131,
       0,    68,    75,     0,     0,     0,    60,    64,    10,    65,
      58,    95,   143,     0,   149,   144,   132,   135,   136,   139,
     142,     0,     0,     0,   109,     0,     0,     0,    94,     0,
       0,     0,    81,    76,    44,     0,     0,   146,   152,     0,
      98,     0,   137,   140,   153,     0,   103,   107,    86,   125,
     128,    93,   112,   115,   118,    94,     0,    37,     0,     0,
     133,     0,     0,   110,     0,     0,     0,   129,    82,    43,
     147,   150,     0,   138,   141,   108,    87,     0,   106,     0,
     151,   134,     0,   126,   104,    83,     0,    88,    94,   148,
      89,   105,     0,    94,    90
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -196,  -196,  -196,  -196,   224,    -9,  -196,   -40,  -196,  -196,
    -196,  -196,  -196,   -44,   168,  -196,  -196,  -196,   -66,  -196,
    -126,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,   161,
    -196,   -48,  -196,  -196,    82,   128,   148,  -196,  -196,  -196,
     131,  -104,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,  -196,  -196,  -196,  -196,  -196,   -53,  -196,  -196,  -196,
    -196,  -196,  -196,  -196,  -196,  -150,  -196,  -106,  -196,    26,
    -196,    27,  -196,  -131,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,  -196,   -16,  -196,  -196,    -2,  -196,  -182,  -196,  -196,
    -196,  -196,  -196,   -38,    83,  -196,    43,  -195,  -163
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     9,     4,    11,    20,   126,    12,    15,    24,
      46,    96,    31,    62,    18,    25,    35,    74,    72,    98,
      73,   156,    26,    40,    55,   116,    41,    52,    51,   103,
     127,   128,   129,   159,   130,    76,    85,   111,    42,    53,
      86,    87,   152,   223,   110,   190,   245,   268,   108,   167,
     255,   272,   280,   282,   109,   171,   142,   106,   134,   165,
      89,   107,   166,   275,   278,   213,   254,   214,   219,   144,
     220,   145,   221,   146,   168,   216,   256,   170,   257,   206,
     231,   262,   207,   208,   251,   209,   252,   210,   227,   248,
     269,   229,   270,   147,   115,   181,   182,   188,   148
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      88,   132,   211,   143,   149,   164,   101,    63,   169,   151,
      75,    79,    91,    80,   233,   101,    34,   189,    63,   112,
     212,   228,   137,   138,   137,   138,    59,     7,    59,   234,
     191,   118,     1,    81,    82,   199,   124,    83,    65,     2,
     211,   123,   113,   124,   201,   202,   192,   172,   211,   125,
      84,   -94,    88,   113,   157,   139,   125,   139,    88,    28,
      88,   173,   174,    48,   217,    99,   102,     8,   233,   140,
     264,   140,   -56,   154,   -94,   102,    75,   203,   -56,    63,
     141,    28,   141,    80,   -95,    97,    36,    10,   211,   211,
     244,   140,    57,    58,    37,    38,    59,  -101,    66,   211,
     247,   194,   204,    81,    82,   -95,   267,    83,   195,   238,
     196,    14,   205,    28,   241,   200,    13,   120,   183,   276,
      84,   184,   185,   249,   160,    39,    27,    28,   161,   253,
      67,    68,    69,    70,    71,   186,   187,    16,    60,    61,
      17,   258,    67,    68,    69,    70,    71,    19,   265,   172,
     205,    22,     5,    23,     6,    33,    30,    19,   205,   162,
      32,   163,    29,   173,   174,    88,   277,   175,   176,   177,
     178,   179,   180,    43,   281,    92,    93,    94,    95,   284,
     236,   237,   273,   237,   279,   237,    44,    45,   -15,    47,
      49,    50,    88,    56,    54,    64,   -31,    77,   205,   205,
      78,    90,   105,   114,   117,   119,    84,   122,   131,   205,
     135,   133,   136,  -123,   155,   158,   124,   198,   218,   193,
     224,   225,   226,   222,  -145,    88,   230,   235,   239,   246,
      88,   240,   259,   266,   250,   261,   260,   274,    21,   104,
     283,   197,   150,   100,   153,   242,   271,   243,   121,   263,
     215,   232
};

static const yytype_uint16 yycheck[] =
{
      53,   105,   165,   109,   110,   131,     1,    45,   139,   113,
      50,     1,    56,     3,   209,     1,    25,   148,    56,    41,
       1,   203,     3,     4,     3,     4,     7,     3,     7,   211,
      41,    97,     1,    23,    24,   161,     3,    27,    47,     8,
     203,     1,    64,     3,     3,     4,   152,    35,   211,    16,
      40,    41,   105,    64,   120,    36,    16,    36,   111,    63,
     113,    49,    50,    67,   170,    74,    61,     0,   263,    50,
     252,    50,    67,   117,    64,    61,   116,    36,    64,   117,
      61,    63,    61,     3,    48,    67,     1,    12,   251,   252,
     221,    50,     3,     4,     9,    10,     7,    61,    11,   262,
     226,    63,    61,    23,    24,    69,   256,    27,    70,   215,
     158,    64,   165,    63,   218,   163,    61,    67,    34,   269,
      40,    37,    38,   229,    63,    40,    62,    63,    67,   235,
      43,    44,    45,    46,    47,    51,    52,    71,    49,    50,
      16,   245,    43,    44,    45,    46,    47,     3,   254,    35,
     203,     1,    62,     3,    64,     1,    64,     3,   211,    62,
      64,    64,    71,    49,    50,   218,   272,    53,    54,    55,
      56,    57,    58,     3,   278,     3,     4,     3,     4,   283,
      62,    63,    62,    63,    62,    63,     3,    58,     3,    64,
      64,    64,   245,    58,    64,     3,     3,     3,   251,   252,
       3,    64,    64,    48,    58,    69,    40,    62,    67,   262,
      61,    69,     3,    61,     4,    64,     3,     3,    22,    72,
       4,     4,    21,    28,    61,   278,    70,    63,    61,    72,
     283,    62,     4,    30,    63,    62,    61,    29,    14,    78,
      22,   159,   111,    75,   116,   219,   262,   220,   100,   251,
     167,   208
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     8,    75,    77,    62,    64,     3,     0,    76,
      12,    78,    81,    61,    64,    82,    71,    16,    88,     3,
      79,    78,     1,     3,    83,    89,    96,    62,    63,    71,
      64,    86,    64,     1,    79,    90,     1,     9,    10,    40,
      97,   100,   112,     3,     3,    58,    84,    64,    67,    64,
      64,   102,   101,   113,    64,    98,    58,     3,     4,     7,
      49,    50,    87,   167,     3,    79,    11,    43,    44,    45,
      46,    47,    92,    94,    91,    81,   109,     3,     3,     1,
       3,    23,    24,    27,    40,   110,   114,   115,   130,   134,
      64,    87,     3,     4,     3,     4,    85,    67,    93,    79,
      88,     1,    61,   103,   103,    64,   131,   135,   122,   128,
     118,   111,    41,    64,    48,   168,    99,    58,    92,    69,
      67,   110,    62,     1,     3,    16,    80,   104,   105,   106,
     108,    67,   115,    69,   132,    61,     3,     3,     4,    36,
      50,    61,   130,   141,   143,   145,   147,   167,   172,   141,
     114,   115,   116,   109,    87,     4,    95,    92,    64,   107,
      63,    67,    62,    64,    94,   133,   136,   123,   148,   147,
     151,   129,    35,    49,    50,    53,    54,    55,    56,    57,
      58,   169,   170,    34,    37,    38,    51,    52,   171,   147,
     119,    41,   141,    72,    63,    70,   105,   108,     3,    94,
     105,     3,     4,    36,    61,   130,   153,   156,   157,   159,
     161,   172,     1,   139,   141,   168,   149,   141,    22,   142,
     144,   146,    28,   117,     4,     4,    21,   162,   161,   165,
      70,   154,   170,   171,   161,    63,    62,    63,   141,    61,
      62,   115,   143,   145,   147,   120,    72,    94,   163,   141,
      63,   158,   160,   141,   140,   124,   150,   152,   115,     4,
      61,    62,   155,   159,   161,   141,    30,   139,   121,   164,
     166,   156,   125,    62,    29,   137,   139,   141,   138,    62,
     126,   115,   127,    22,   115
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    74,    76,    75,    75,    77,    77,    78,    79,    79,
      80,    80,    82,    81,    81,    84,    85,    83,    86,    83,
      83,    87,    87,    87,    87,    87,    87,    87,    89,    88,
      88,    91,    90,    90,    90,    92,    93,    92,    94,    94,
      94,    94,    94,    95,    95,    96,    96,    98,    99,    97,
      97,   101,   100,   102,   100,   103,   103,   103,   104,   104,
     104,   105,   105,   107,   106,   108,   109,   111,   110,   113,
     112,   114,   114,   114,   116,   117,   115,   115,   115,   118,
     119,   120,   121,   115,   122,   123,   124,   125,   126,   127,
     115,   128,   129,   115,   115,   131,   130,   133,   132,   132,
     134,   135,   136,   134,   138,   137,   137,   140,   139,   139,
     139,   142,   141,   141,   144,   143,   143,   146,   145,   145,
     147,   147,   147,   148,   149,   150,   147,   151,   152,   147,
     147,   147,   154,   155,   153,   153,   156,   158,   157,   157,
     160,   159,   159,   161,   161,   162,   163,   164,   161,   165,
     166,   161,   161,   161,   167,   168,   169,   169,   169,   169,
     169,   169,   170,   170,   170,   171,   171,   171,   171,   171,
     172
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     5,     4,     5,     2,     4,     3,     1,
       3,     1,     0,     4,     0,     0,     0,     7,     0,     4,
       5,     2,     2,     1,     2,     2,     1,     1,     0,     4,
       0,     0,     6,     3,     5,     1,     0,     7,     1,     1,
       1,     1,     1,     5,     3,     3,     0,     0,     0,     5,
       3,     0,     4,     0,     6,     3,     0,     2,     3,     1,
       3,     1,     1,     0,     3,     3,     3,     0,     4,     0,
       4,     3,     1,     3,     0,     0,     5,     1,     1,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
      14,     0,     0,     6,     0,     0,     3,     0,     4,     0,
       1,     0,     0,     6,     0,     3,     0,     0,     4,     1,
       3,     0,     4,     1,     0,     4,     1,     0,     4,     1,
       1,     1,     1,     0,     0,     0,     7,     0,     0,     5,
       2,     2,     0,     0,     5,     1,     1,     0,     4,     1,
       0,     4,     1,     1,     1,     0,     0,     0,     7,     0,
       0,     5,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 288 "parser.y" /* yacc.c:1646  */
    { 
        /* programstruct  →  program_head ; program_body . */
        /* 翻译方案 1 */ 
		
		locate_table();
		
		for(int i = 0;i < 5; i++)
		{
		    if(!add_procedure(global_pro_name[i],1))
                yyerror(global_pro_name[i]);
            
		    if( !add_parameter(global_pro_name[i],global_par_name[i],global_par_type[i] ))
        	    yyerror(global_pro_name[i]);
		}

		
        sentence="#include<stdio.h>\n#include<stdlib.h>\n#include\"code.h\"\n";
        print(sentence);
        //print("#define out(name) printf(\"%d\",name)\n#define out(name) printf(\"%c\",name)\n#define out(name)  printf(\"%s\",name)\n#define read(name) scanf(\"%d\",&name)\n ");
    }
#line 1897 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 308 "parser.y" /* yacc.c:1646  */
    {print("\n}");relocate_table();}
#line 1903 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 313 "parser.y" /* yacc.c:1646  */
    { 
        /* program_head → id ( idlist ) */
        /* 翻译方案 2 */
    }
#line 1912 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 324 "parser.y" /* yacc.c:1646  */
    { 
        /* program_body */
        /* 翻译方案 3 */ 
    }
#line 1921 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 331 "parser.y" /* yacc.c:1646  */
    {
        id_name[id_num] = (yyvsp[0]);
        id_num++; 
		
        var_name=char_strcpy(var_name,",");
        var_name=char_strcpy(var_name,(yyvsp[0]));
        //printf("%s\n",var_name);
        /* idlist → idlist , id */
        /* 翻译方案 4 */
    }
#line 1936 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 343 "parser.y" /* yacc.c:1646  */
    {   
	    id_name[id_num] = (yyvsp[0]);
        id_num++;
		
		var_name=(yyvsp[0]);
        /* idlist → id */ 
        /* 翻译方案 5 */
    }
#line 1949 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 354 "parser.y" /* yacc.c:1646  */
    {
		
        p1=(struct id_list*)malloc(sizeof(struct id_list));
        p1->type="";
        p1->next=NULL;
        p1->name=(yyvsp[0]);
        p1->id_list_id=function_id;
        ppp->next=p1;
        ppp=ppp->next;
        //printf("%s\n",var_name);
        /* idlist → idlist , id */
        /* 翻译方案 4 */
    }
#line 1967 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 369 "parser.y" /* yacc.c:1646  */
    {   
	    
		if(head->next==NULL)
        {
        ppp->type="";    
        ppp->name=(yyvsp[0]);
        ppp->id_list_id=function_id;
        head->next=ppp;
        }
        else
        {
        p2=(struct id_list*)malloc(sizeof(struct id_list));
        p2->type="";
        p2->name=(yyvsp[0]);
        p2->id_list_id=function_id;
        ppp->next=p2;
        ppp=ppp->next;
        }

        
        /* idlist → id */ 
        /* 翻译方案 5 */
    }
#line 1995 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 394 "parser.y" /* yacc.c:1646  */
    {print("const ");const_flag=1;}
#line 2001 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 395 "parser.y" /* yacc.c:1646  */
    { 
        const_flag=0;
		
		print(";\n");
        /* const_declarations → const const_declaration ; */
        /* 翻译方案 6 */  
    }
#line 2013 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 403 "parser.y" /* yacc.c:1646  */
    {
        /* const_declarations → ε */ 
        /* 翻译方案 7 */
    }
#line 2022 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 409 "parser.y" /* yacc.c:1646  */
    {print(";\nconst ");}
#line 2028 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 409 "parser.y" /* yacc.c:1646  */
    {const_id = (yyvsp[0]);}
#line 2034 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 410 "parser.y" /* yacc.c:1646  */
    {
        /* const_declaration → const_declaration ; id = const_value */
        /* 翻译方案 8 */ 
    }
#line 2043 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 415 "parser.y" /* yacc.c:1646  */
    {const_id = (yyvsp[0]);}
#line 2049 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 416 "parser.y" /* yacc.c:1646  */
    {
        /* const_declaration → id = const_value */ 
        /* 翻译方案 9 */
    }
#line 2058 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 423 "parser.y" /* yacc.c:1646  */
    {
        const_type = return_chartype(get_type((yyvsp[0])));
        if(!add_const(const_id,return_symtype(const_type)))           
		{	
            yyerror((yyvsp[0]));
		}   
		
		print(const_type);
        print(" ");
        print(const_id);
        print(" = +");
        //printf("%s %s = +",const_type,const_id);
		
		print((yyvsp[0]));
        /* const_value → + id */ 
        /* 翻译方案 10 */
    }
#line 2080 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 442 "parser.y" /* yacc.c:1646  */
    {
        const_type = return_chartype(get_type((yyvsp[0])));
        if(!add_const(const_id,return_symtype(const_type)))           
		{	
            yyerror((yyvsp[0]));
		}
        print(const_type);
        print(" ");
        print(const_id);
        print(" = -");		
        //printf("%s %s = -",const_type,const_id);
		
		print((yyvsp[0]));
        /* const_value → - id */ 
        /* 翻译方案 11 */
    }
#line 2101 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 460 "parser.y" /* yacc.c:1646  */
    {
        const_type = return_chartype(get_type((yyvsp[0])));
        if(!add_const(const_id,return_symtype(const_type)))           
		{	
            yyerror((yyvsp[0]));
		}
        print(const_type);
        print(" ");
        print(const_id);
        print(" = ");		
        //printf("%s %s = ",const_type,const_id);
		
		print((yyvsp[0]));
        /* const_value → id */ 
        /* 翻译方案 12 */
    }
#line 2122 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 478 "parser.y" /* yacc.c:1646  */
    {
        const_type = get_num_type((yyvsp[0]));
        if(!add_const(const_id,return_symtype(const_type)))           
		{	
            yyerror((yyvsp[0]));
		}
		print(const_type);
        print(" ");
        print(const_id);
        print(" = +");
        //printf("%s %s = +",const_type,const_id);
		
		print((yyvsp[0]));
        /* const_value → + num */ 
        /* 翻译方案 13 */
    }
#line 2143 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 496 "parser.y" /* yacc.c:1646  */
    {
        const_type = get_num_type((yyvsp[0]));
        if(!add_const(const_id,return_symtype(const_type)))           
		{	
            yyerror((yyvsp[0]));
		}
		print(const_type);
        print(" ");
        print(const_id);
        print(" = -");
        //printf("%s %s = -",const_type,const_id);
		
		print((yyvsp[0]));
        /* const_value → - num */ 
        /* 翻译方案 14 */
    }
#line 2164 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 514 "parser.y" /* yacc.c:1646  */
    {   
	    const_type = get_num_type((yyvsp[0]));
        if(!add_const(const_id,return_symtype(const_type)))           
		{	
            yyerror((yyvsp[0]));
		}
		print(const_type);
        print(" ");
        print(const_id);
        print(" = ");
        //printf("%s %s = ",const_type,const_id);
		
	    print((yyvsp[0]));
        /* const_value → num */ 
        /* 翻译方案 15 */
    }
#line 2185 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 532 "parser.y" /* yacc.c:1646  */
    {
        if(!add_const(const_id,return_symtype(const_type)))           
		{	
            yyerror((yyvsp[0]));
		}
		if(strcmp(const_type,"string")==0)
        {
            print("char*");
        }
        else{
            print(const_type);
        }
        print(" ");
        print(const_id);
        print(" = ");
        //printf("%s %s = ",const_type,const_id);
		s=(char*)malloc(sizeof(char)*100);
		print("\"");
		int a=strlen((yyvsp[0]))-2;
		strncpy(s,((yyvsp[0]))+1,a);     
        s[a]='\0'; 
		print(s);
		print("\"");
		free(s);
        /* 字符（串）翻译方案 */
        /* 在Pascal中，char和string使用的都是单引号，因此需要根据str的长度区分char和string */
    }
#line 2217 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 561 "parser.y" /* yacc.c:1646  */
    {
	    id_num = 0;
        var_dec_flag = 1;
	}
#line 2226 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 566 "parser.y" /* yacc.c:1646  */
    {
        var_dec_flag = 0;
		
		print(";\n");
        /* var_declarations → var var_declaration ; */
        /* 翻译方案 17 */ 
    }
#line 2238 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 574 "parser.y" /* yacc.c:1646  */
    {
        /* var_declarations → ε")
        /* 翻译方案 18 */
    }
#line 2247 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 580 "parser.y" /* yacc.c:1646  */
    {
	    print(";\n");
		id_num = 0;
	}
#line 2256 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 585 "parser.y" /* yacc.c:1646  */
    {
	    if(array_flag==0)
       { 
           
           print(var_name);
       }
       if(array_flag==1)
       {
            char* token = strtok(var_name, ",");
            while( token != NULL )
            {
             print(token);
             print(array_num);
             
            token = strtok( NULL, ",");
            if(token!=NULL)
            {
                print(",");
            }
            }

           
           array_flag=0;
       }
        //print(var_name);
        /* var_declaration → var_declaration ; idlist : type */ 
        /* 翻译方案 19 */
    }
#line 2289 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 616 "parser.y" /* yacc.c:1646  */
    {
        
        if(array_flag==0)
       { 
           
           print(var_name);
       }
       if(array_flag==1)
       {
            char* token = strtok(var_name, ",");
            while( token != NULL )
            {
             print(token);
             print(array_num);
             
            token = strtok( NULL, ",");
            if(token!=NULL)
            {
                print(",");
            }
            }

           
           array_flag=0;
       }
        /* var_declaration → idlist : type */ 
        /* 翻译方案 20 */
    }
#line 2322 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 648 "parser.y" /* yacc.c:1646  */
    {
        if( var_dec_flag == 1 )
        {    
		    if( array_flag != 1 )
			{
			    for( int i = 0; i < id_num; i++ )
    	        {    
				    //printf("   %s  %s\n",id_name[i],code_get_type($1));
					if( !add_variable(id_name[i],return_symtype(code_get_type((yyvsp[0]))) ))
    	            {
						yyerror(id_name[i]);
                    } 
				}
			}
		}
		
		if(strcmp(code_get_type((yyvsp[0])),"string")==0)
        {
            print("char*");
        }
        else
        {
            print(code_get_type((yyvsp[0])));
        }
        print(" ");
        /* type → simple_type */ 
        /* 翻译方案 21 */
    }
#line 2355 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 678 "parser.y" /* yacc.c:1646  */
    {
        dimen = 0;
		
        array_num="";/*将array_num值清空*/
        array_flag=1;
    }
#line 2366 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 685 "parser.y" /* yacc.c:1646  */
    {
	    id_type = code_get_type((yyvsp[0]));
		if( var_dec_flag )
        {    
		    if( array_flag  )
			{
			    for(int i = 0; i < id_num; i++ )
                {    
		    
		            if(!add_array(id_name[i],return_symtype(code_get_type((yyvsp[0]))),dimen))
                    {
                        //printf("   %s  %s\n",id_name[i],code_get_type($7));
				        yyerror(id_name[i]);
                    }
			        //printf("   %s  %d\n",symbol_stack[find_element(id_name[i])].name,symbol_stack[find_element(id_name[i])].type);
		        }
			}
		}
		
        if(strcmp(code_get_type((yyvsp[0])),"string")==0)
        {
            print("char*");
        }
        else
        {
            print(code_get_type((yyvsp[0])));
        }

        
        print(" ");
        /* type → array [ period ] of simple_type */ 
        /* 翻译方案 22 */
    }
#line 2404 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 721 "parser.y" /* yacc.c:1646  */
    {
        /* simple_type → integer */ 
        /* 翻译方案 23 */
    }
#line 2413 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 727 "parser.y" /* yacc.c:1646  */
    {
        /* simple_type → real */ 
        /* 翻译方案 24 */
    }
#line 2422 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 733 "parser.y" /* yacc.c:1646  */
    {
        /* simple_type → boolean */ 
        /* 翻译方案 25 */
    }
#line 2431 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 739 "parser.y" /* yacc.c:1646  */
    {
        /* simple_type → char */ 
        /* 翻译方案 26 */
    }
#line 2440 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 745 "parser.y" /* yacc.c:1646  */
    {

    }
#line 2448 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 751 "parser.y" /* yacc.c:1646  */
    {
        dimen++;
		int x=atoi((yyvsp[0]))-atoi((yyvsp[-2]))+1;
        char * m;
        m=(char*)malloc(sizeof(char)*100);
        sprintf(m,"%d",x);
		array_num=char_strcpy(array_num,"[");
        array_num=char_strcpy(array_num,m);
        array_num=char_strcpy(array_num,"]");

        /* period → period , num .. num */ 
        /* 翻译方案 27 */
    }
#line 2466 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 766 "parser.y" /* yacc.c:1646  */
    {
        dimen++;
		int x=atoi((yyvsp[0]))-atoi((yyvsp[-2]))+1;
         char * m;
        m=(char*)malloc(sizeof(char)*100);
        sprintf(m,"%d",x);
		array_num=char_strcpy(array_num,"[");
        array_num=char_strcpy(array_num,m);
        array_num=char_strcpy(array_num,"]");
        /* period → num .. num */ 
        /* 翻译方案 28 */
    }
#line 2483 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 782 "parser.y" /* yacc.c:1646  */
    {
        print("}\n");
		//array_flag = 0;
		//locate_table();
        /* subprogram_declarations → subprogram_declarations \\n subprogram ; */ 
        /* 翻译方案 29 */
    }
#line 2495 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 790 "parser.y" /* yacc.c:1646  */
    {
        /* subprogram_declarations → ε */
        /* 翻译方案 30 */
    }
#line 2504 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 796 "parser.y" /* yacc.c:1646  */
    {print("{\n");}
#line 2510 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 797 "parser.y" /* yacc.c:1646  */
    {
	    if( function_flag == 1 )
        {
            if(!add_function(function_name,return_symtype(func_type),par_num))
            {
                yyerror(function_name);
            }  
            function_flag = 0;
			
			locate_table();
			
			for( int i = par_all_num - par_num; i < par_all_num; i++)
			{
			    //printf("  %s \n",par_list[i].name);
				par_list[i].proc_func_name = function_name;
				if( par_list[i].is_var )
				{
				    if( !add_reference_parameter(function_name,par_list[i].name,return_symtype(par_list[i].type)) )
				    {
        	            yyerror(par_list[i].name);
                    }
				}
				else
				{
				    if( !add_parameter(function_name,par_list[i].name,return_symtype(par_list[i].type)) )
				    {
        	            yyerror(par_list[i].name);
                    }
				}
			}
		}
		if( procedure_flag == 1 )
        {
            if(!add_procedure(pro_name,par_num))
            {
                yyerror(pro_name);
            }    
            procedure_flag = 0;
			
			locate_table();
			
			for( int i = par_all_num - par_num; i < par_all_num; i++)
			{
			    //printf("  %s \n",par_list[i].name);
				par_list[i].proc_func_name = pro_name;
				if( par_list[i].is_var )
				{
				    if( !add_reference_parameter(pro_name,par_list[i].name,return_symtype(par_list[i].type)) )
				    {
        	            yyerror(par_list[i].name);
                    }
				}
				else
				{
				    if( !add_parameter(par_list[i].proc_func_name,par_list[i].name,return_symtype(par_list[i].type)) )
				    {
        	            yyerror(par_list[i].name);
                    }
				}
			}
		}

	}
#line 2578 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 861 "parser.y" /* yacc.c:1646  */
    {
        /* subprogram → subprogram_head ; subprogram_body */
        /* 翻译方案 31 */ 
    }
#line 2587 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 868 "parser.y" /* yacc.c:1646  */
    {
        par_num = 0;
    	procedure_flag = 1;
		
		head=(struct id_list*)malloc(sizeof(struct id_list));
        head->next=NULL;
        ppp=(struct id_list*)malloc(sizeof(struct id_list));
        ppp->next=NULL;
    }
#line 2601 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 878 "parser.y" /* yacc.c:1646  */
    {   
		pro_name = (yyvsp[-1]);
		print("void");
        print(" ");
        print((yyvsp[-1]));
        print(" (");
        test_function=(struct id_list*)malloc(sizeof(struct id_list));
        test_function=head->next;
        while(test_function!=NULL)
        {
            par_num++;
			
			print(test_function->type);
            print (" ");
            if(test_function->var_flag==1)
            {
                print("&");
            }
            print(test_function->name);
            if(test_function->next!=NULL)
            {
                print(",");
            }
            test_function=test_function->next;
        }
        print(" )\n");
        /* subprogram_head → procedure id formal_parameter */
        /* 翻译方案 32 */ 
    }
#line 2635 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 909 "parser.y" /* yacc.c:1646  */
    {
        par_num = 0;
        function_flag = 1;
		
		head=(struct id_list*)malloc(sizeof(struct id_list));
        head->next=NULL;
        ppp=(struct id_list*)malloc(sizeof(struct id_list));
        ppp->next=NULL;

    }
#line 2650 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 920 "parser.y" /* yacc.c:1646  */
    {
		func_type = code_get_type((yyvsp[0]));	
		print(code_get_type((yyvsp[0])));
        print(" ");
        print((yyvsp[-3]));
        function_name=(yyvsp[-3]);
        print(" (");
        test_function=(struct id_list*)malloc(sizeof(struct id_list));
        test_function=head->next;
        while(test_function!=NULL)
        {
            par_num++;
			
		    print(test_function->type);
            print (" ");
            if(test_function->var_flag==1)
            {
                print("&");
            }
            print(test_function->name);
            if(test_function->next!=NULL)
            {
                print(",");
            }
            test_function=test_function->next;
        }
        print(" )\n");
        /* subprogram_head → function id formal_parameter : simple_type */ 
        /* 翻译方案 33 */
    }
#line 2685 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 954 "parser.y" /* yacc.c:1646  */
    {
        /* formal_parameter → ( parameter_list ) */
        /* 翻译方案 34 */ 
    }
#line 2694 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 959 "parser.y" /* yacc.c:1646  */
    {
        
        /* formal_parameter → ε */
        /* 翻译方案 35 */
    }
#line 2704 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 967 "parser.y" /* yacc.c:1646  */
    {
        /* parameter_list → parameter_list ; parameter */
        /* 翻译方案 36 */ 
    }
#line 2713 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 973 "parser.y" /* yacc.c:1646  */
    {
        /* parameter_list → parameter */ 
        /* 翻译方案 37 */
    }
#line 2722 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 980 "parser.y" /* yacc.c:1646  */
    {
        /* parameter → var_parameter */ 
        /* 翻译方案 38 */
    }
#line 2731 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 986 "parser.y" /* yacc.c:1646  */
    {
        /* parameter → value_parameter */ 
        /* 翻译方案 39 */
    }
#line 2740 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 991 "parser.y" /* yacc.c:1646  */
    {var_flag=1;}
#line 2746 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 992 "parser.y" /* yacc.c:1646  */
    {
        
        /* var_parameter → var value_parameter */ 
        /* 翻译方案 40 */
    }
#line 2756 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 999 "parser.y" /* yacc.c:1646  */
    {
        function_type[function_id]=code_get_type((yyvsp[0]));
        test=head->next;
        while(test!=NULL)
        {   if(strlen(test->type)==0)
            {
                test->type=function_type[function_id];
                test->var_flag=var_flag;
            }
			
			par_list[par_all_num].name = test->name;
            par_list[par_all_num].type = test->type;
			par_list[par_all_num].is_var = var_flag;
            par_all_num++;
			
            test=test->next;
        }
        function_id++;
        var_flag=0;
        /* value_parameter → function_idlist : simple_type */ 
        /* 翻译方案 41 */
    }
#line 2783 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 1025 "parser.y" /* yacc.c:1646  */
    {
	    relocate_table();
        /* subprogram_body */ 
        /* 翻译方案 42 */
    }
#line 2793 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 1032 "parser.y" /* yacc.c:1646  */
    {
	    print("{\n");
		//locate_table();
	}
#line 2802 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1037 "parser.y" /* yacc.c:1646  */
    {
        print("}\n");
		//relocate_table();
        /* compound_statement → begin statement_list end */
        /* 翻译方案 43 */ 
    }
#line 2813 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 1044 "parser.y" /* yacc.c:1646  */
    {print("int main()\n{\n");}
#line 2819 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 1045 "parser.y" /* yacc.c:1646  */
    {
        print("system(\"pause\");\nreturn 0;");
        /* compound_statement → begin statement_list end */
        /* 翻译方案 43 */ 
    }
#line 2829 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1052 "parser.y" /* yacc.c:1646  */
    {
        /* statement_list → statement_list ; statement */
        /* 翻译方案 44 */ 
    }
#line 2838 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1058 "parser.y" /* yacc.c:1646  */
    {
        /* statement_list → statement */ 
        /* 翻译方案 45 */
    }
#line 2847 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1065 "parser.y" /* yacc.c:1646  */
    {
        if(flag==1)
        {
            flag=0;
        }
        else{
            print("=");
        }
    }
#line 2861 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1074 "parser.y" /* yacc.c:1646  */
    {
		//printf("!!%d",get_type(itemp));
		if(IS_DEFINED(itemp)!=0)
		{
		if(is_const(itemp) == 1)
		{
			yyerror("Constants cannot be assigned");
		}
		if(stack_c[position_c-2] != stack_c[position_c-1])		
			yyerror("The expression type is different from the variable type.");
		position_c = position_c - 2;	
		}
	}
#line 2879 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1087 "parser.y" /* yacc.c:1646  */
    {
        print(";\n");
        /* statement → variable assignop expression */ 
        /* 翻译方案 46 */
    }
#line 2889 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1094 "parser.y" /* yacc.c:1646  */
    {
        /* statement → procedure_call */ 
        /* 翻译方案 47 */
    }
#line 2898 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1100 "parser.y" /* yacc.c:1646  */
    {
        /* statement → compound_statement */ 
        /* 翻译方案 48 */
    }
#line 2907 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1105 "parser.y" /* yacc.c:1646  */
    {print("if(");}
#line 2913 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1106 "parser.y" /* yacc.c:1646  */
    {	
		if((stack_c[position_c-1] != BOOL)&&(stack_c[position_c-1]!=INT))									//if判断语句中的类型必须为BOOL型
		{
			yyerror("The expression type should be BOOL");
		}
		position_c --;
	}
#line 2925 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1113 "parser.y" /* yacc.c:1646  */
    {print(")\n");}
#line 2931 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1113 "parser.y" /* yacc.c:1646  */
    {}
#line 2937 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1114 "parser.y" /* yacc.c:1646  */
    {
        /* statement → if expression then statement else_part */ 
        /* 翻译方案 49 */
    }
#line 2946 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1119 "parser.y" /* yacc.c:1646  */
    {print("for(");}
#line 2952 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1120 "parser.y" /* yacc.c:1646  */
    {	print((yyvsp[0]));print("=");
		if(IS_DEFINED((yyvsp[0]))==0)
		{
			yyerror("This identifier is not defined");
		}
		else if(get_type((yyvsp[0]))!=INT)
		{
			yyerror("The id should be integer");
		}
	}
#line 2967 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1131 "parser.y" /* yacc.c:1646  */
    {	print(";");
		if(stack_c[position_c-1]!=INT)
		{
			yyerror("The expression should be integer");
		}
		position_c--;
	}
#line 2979 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1138 "parser.y" /* yacc.c:1646  */
    {print((yyvsp[-5]));print("<=");}
#line 2985 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1138 "parser.y" /* yacc.c:1646  */
    {print(";");print((yyvsp[-7]));print("++)\n");}
#line 2991 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1139 "parser.y" /* yacc.c:1646  */
    {	if(stack_c[position_c-1]!=INT)
		{
			yyerror("The expression should be integer");
		}
		position_c--;
	
	}
#line 3003 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1147 "parser.y" /* yacc.c:1646  */
    {
        print("\n");
        /* statement → for id assignop expression to expression do statement */ 
        /* 翻译方案 50 */
    }
#line 3013 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1154 "parser.y" /* yacc.c:1646  */
    {
        print("while");
        print("(");
    }
#line 3022 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1159 "parser.y" /* yacc.c:1646  */
    {
		print(")");
		if((stack_c[position_c-1] != BOOL)&&(stack_c[position_c-1]!=INT))
			yyerror("It is expected to be integer");
		position_c=position_c--;
	}
#line 3033 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1166 "parser.y" /* yacc.c:1646  */
    {
        /* while 翻译方案 */
    }
#line 3041 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1170 "parser.y" /* yacc.c:1646  */
    {
        /* statement → ε */
        /* 翻译方案 51 */
    }
#line 3050 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1176 "parser.y" /* yacc.c:1646  */
    {   
        //printf("@%d\n",get_type($1));
		if(strcmp((yyvsp[0]),function_name)==0)
        {
            
            print("return ");
            flag=1;
        }
        else
        {
            
            print((yyvsp[0]));
        }
		if(IS_DEFINED((yyvsp[0]))==0)
		{
				itemp = (yyvsp[0]);
				position_c++;
				yyerror("This identifier is not defined");
				stack_c[position_c-1] = INT;
		}
	    else
	    {
			itemp = (yyvsp[0]);
			position_c++;
			if(get_type((yyvsp[0]))==ARRAY||get_type((yyvsp[0]))==FUNCTION)
				stack_c[position_c-1] = symbol_stack[find_element((yyvsp[0]))].sub_type;
			else
			{
					stack_c[position_c-1] = get_type((yyvsp[0]));
			}
    	//	if( get_type($1) == ARRAY )
    	//	    array_flag = 1;				/*标志为数组*/	
			if(get_type((yyvsp[0])) == ARRAY)
				{
					num_of_arr = get_parameter_number((yyvsp[0]));															//用来获取当前数组的维数并存在num_arr中
				}
		}
		ttemp = (yyvsp[0]);
    }
#line 3094 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1216 "parser.y" /* yacc.c:1646  */
    {
        /* variable → id id_varpart */ 
        /* 翻译方案 52 */
    }
#line 3103 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1221 "parser.y" /* yacc.c:1646  */
    {print("[");into_pf(ttemp);}
#line 3109 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1222 "parser.y" /* yacc.c:1646  */
    {
     print("]");   
		if(dimension==num_of_arr)																				//dimen用来存储exp_list中的维数或者参数个数
		{
			for(num_of_arr = 1;num_of_arr<=dimension;num_of_arr++)
			{
				if(stack_c[position_c-1] != INT)
					yyerror("The factor in the array should be integer");
				position_c--;																				//数组后面的每个都应该是int型
			}
		}
		else 
		{
			yyerror("The dimension of the array is wrong");
			position_c = position_c-dimension;														
		}
		out_pf();
        /* id_varpart → [ expression_list ] */ 
        /* 翻译方案 53 */
    }
#line 3134 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1243 "parser.y" /* yacc.c:1646  */
    {
		if(get_type(ttemp)==ARRAY)
			yyerror("The dimension of the array is wrong");
        /* id_varpart → ε */
        /* 翻译方案 54 */
    }
#line 3145 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1251 "parser.y" /* yacc.c:1646  */
    {
/*        if(strcmp($1,"read")==0)
            {
                print("read");
            }
            else
            {
                if(strcmp($1,"write")==0)
                {
                    print("out");
                }
                else
                {*/
					if(IS_DEFINED((yyvsp[0]))==0)
					{
						yyerror("This identifier is not defined");
					}
					else
                    print((yyvsp[0]));

        print("();\n");
        /* procedure_call → id */ 
        /* 翻译方案 55 */
    }
#line 3174 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1277 "parser.y" /* yacc.c:1646  */
    {
         /*if(strcmp($1,"read")==0)
            {
                print("read");
            }
            else
            {
                if(strcmp($1,"write")==0)
                {
                    print("out");
                }
                else
                {*/
					if(IS_DEFINED((yyvsp[0]))==0)
					{
						yyerror("This identifier is not defined");
					}
					else
						print((yyvsp[0]));
        
    }
#line 3200 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1297 "parser.y" /* yacc.c:1646  */
    {print("(");into_pf(ttemp);}
#line 3206 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1298 "parser.y" /* yacc.c:1646  */
    {
		if(IS_DEFINED((yyvsp[-5]))==1)
		{numa = get_parameter_number((yyvsp[-5]));
		for(int temp_i= dimension;temp_i>0;temp_i--)
		{
			type_of_pf[numa-temp_i] = stack_c[position_c-temp_i];
		}
		if(check_parameter_types((yyvsp[-5]),dimension,type_of_pf)==FAILED)
		{
			yyerror("the wrong arguments to the function");
		}}
		position_c = position_c-dimension;
		out_pf();
        print(");\n");
        /* procedure_call → id ( expression_list ) */ 
        /* 翻译方案 56 */
    }
#line 3228 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1316 "parser.y" /* yacc.c:1646  */
    {print("\nelse\n");}
#line 3234 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1317 "parser.y" /* yacc.c:1646  */
    {
        /* else_part → else statement */ 
        /* 翻译方案 57 */
    }
#line 3243 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1323 "parser.y" /* yacc.c:1646  */
    {
        /* else_part → ε */
        /* 翻译方案 58 */ 
    }
#line 3252 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1329 "parser.y" /* yacc.c:1646  */
    {print(",");}
#line 3258 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1330 "parser.y" /* yacc.c:1646  */
    {
		dimension++;
        /* expression_list → expression_list , expression */
        /* 翻译方案 59 */ 
    }
#line 3268 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1337 "parser.y" /* yacc.c:1646  */
    {
		dimension++;
        /* expression_list → expression */ 
        /* 翻译方案 60 */
    }
#line 3278 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1345 "parser.y" /* yacc.c:1646  */
    {
        print((yyvsp[0]));
        if(strcmp((yyvsp[0]),"=")==0)
        {
            print("=");
        }
    }
#line 3290 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1353 "parser.y" /* yacc.c:1646  */
    {
		if(stack_c[position_c-1]==STRING)
		{
			yyerror("STRING is not expected here");
		}
		else
		{
		if(stack_c[position_c-1]!=stack_c[position_c-2])																					//在分析栈中，栈顶的前两个元素类型必须一样才能比较
		{
			yyerror("The expression type should be the same on both sides.");
		}
		}
		position_c --;
		stack_c[position_c-1] = BOOL;
        /* expression → simple_expression relop simple_expression */ 
        /* 翻译方案 61 */
    }
#line 3312 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1372 "parser.y" /* yacc.c:1646  */
    {
        /* expression → simple_expression */ 
        /* 翻译方案 62 */
    }
#line 3321 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1377 "parser.y" /* yacc.c:1646  */
    {print((yyvsp[0]));}
#line 3327 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1378 "parser.y" /* yacc.c:1646  */
    {
		if(strcmp((yyvsp[-2]),"+")==0||strcmp((yyvsp[-2]),"-")==0)														//加法和减法运算进行类型的获取及存储
		{
			if(((stack_c[position_c-2] == INT)&&(stack_c[position_c-1] == FLOAT))||((stack_c[position_c-2] == FLOAT)&&(stack_c[position_c-1] == FLOAT))||((stack_c[position_c-2] == FLOAT)&&(stack_c[position_c-1] == INT)))
			{	
				position_c = position_c -1;
				stack_c[position_c-1]=FLOAT;
			}
			else if((stack_c[position_c-2] == INT) && (stack_c[position_c-1] == INT)) 
			{	
				position_c = position_c -1;
				stack_c[position_c-1]=INT;
			}
			else	
				{	
					yyerror("The addop is wrong");
					position_c--;
				}
		}
		else																										//and运算的类型获取及存储
		{
			if((stack_c[position_c-2] == BOOL)&&(stack_c[position_c-1] == BOOL))
				{
					position_c = position_c -1;
					stack_c[position_c-1] = BOOL;
				}
			else
				{
					yyerror("The addop is wrong");
					position_c--;}
		}	
        /* simple_expression → simple_expression addop term */
        /* 翻译方案 63 */ 
    }
#line 3366 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1414 "parser.y" /* yacc.c:1646  */
    {
        /* simple_expression → term */ 
        /* 翻译方案 64 */
    }
#line 3375 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1419 "parser.y" /* yacc.c:1646  */
    {print((yyvsp[0]));}
#line 3381 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1420 "parser.y" /* yacc.c:1646  */
    {
		if((strcmp((yyvsp[-2]),"*")==0)||(strcmp((yyvsp[-2]),"/")==0))													//乘法和除法的类型获取及存储
		{
			if((stack_c[position_c-1] == INT)&&(stack_c[position_c-2] == INT))
			{	
				position_c --;
				stack_c[position_c-1] = INT;
			}
			else if(((stack_c[position_c-1] == INT)&&(stack_c[position_c-2] == FLOAT))||((stack_c[position_c-1] == FLOAT)&&(stack_c[position_c-2] == FLOAT))||((stack_c[position_c-1] == FLOAT)&&(stack_c[position_c-2] == INT)))
			{
				position_c --;
				stack_c[position_c-1] = FLOAT;
			}
		else 
			yyerror("The mulop is wrong");
		}
	
		else if((strcmp((yyvsp[-2]),"div")==0)||(strcmp((yyvsp[-2]),"%")==0))												//整除和取余的类型获取及存储
		{
			if(((stack_c[position_c-1] == INT)&&(stack_c[position_c-2] == INT))||((stack_c[position_c-1] == INT)&&(stack_c[position_c-2] == FLOAT))||((stack_c[position_c-1] == FLOAT)&&(stack_c[position_c-2] == FLOAT))||((stack_c[position_c-1] == FLOAT)&&(stack_c[position_c-2] == INT)))
			{
				position_c --;
				stack_c[position_c-1] = INT;
			}
			else 
				yyerror("The mulop is wrong");
		}
		else																											//or的类型获取及存储
		{
			if((stack_c[position_c-1] == BOOL)&&(stack_c[position_c-2] == BOOL))
			{
				position_c--;
				stack_c[position_c-1] = BOOL;
			}
			else
			yyerror("The mulop is wrong");
		}
        /* term → term mulop factor */ 
        /* 翻译方案 65 */
    }
#line 3426 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1462 "parser.y" /* yacc.c:1646  */
    {
        /* term → factor */ 
        /* 翻译方案 66 */
    }
#line 3435 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1468 "parser.y" /* yacc.c:1646  */
    {  
        print((yyvsp[0]));
		position_c++;
        if(return_symtype(get_num_type((yyvsp[0]))) == INT)
			stack_c[position_c-1] = INT;
		if(return_symtype(get_num_type((yyvsp[0]))) == FLOAT)
			stack_c[position_c-1] = FLOAT;
        /* factor → num */ 
        /* 翻译方案 67 */
    }
#line 3450 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1480 "parser.y" /* yacc.c:1646  */
    {
        /* 字符串翻译方案 */
    }
#line 3458 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1485 "parser.y" /* yacc.c:1646  */
    {
        /* factor → variable */ 
        /* 翻译方案 68 */
    }
#line 3467 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1490 "parser.y" /* yacc.c:1646  */
    {print((yyvsp[0]));}
#line 3473 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1491 "parser.y" /* yacc.c:1646  */
    {
		if(IS_DEFINED((yyvsp[-1]))==1)
		{
			if(get_type((yyvsp[-1]))!=FUNCTION)
				yyerror("It is expected to be FUNCTION");
			position_c ++;
			stack_c[position_c-1] = get_return_type((yyvsp[-1]));
		}
		else	
			yyerror("This identifier is not defined");
	}
#line 3489 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1502 "parser.y" /* yacc.c:1646  */
    {print("(");into_pf((yyvsp[-3]));}
#line 3495 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1503 "parser.y" /* yacc.c:1646  */
    {
		if(IS_DEFINED((yyvsp[-6]))==1)
		{
			numa = get_parameter_number((yyvsp[-6]));
			for(int aa = dimension;aa>0;aa--)
			{
				type_of_pf[numa-aa] = stack_c[position_c-aa];
			}
			if(check_parameter_types((yyvsp[-6]),dimension,type_of_pf)==FAILED)
				yyerror("the wrong arguments to the function");
		}
		position_c = position_c-dimension;
		out_pf();
        print(")");
        /* factor → id ( expression_list ) */ 
        /* 翻译方案 69 */
    }
#line 3517 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1521 "parser.y" /* yacc.c:1646  */
    {print("(");}
#line 3523 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1521 "parser.y" /* yacc.c:1646  */
    {print(")");}
#line 3529 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1522 "parser.y" /* yacc.c:1646  */
    {
        /* factor → ( expression_list ) */ 
        /* 翻译方案 70 */
    }
#line 3538 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1528 "parser.y" /* yacc.c:1646  */
    {
        print("!");
        print((yyvsp[-1]));
        /* factor → not factor */ 
        /* 翻译方案 71 */
    }
#line 3549 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1536 "parser.y" /* yacc.c:1646  */
    {
        print("-");
        print((yyvsp[-1]));
        /* factor → uminus factor */ 
        /* 翻译方案 72 */
    }
#line 3560 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1543 "parser.y" /* yacc.c:1646  */
    {print("]");}
#line 3566 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1543 "parser.y" /* yacc.c:1646  */
    {print("[");}
#line 3572 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1544 "parser.y" /* yacc.c:1646  */
    {
        //print("]");
		dimension++;
        /* expression_list → expression_list , expression */
        /* 翻译方案 59 */ 
    }
#line 3583 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1552 "parser.y" /* yacc.c:1646  */
    {
		dimension++;
        /* expression_list → expression */ 
        /* 翻译方案 60 */
    }
#line 3593 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1559 "parser.y" /* yacc.c:1646  */
    {
        /* expression → simple_expression */ 
        /* 翻译方案 62 */
    }
#line 3602 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1564 "parser.y" /* yacc.c:1646  */
    {print((yyvsp[0]));}
#line 3608 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1565 "parser.y" /* yacc.c:1646  */
    {
		if(strcmp((yyvsp[-2]),"+")==0||strcmp((yyvsp[-2]),"-")==0)														//加法和减法运算进行类型的获取及存储
		{
			if((stack_c[position_c-2] == INT) && (stack_c[position_c-1] == INT)) 
			{	
				position_c = position_c -1;
				stack_c[position_c-1]=INT;
			}
			else	
				{	
					yyerror("It is expected to be a integer");
					position_c--;}
		}

		else
			{
				yyerror("It is expected to be a integer");
				position_c--;
			}
        /* simple_expression → simple_expression addop term */
        /* 翻译方案 63 */ 
    }
#line 3635 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1589 "parser.y" /* yacc.c:1646  */
    {
        /* simple_expression → term */ 
        /* 翻译方案 64 */
    }
#line 3644 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1594 "parser.y" /* yacc.c:1646  */
    {print((yyvsp[0]));}
#line 3650 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1595 "parser.y" /* yacc.c:1646  */
    {
		if((strcmp((yyvsp[-2]),"*")==0)||(strcmp((yyvsp[-2]),"/")==0))													//乘法和除法的类型获取及存储
		{
			if((stack_c[position_c-1] == INT)&&(stack_c[position_c-2] == INT))
			{	
				position_c --;
				stack_c[position_c-1] = INT;
			}

			else 
			yyerror("It is expected to be a integer");
		}
	
		else if((strcmp((yyvsp[-2]),"OPR_div")==0)||(strcmp((yyvsp[-2]),"%")==0))												//整除和取余的类型获取及存储
		{
			if(((stack_c[position_c-1] == INT)&&(stack_c[position_c-2] == INT))||((stack_c[position_c-1] == INT)&&(stack_c[position_c-2] == FLOAT))||((stack_c[position_c-1] == FLOAT)&&(stack_c[position_c-2] == FLOAT))||((stack_c[position_c-1] == FLOAT)&&(stack_c[position_c-2] == INT)))
			{
				position_c --;
				stack_c[position_c-1] = INT;
			}
			else 
				yyerror("It is expected to be a integer");
		}
		else																											//or的类型获取及存储
		{
			yyerror("It is expected to be a integer");
		}
        /* term → term mulop factor */ 
        /* 翻译方案 65 */
    }
#line 3685 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1627 "parser.y" /* yacc.c:1646  */
    {
        /* term → factor */ 
        /* 翻译方案 66 */
    }
#line 3694 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1633 "parser.y" /* yacc.c:1646  */
    {  
        print((yyvsp[0]));
		position_c++;
        if(return_symtype(get_num_type((yyvsp[0]))) == INT)
			stack_c[position_c-1] = INT;
		if(return_symtype(get_num_type((yyvsp[0]))) == FLOAT)
			stack_c[position_c-1] = FLOAT;
        
        /* factor → num */ 
        /* 翻译方案 67 */
    }
#line 3710 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1646 "parser.y" /* yacc.c:1646  */
    {
        
        /* factor → variable */ 
        /* 翻译方案 68 */
    }
#line 3720 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1652 "parser.y" /* yacc.c:1646  */
    {print((yyvsp[0]));}
#line 3726 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1653 "parser.y" /* yacc.c:1646  */
    {
		if(IS_DEFINED((yyvsp[-1]))==1)
		{
			if(get_type((yyvsp[-1]))!=FUNCTION)
				yyerror("It is expected to be FUNCTION");
			position_c ++;
			stack_c[position_c-1] = get_return_type((yyvsp[-1]));
		}
		else	
			yyerror("This identifier is not defined");
	}
#line 3742 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1664 "parser.y" /* yacc.c:1646  */
    {print("(");into_pf((yyvsp[-3]));}
#line 3748 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1665 "parser.y" /* yacc.c:1646  */
    {
		if(IS_DEFINED((yyvsp[-6]))==1)
		{
			numa = get_parameter_number((yyvsp[-6]));
			for(int aa = dimension;aa>0;aa--)
			{
				type_of_pf[numa-aa] = stack_c[position_c-aa];
			}
			check_parameter_types((yyvsp[-6]),dimension,type_of_pf);
		}
		position_c = position_c-dimension;
		out_pf();
        print(")");   
        /* factor → id ( expression_list ) */ 
        /* 翻译方案 69 */
    }
#line 3769 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1682 "parser.y" /* yacc.c:1646  */
    {print("(");}
#line 3775 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1682 "parser.y" /* yacc.c:1646  */
    {print(")");}
#line 3781 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1683 "parser.y" /* yacc.c:1646  */
    {
        /* factor → ( expression_list ) */ 
        /* 翻译方案 70 */
    }
#line 3790 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1689 "parser.y" /* yacc.c:1646  */
    {
        print("!");
        print((yyvsp[-1])); 
        /* factor → not factor */ 
        /* 翻译方案 71 */
    }
#line 3801 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1697 "parser.y" /* yacc.c:1646  */
    {
        print("-");
        print((yyvsp[-1]));
        /* factor → uminus factor */ 
        /* 翻译方案 72 */
    }
#line 3812 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1705 "parser.y" /* yacc.c:1646  */
    {
        if(strlen((yyvsp[0]))==3)
        {           
			if(!const_flag)
			{
			    print((yyvsp[0]));
				position_c++;
			    stack_c[position_c-1] = CHAR;
			}
			const_type = "char";
        }
        else
        {
			const_type = "string";
			if(!const_flag)
			{
			    position_c++;
				stack_c[position_c-1] = STRING;
			
				s=(char*)malloc(sizeof(char)*100);
				print("\"");
				int a=strlen((yyvsp[0]))-2;
				strncpy(s,((yyvsp[0]))+1,a);     
                s[a]='\0'; 
				print(s);
				print("\"");
				free(s);
			}
        }
        /* str -> string */
    }
#line 3848 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 3852 "parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1749 "parser.y" /* yacc.c:1906  */

