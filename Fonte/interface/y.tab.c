/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "interface/yacc.y" /* yacc.c:339  */

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#ifndef FMACROS
   #include "../macros.h"
#endif
#ifndef FTYPES
   #include "../types.h"
#endif
#ifndef FMISC
   #include "../misc.h"
#endif
#ifndef FDICTIONARY
   #include "../dictionary.h"
#endif
#ifndef FSQLCOMMANDS
   #include "../sqlcommands.h"
#endif
#ifndef FDATABASE
   #include "../database.h"
#endif
#ifndef FPARSER
   #include "parser.h"
#endif

extern char* yytext[];
extern FILE * yyin;
extern FILE* outFile_p;

int yywrap() {
    return 1;
}


#line 103 "interface/y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_INTERFACE_Y_TAB_H_INCLUDED
# define YY_YY_INTERFACE_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INSERT = 258,
    INTO = 259,
    VALUES = 260,
    SELECT = 261,
    FROM = 262,
    CREATE = 263,
    TABLE = 264,
    INTEGER = 265,
    VARCHAR = 266,
    DOUBLE = 267,
    CHAR = 268,
    PRIMARY = 269,
    KEY = 270,
    REFERENCES = 271,
    DATABASE = 272,
    DROP = 273,
    OBJECT = 274,
    NUMBER = 275,
    VALUE = 276,
    QUIT = 277,
    LIST_TABLES = 278,
    LIST_TABLE = 279,
    CONNECT = 280,
    HELP = 281,
    LIST_DBASES = 282,
    CLEAR = 283,
    CONTR = 284,
    WHERE = 285,
    OPERADOR = 286,
    RELACIONAL = 287,
    LOGICO = 288,
    ASTERISCO = 289,
    SINAL = 290,
    FECHA_P = 291,
    ABRE_P = 292,
    STRING = 293
  };
#endif
/* Tokens.  */
#define INSERT 258
#define INTO 259
#define VALUES 260
#define SELECT 261
#define FROM 262
#define CREATE 263
#define TABLE 264
#define INTEGER 265
#define VARCHAR 266
#define DOUBLE 267
#define CHAR 268
#define PRIMARY 269
#define KEY 270
#define REFERENCES 271
#define DATABASE 272
#define DROP 273
#define OBJECT 274
#define NUMBER 275
#define VALUE 276
#define QUIT 277
#define LIST_TABLES 278
#define LIST_TABLE 279
#define CONNECT 280
#define HELP 281
#define LIST_DBASES 282
#define CLEAR 283
#define CONTR 284
#define WHERE 285
#define OPERADOR 286
#define RELACIONAL 287
#define LOGICO 288
#define ASTERISCO 289
#define SINAL 290
#define FECHA_P 291
#define ABRE_P 292
#define STRING 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 38 "interface/yacc.y" /* yacc.c:355  */

    int intval;
    double floatval;
    int subtok;
    char *strval;

#line 226 "interface/y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_INTERFACE_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 241 "interface/y.tab.c" /* yacc.c:358  */

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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  40
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   109

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  167

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

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
       2,     2,     2,    42,    40,    41,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    39,
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
      35,    36,    37,    38
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    54,    54,    54,    54,    54,    54,    54,    55,    55,
      55,    55,    55,    56,    56,    56,    56,    57,    57,    64,
      66,    69,    71,    73,    75,    78,    88,    98,   105,   108,
     115,   115,   125,   127,   129,   129,   131,   131,   133,   135,
     135,   137,   138,   139,   142,   142,   147,   147,   149,   150,
     150,   150,   151,   152,   154,   156,   157,   158,   160,   162,
     165,   165,   165,   168,   168,   168,   171,   171,   171,   174,
     174,   177,   179,   180,   180,   181,   181,   183,   184,   184,
     186,   187,   189,   190,   190,   192,   194,   195,   195,   197,
     197,   199,   200,   201,   201,   202,   202,   204,   205,   207,
     208,   209,   211,   211,   213,   213,   214,   214
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INSERT", "INTO", "VALUES", "SELECT",
  "FROM", "CREATE", "TABLE", "INTEGER", "VARCHAR", "DOUBLE", "CHAR",
  "PRIMARY", "KEY", "REFERENCES", "DATABASE", "DROP", "OBJECT", "NUMBER",
  "VALUE", "QUIT", "LIST_TABLES", "LIST_TABLE", "CONNECT", "HELP",
  "LIST_DBASES", "CLEAR", "CONTR", "WHERE", "OPERADOR", "RELACIONAL",
  "LOGICO", "ASTERISCO", "SINAL", "FECHA_P", "ABRE_P", "STRING", "';'",
  "','", "'-'", "'+'", "$accept", "start", "connection", "qualquer_coisa",
  "exit_program", "clear", "parentesis_open", "parentesis_close",
  "table_attr", "list_tables", "list_databases", "help_pls",
  "contributors", "insert", "$@1", "semicolon", "table", "opt_column_list",
  "column_list", "column", "value_list", "value", "create_table", "$@2",
  "table_column_attr", "type", "$@3", "$@4", "column_create", "attribute",
  "table_fk", "column_fk", "drop_table", "$@5", "$@6", "create_database",
  "$@7", "$@8", "drop_database", "$@9", "$@10", "select", "$@11",
  "table_select", "projecao", "$@12", "$@13", "projecao2", "$@14", "where",
  "logicos", "$@15", "adc_abre_p", "repLogicos", "$@16", "relacoes",
  "$@17", "operacao", "$@18", "$@19", "operacao2", "operador", "sinal",
  "operando", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,    59,
      44,    45,    43
};
# endif

#define YYPACT_NINF -109

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-109)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       5,    10,  -109,     0,    29,  -109,  -109,  -109,    -3,     3,
    -109,  -109,  -109,  -109,  -109,    25,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,    34,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,     7,  -109,  -109,    30,    50,     7,    48,    60,    61,
    -109,    32,    41,  -109,    64,    32,  -109,  -109,  -109,  -109,
      65,    80,    67,  -109,    41,  -109,    57,    69,    51,    51,
      51,  -109,    53,    52,    32,  -109,    55,    22,    51,  -109,
      53,    62,  -109,  -109,  -109,  -109,  -109,    65,    -2,    41,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,    22,
      63,    66,    56,    24,  -109,    51,  -109,  -109,  -109,  -109,
      38,  -109,  -109,  -109,  -109,    53,    54,  -109,    24,    59,
      66,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,    22,
    -109,  -109,    32,    78,    81,    68,    51,    -2,  -109,  -109,
      70,    22,    22,    22,  -109,    77,  -109,  -109,    72,    69,
    -109,  -109,    63,    24,  -109,  -109,  -109,  -109,    82,  -109,
    -109,  -109,    53,  -109,    71,  -109,  -109
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      18,     0,    69,     0,     0,    20,    21,    26,     0,     0,
      28,    27,    22,    29,    32,     0,    10,    17,    11,    15,
       8,     9,    14,    13,    16,     2,    12,     4,     6,     5,
       7,     3,    30,     0,    44,    63,    60,    66,    25,    19,
       1,     0,    73,    72,     0,     0,     0,     0,     0,     0,
      33,    34,    77,    75,     0,     0,    64,    61,    67,    23,
       0,     0,     0,    74,    77,    71,    80,     0,     0,     0,
       0,    38,     0,    36,     0,    78,     0,     0,     0,    54,
       0,     0,    65,    62,    68,    24,    35,     0,     0,    77,
      76,    93,   107,   106,    85,    91,   102,   103,    81,     0,
      86,     0,     0,    97,    70,     0,    48,    49,    52,    53,
      55,    37,    42,    41,    43,     0,    39,    79,    97,     0,
      95,    87,    82,    89,   105,   104,   100,    99,    92,     0,
     101,    45,     0,     0,     0,    46,     0,     0,    94,    83,
       0,     0,     0,     0,    98,     0,    56,    58,     0,     0,
      31,    40,    86,    97,    88,    90,    95,    50,     0,    47,
      84,    96,     0,    59,     0,    51,    57
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -109,  -109,  -109,  -109,  -109,  -109,   -54,   -80,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,   -66,    58,  -109,    12,  -109,
     -35,  -109,  -109,  -109,   -46,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,   -49,  -109,  -109,
     -94,  -109,   -81,   -47,  -109,  -109,  -109,   -92,  -109,  -109,
    -108,  -109,   -97,  -109
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    18,    19,    60,    86,    20,    21,
      22,    23,    24,    25,    41,    26,    51,    61,    72,    73,
     115,   116,    27,    46,    80,   110,   132,   162,    81,   135,
     148,   164,    28,    48,    69,    29,    47,    68,    30,    49,
      70,    31,    33,    66,    45,    52,    64,    63,    89,    78,
      98,   152,    99,   122,   141,   100,   142,   101,   118,   140,
     128,   129,   102,   103
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     105,    67,    82,    83,    84,   119,   130,   120,     1,    34,
     138,     2,   104,     3,    32,    76,    38,    35,   112,   113,
      88,   130,    39,     4,     5,    40,    50,     6,     7,     8,
       9,    10,    11,    12,    13,   136,   114,   144,    36,   131,
     117,    91,    92,    93,    14,   161,    37,   154,   143,    53,
     155,   156,   133,    42,   134,   126,   130,    54,   127,    94,
      95,   143,   143,    96,    97,    96,    97,    56,    43,    59,
     150,    44,   106,   107,   108,   109,   124,   125,   145,    57,
      58,    62,   165,    65,    71,    74,    75,    77,    79,    85,
      14,    90,    87,   146,   137,   139,   121,   157,   123,   111,
     147,   163,   151,   159,    55,   160,   153,   166,   149,   158
};

static const yytype_uint8 yycheck[] =
{
      80,    55,    68,    69,    70,    99,   103,    99,     3,     9,
     118,     6,    78,     8,     4,    64,    19,    17,    20,    21,
      74,   118,    19,    18,    19,     0,    19,    22,    23,    24,
      25,    26,    27,    28,    29,   115,    38,   129,     9,   105,
      89,    19,    20,    21,    39,   153,    17,   141,   129,    19,
     142,   143,    14,    19,    16,    31,   153,     7,    34,    37,
      38,   142,   143,    41,    42,    41,    42,    19,    34,    37,
     136,    37,    10,    11,    12,    13,    20,    21,   132,    19,
      19,    40,   162,    19,    19,     5,    19,    30,    19,    36,
      39,    36,    40,    15,    40,    36,    33,    20,    32,    87,
      19,    19,   137,   149,    46,   152,    36,    36,    40,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     8,    18,    19,    22,    23,    24,    25,
      26,    27,    28,    29,    39,    44,    45,    46,    47,    48,
      51,    52,    53,    54,    55,    56,    58,    65,    75,    78,
      81,    84,     4,    85,     9,    17,     9,    17,    19,    19,
       0,    57,    19,    34,    37,    87,    66,    79,    76,    82,
      19,    59,    88,    19,     7,    59,    19,    19,    19,    37,
      49,    60,    40,    90,    89,    19,    86,    49,    80,    77,
      83,    19,    61,    62,     5,    19,    90,    30,    92,    19,
      67,    71,    58,    58,    58,    36,    50,    40,    49,    91,
      36,    19,    20,    21,    37,    38,    41,    42,    93,    95,
      98,   100,   105,   106,    58,    50,    10,    11,    12,    13,
      68,    61,    20,    21,    38,    63,    64,    90,   101,    93,
     100,    33,    96,    32,    20,    21,    31,    34,   103,   104,
     105,    58,    69,    14,    16,    72,    50,    40,   103,    36,
     102,    97,    99,    95,   100,    49,    15,    19,    73,    40,
      58,    63,    94,    36,    93,   100,   100,    20,    37,    67,
      96,   103,    70,    19,    74,    50,    36
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      57,    56,    58,    59,    60,    60,    61,    61,    62,    63,
      63,    64,    64,    64,    66,    65,    67,    67,    68,    69,
      70,    68,    68,    68,    71,    72,    72,    72,    73,    74,
      76,    77,    75,    79,    80,    78,    82,    83,    81,    85,
      84,    86,    87,    88,    87,    89,    87,    90,    91,    90,
      92,    92,    93,    94,    93,    95,    96,    97,    96,    99,
      98,   100,   100,   101,   100,   102,   100,   103,   103,   104,
     104,   104,   105,   105,   106,   106,   106,   106
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       0,    10,     1,     1,     0,     3,     1,     3,     1,     1,
       3,     1,     1,     1,     0,     8,     3,     5,     1,     0,
       0,     6,     1,     1,     1,     0,     2,     5,     1,     1,
       0,     0,     6,     0,     0,     6,     0,     0,     6,     0,
       7,     1,     1,     0,     3,     0,     5,     0,     0,     4,
       0,     2,     2,     0,     5,     1,     0,     0,     3,     0,
       4,     1,     2,     0,     3,     0,     5,     0,     2,     1,
       1,     1,     1,     1,     2,     2,     1,     1
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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 12:
#line 55 "interface/yacc.y" /* yacc.c:1646  */
    {GLOBAL_PARSER.consoleFlag = 1; return 0;}
#line 1440 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 64 "interface/yacc.y" /* yacc.c:1646  */
    {connect(*yytext); GLOBAL_PARSER.consoleFlag = 1; return 0;}
#line 1446 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 66 "interface/yacc.y" /* yacc.c:1646  */
    {GLOBAL_PARSER.consoleFlag = 1; GLOBAL_PARSER.noerror = 0; return 0;}
#line 1452 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 69 "interface/yacc.y" /* yacc.c:1646  */
    {exit(0);}
#line 1458 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 71 "interface/yacc.y" /* yacc.c:1646  */
    {clear(); GLOBAL_PARSER.consoleFlag = 1; return 0;}
#line 1464 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 73 "interface/yacc.y" /* yacc.c:1646  */
    {GLOBAL_PARSER.parentesis++;}
#line 1470 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 75 "interface/yacc.y" /* yacc.c:1646  */
    {GLOBAL_PARSER.parentesis--;}
#line 1476 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 78 "interface/yacc.y" /* yacc.c:1646  */
    {
    if(connected.conn_active) {
        printTable(yylval.strval);
        GLOBAL_PARSER.consoleFlag = 1;
    } else
        notConnected();
    return 0;
}
#line 1489 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 88 "interface/yacc.y" /* yacc.c:1646  */
    {
    if(connected.conn_active) {
        printTable(NULL);
        GLOBAL_PARSER.consoleFlag = 1;
    } else
        notConnected();
    return 0;
}
#line 1502 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 98 "interface/yacc.y" /* yacc.c:1646  */
    {
    showDB();
    GLOBAL_PARSER.consoleFlag = 1;
    return 0;
}
#line 1512 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 105 "interface/yacc.y" /* yacc.c:1646  */
    {help(); GLOBAL_PARSER.consoleFlag = 1; return 0;}
#line 1518 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 108 "interface/yacc.y" /* yacc.c:1646  */
    {contr(); GLOBAL_PARSER.consoleFlag = 1; return 0;}
#line 1524 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 115 "interface/yacc.y" /* yacc.c:1646  */
    {setMode(OP_INSERT);}
#line 1530 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 115 "interface/yacc.y" /* yacc.c:1646  */
    {
    if (GLOBAL_PARSER.col_count == GLOBAL_PARSER.val_count || GLOBAL_DATA.columnName == NULL)
        GLOBAL_DATA.N = GLOBAL_PARSER.val_count;
    else {
        printf("ERROR: The column counter doesn't match the value counter.\n");
        GLOBAL_PARSER.noerror=0;
    }
    return 0;
}
#line 1544 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 127 "interface/yacc.y" /* yacc.c:1646  */
    {setObjName(yytext);}
#line 1550 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 133 "interface/yacc.y" /* yacc.c:1646  */
    {setColumnInsert(yytext);}
#line 1556 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 137 "interface/yacc.y" /* yacc.c:1646  */
    {setValueInsert(yylval.strval, 'D');}
#line 1562 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 138 "interface/yacc.y" /* yacc.c:1646  */
    {setValueInsert(yylval.strval, 'I');}
#line 1568 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 139 "interface/yacc.y" /* yacc.c:1646  */
    {setValueInsert(yylval.strval, 'S');}
#line 1574 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 142 "interface/yacc.y" /* yacc.c:1646  */
    {setMode(OP_CREATE_TABLE);}
#line 1580 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 142 "interface/yacc.y" /* yacc.c:1646  */
    {
    GLOBAL_DATA.N = GLOBAL_PARSER.col_count;
    return 0;
}
#line 1589 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 149 "interface/yacc.y" /* yacc.c:1646  */
    {setColumnTypeCreate('I');}
#line 1595 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 150 "interface/yacc.y" /* yacc.c:1646  */
    {setColumnTypeCreate('S');}
#line 1601 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 150 "interface/yacc.y" /* yacc.c:1646  */
    {setColumnSizeCreate(yylval.strval);}
#line 1607 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 151 "interface/yacc.y" /* yacc.c:1646  */
    {setColumnTypeCreate('D');}
#line 1613 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 152 "interface/yacc.y" /* yacc.c:1646  */
    {setColumnTypeCreate('C');}
#line 1619 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 154 "interface/yacc.y" /* yacc.c:1646  */
    {setColumnCreate(yytext);}
#line 1625 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 157 "interface/yacc.y" /* yacc.c:1646  */
    {setColumnPKCreate();}
#line 1631 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 160 "interface/yacc.y" /* yacc.c:1646  */
    {setColumnFKTableCreate(yytext);}
#line 1637 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 162 "interface/yacc.y" /* yacc.c:1646  */
    {setColumnFKColumnCreate(yytext);}
#line 1643 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 165 "interface/yacc.y" /* yacc.c:1646  */
    {setMode(OP_DROP_TABLE);}
#line 1649 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 165 "interface/yacc.y" /* yacc.c:1646  */
    {setObjName(yytext);}
#line 1655 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 165 "interface/yacc.y" /* yacc.c:1646  */
    {return 0;}
#line 1661 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 168 "interface/yacc.y" /* yacc.c:1646  */
    {setMode(OP_CREATE_DATABASE);}
#line 1667 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 168 "interface/yacc.y" /* yacc.c:1646  */
    {setObjName(yytext);}
#line 1673 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 168 "interface/yacc.y" /* yacc.c:1646  */
    {return 0;}
#line 1679 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 171 "interface/yacc.y" /* yacc.c:1646  */
    {setMode(OP_DROP_DATABASE);}
#line 1685 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 171 "interface/yacc.y" /* yacc.c:1646  */
    {setObjName(yytext);}
#line 1691 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 171 "interface/yacc.y" /* yacc.c:1646  */
    {return 0;}
#line 1697 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 174 "interface/yacc.y" /* yacc.c:1646  */
    {setMode(OP_SELECT); resetSelect();}
#line 1703 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 175 "interface/yacc.y" /* yacc.c:1646  */
    {return 0;}
#line 1709 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 177 "interface/yacc.y" /* yacc.c:1646  */
    {adcTabelaSelect(yylval.strval);}
#line 1715 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 179 "interface/yacc.y" /* yacc.c:1646  */
    {adcProjSelect(yylval.strval);}
#line 1721 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 180 "interface/yacc.y" /* yacc.c:1646  */
    {adcProjSelect(yylval.strval);}
#line 1727 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 181 "interface/yacc.y" /* yacc.c:1646  */
    {adcProjSelect(yylval.strval);}
#line 1733 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 184 "interface/yacc.y" /* yacc.c:1646  */
    {adcProjSelect(yylval.strval);}
#line 1739 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 190 "interface/yacc.y" /* yacc.c:1646  */
    {adcTokenWhere(yylval.strval,6);}
#line 1745 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 192 "interface/yacc.y" /* yacc.c:1646  */
    {adcTokenWhere(yylval.strval,5);}
#line 1751 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 195 "interface/yacc.y" /* yacc.c:1646  */
    {adcTokenWhere(*yytext,1);}
#line 1757 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 197 "interface/yacc.y" /* yacc.c:1646  */
    {adcTokenWhere(yylval.strval,2);}
#line 1763 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 199 "interface/yacc.y" /* yacc.c:1646  */
    {adcTokenWhere(yylval.strval,7);}
#line 1769 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 201 "interface/yacc.y" /* yacc.c:1646  */
    {adcTokenWhere(yylval.strval,8);}
#line 1775 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 202 "interface/yacc.y" /* yacc.c:1646  */
    {adcTokenWhere(yylval.strval,6);}
#line 1781 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 207 "interface/yacc.y" /* yacc.c:1646  */
    {adcTokenWhere(yylval.strval,4);}
#line 1787 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 208 "interface/yacc.y" /* yacc.c:1646  */
    {adcTokenWhere(yylval.strval,4);}
#line 1793 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 211 "interface/yacc.y" /* yacc.c:1646  */
    {adcTokenWhere(*yytext,3);}
#line 1799 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 211 "interface/yacc.y" /* yacc.c:1646  */
    {adcTokenWhere(*yytext,3);}
#line 1805 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 213 "interface/yacc.y" /* yacc.c:1646  */
    {adcTokenWhere(yylval.strval,9);}
#line 1811 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 213 "interface/yacc.y" /* yacc.c:1646  */
    {adcTokenWhere(yylval.strval,9);}
#line 1817 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 214 "interface/yacc.y" /* yacc.c:1646  */
    {adcTokenWhere(yylval.strval,9);}
#line 1823 "interface/y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 214 "interface/yacc.y" /* yacc.c:1646  */
    {adcTokenWhere(yylval.strval,9);}
#line 1829 "interface/y.tab.c" /* yacc.c:1646  */
    break;


#line 1833 "interface/y.tab.c" /* yacc.c:1646  */
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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
#line 216 "interface/yacc.y" /* yacc.c:1906  */

