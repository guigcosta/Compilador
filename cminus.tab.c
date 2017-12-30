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
#line 6 "cminus.y" /* yacc.c:339  */

#define YYPARSER /* distinguishes Yacc output from other code files */

#include "globals.h"
#include "util.h"
#include "scan.h"
#include "parse.h"

#define YYSTYPE TreeNode *
static char * savedName; /* for use in assignments */
static int savedLineNo;  /* ditto */
static TreeNode * savedTree; /* stores syntax tree for later return */
static int yylex(void);
static char * savedFunName = "Global";
static int flagFun = 0;
static int flagType = 0;


#line 85 "cminus.tab.c" /* yacc.c:339  */

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
   by #include "cminus.tab.h".  */
#ifndef YY_YY_CMINUS_TAB_H_INCLUDED
# define YY_YY_CMINUS_TAB_H_INCLUDED
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
    IF = 258,
    WHILE = 259,
    ELSE = 260,
    RETURN = 261,
    INT = 262,
    VOID = 263,
    PLUS = 264,
    MINUS = 265,
    TIMES = 266,
    OVER = 267,
    LT = 268,
    LTIGUAL = 269,
    MT = 270,
    MTIGUAL = 271,
    EQ = 272,
    DIFFERENT = 273,
    ASSIGN = 274,
    LPAREN = 275,
    RPAREN = 276,
    LCOLCHETE = 277,
    RCOLCHETE = 278,
    LCHAVE = 279,
    RCHAVE = 280,
    SEMI = 281,
    COMA = 282,
    ERROR = 283,
    NUM = 284,
    ID = 285
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CMINUS_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 167 "cminus.tab.c" /* yacc.c:358  */

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   112

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  114

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    32,    32,    36,    49,    53,    56,    60,    62,    67,
      76,    82,    89,    98,   109,   112,   116,   121,   125,   129,
     136,   152,   165,   167,   179,   181,   184,   187,   190,   193,
     197,   200,   202,   207,   214,   220,   223,   228,   234,   237,
     240,   244,   249,   252,   256,   261,   266,   271,   276,   282,
     288,   291,   295,   300,   305,   309,   313,   317,   320,   323,
     326,   327,   331,   336,   339,   341,   354,   358,   376,   381
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "WHILE", "ELSE", "RETURN", "INT",
  "VOID", "PLUS", "MINUS", "TIMES", "OVER", "LT", "LTIGUAL", "MT",
  "MTIGUAL", "EQ", "DIFFERENT", "ASSIGN", "LPAREN", "RPAREN", "LCOLCHETE",
  "RCOLCHETE", "LCHAVE", "RCHAVE", "SEMI", "COMA", "ERROR", "NUM", "ID",
  "$accept", "programa", "declaracao_lista", "declaracao",
  "var_declaracao", "tipo_especificador", "fun_declaracao", "params",
  "param_lista", "param", "composto_decl", "local_declaracoes",
  "statement_lista", "statement", "expressao_decl", "selecao_decl",
  "iteracao_decl", "retorno_decl", "expressao", "var", "simples_expressao",
  "relacional", "soma_expressao", "soma", "termo", "mult", "fator",
  "ativacao", "args", "arg_lista", "idn", "number", "funcao_id", YY_NULLPTR
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
     285
};
# endif

#define YYPACT_NINF -96

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-96)))

#define YYTABLE_NINF -16

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       8,   -18,   -18,   -96,    37,     8,   -96,   -96,   -18,   -96,
     -96,   -96,   -96,   -96,   -96,    -4,    32,    41,    43,   -96,
      36,    36,   -96,    50,   -96,    59,   -18,    60,   -96,    55,
      62,    58,    63,    64,    38,    64,   -96,    66,   -96,   -96,
     -96,   -96,   -96,   -96,    38,   -96,    -1,    67,    70,    34,
      39,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
      65,    73,   -96,    61,    54,   -96,   -96,   -16,   -96,    39,
      39,   -96,    68,    72,   -96,    39,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,    39,    39,   -96,   -96,    39,    39,
      39,    74,    75,   -96,   -96,   -96,   -96,    40,    54,   -96,
     -96,    76,    71,    77,    27,    27,   -96,    39,   -96,    81,
     -96,   -96,    27,   -96
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     7,     0,     2,     4,     5,     0,     6,
      67,    69,    69,     1,     3,     0,     0,     0,     0,     8,
       0,     0,    68,     0,    10,    11,     0,     0,    14,    17,
       0,     0,    18,     0,     0,     0,     9,     0,    22,    12,
      11,    16,    13,    19,    24,    21,     0,     0,     0,     0,
       0,    20,    31,    61,    26,    23,    25,    27,    28,    29,
       0,    58,    38,    42,    50,    54,    59,    39,    60,     0,
       0,    35,     0,     0,    30,     0,    51,    52,    43,    44,
      45,    46,    47,    48,     0,     0,    55,    56,     0,    64,
       0,     0,     0,    36,    57,    37,    58,    41,    49,    53,
      66,     0,    63,     0,     0,     0,    62,     0,    40,    32,
      34,    65,     0,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -96,   -96,   -96,    94,    57,    14,   -96,    82,    78,   -96,
     -22,   -96,   -96,   -95,   -96,   -96,   -96,   -96,   -49,   -46,
     -96,   -96,    18,   -96,    19,   -96,    17,   -96,   -96,   -96,
       6,    88,    95
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,     9,    27,    28,    29,
      54,    44,    46,    55,    56,    57,    58,    59,    60,    61,
      62,    84,    63,    85,    64,    88,    65,    66,   101,   102,
      67,    68,    16
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      72,    73,    47,    48,    89,    49,    90,    11,    12,   109,
     110,    39,    10,    42,    15,     1,     2,   113,    18,    50,
      91,    92,    19,    38,    51,    52,    95,    53,    22,    10,
      47,    48,    32,    49,    26,    26,     3,    13,    96,    96,
     100,   103,    96,    24,    25,    24,    40,    50,    26,    76,
      77,    38,    20,    52,    50,    53,    22,    10,   111,    50,
      71,    21,    53,    22,    10,    86,    87,    53,    22,    10,
      76,    77,    22,    31,    78,    79,    80,    81,    82,    83,
     -15,    33,    34,    35,    36,    37,   112,    69,    38,    43,
      70,    74,    75,    94,    93,   104,   105,   106,   107,    14,
     108,    45,    97,    30,    98,    99,    23,    17,     0,     0,
       0,     0,    41
};

static const yytype_int8 yycheck[] =
{
      49,    50,     3,     4,    20,     6,    22,     1,     2,   104,
     105,    33,    30,    35,     8,     7,     8,   112,    22,    20,
      69,    70,    26,    24,    25,    26,    75,    28,    29,    30,
       3,     4,    26,     6,    20,    21,    28,     0,    84,    85,
      89,    90,    88,     7,     8,     7,     8,    20,    34,     9,
      10,    24,    20,    26,    20,    28,    29,    30,   107,    20,
      26,    20,    28,    29,    30,    11,    12,    28,    29,    30,
       9,    10,    29,    23,    13,    14,    15,    16,    17,    18,
      21,    21,    27,    21,    26,    22,     5,    20,    24,    23,
      20,    26,    19,    21,    26,    21,    21,    21,    27,     5,
      23,    44,    84,    21,    85,    88,    18,    12,    -1,    -1,
      -1,    -1,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,    28,    32,    33,    34,    35,    36,    37,
      30,    61,    61,     0,    34,    61,    63,    63,    22,    26,
      20,    20,    29,    62,     7,     8,    36,    38,    39,    40,
      38,    23,    61,    21,    27,    21,    26,    22,    24,    41,
       8,    39,    41,    23,    42,    35,    43,     3,     4,     6,
      20,    25,    26,    28,    41,    44,    45,    46,    47,    48,
      49,    50,    51,    53,    55,    57,    58,    61,    62,    20,
      20,    26,    49,    49,    26,    19,     9,    10,    13,    14,
      15,    16,    17,    18,    52,    54,    11,    12,    56,    20,
      22,    49,    49,    26,    21,    49,    50,    53,    55,    57,
      49,    59,    60,    49,    21,    21,    21,    27,    23,    44,
      44,    49,     5,    44
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    31,    32,    33,    33,    34,    34,    34,    35,    35,
      36,    36,    37,    37,    38,    38,    39,    39,    40,    40,
      41,    42,    42,    43,    43,    44,    44,    44,    44,    44,
      45,    45,    46,    46,    47,    48,    48,    49,    49,    50,
      50,    51,    51,    52,    52,    52,    52,    52,    52,    53,
      53,    54,    54,    55,    55,    56,    56,    57,    57,    57,
      57,    57,    58,    59,    59,    60,    60,    61,    62,    63
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     6,
       1,     1,     7,     7,     1,     1,     3,     1,     2,     4,
       4,     2,     0,     2,     0,     1,     1,     1,     1,     1,
       2,     1,     5,     7,     5,     2,     3,     3,     1,     1,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     1,     4,     1,     0,     3,     1,     1,     1,     0
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
        case 2:
#line 32 "cminus.y" /* yacc.c:1646  */
    {
			savedTree = (yyvsp[0]);
		 }
#line 1328 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 36 "cminus.y" /* yacc.c:1646  */
    {
						YYSTYPE aux = (yyvsp[-1]);
						if(aux != NULL){
							while(aux->sibling != NULL){
								aux = aux->sibling;
							}
							aux->sibling = (yyvsp[0]);
							(yyval) = (yyvsp[-1]);
						}
						else{
							(yyval) = (yyvsp[0]);
						}
				}
#line 1346 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 49 "cminus.y" /* yacc.c:1646  */
    {
					(yyval) = (yyvsp[0]);
				}
#line 1354 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 53 "cminus.y" /* yacc.c:1646  */
    {
		   		(yyval) = (yyvsp[0]);
		   }
#line 1362 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 56 "cminus.y" /* yacc.c:1646  */
    {
				(yyval) = (yyvsp[0]);
				savedFunName = "Global";
			}
#line 1371 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 60 "cminus.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 1377 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 62 "cminus.y" /* yacc.c:1646  */
    {
					(yyval) = (yyvsp[-2]);
					(yyval)->child[0] = (yyvsp[-1]);
					(yyval)->escopo = savedFunName;
				}
#line 1387 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 67 "cminus.y" /* yacc.c:1646  */
    {
					(yyval) = newExpNode(VetorK);
                       			(yyval)->child[0] = (yyvsp[-4]);
                        		(yyvsp[-4])->child[0] = (yyvsp[-2]);
                        		(yyval)->type = (yyvsp[-5])->type;
                        		(yyval)->escopo = savedFunName;

				}
#line 1400 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 76 "cminus.y" /* yacc.c:1646  */
    {
							(yyval) = newExpNode(IntK);
                        				(yyval)->type = Integer;
                        				(yyval)->escopo = savedFunName;
                        				flagType = 0;
					}
#line 1411 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 82 "cminus.y" /* yacc.c:1646  */
    {
							(yyval) = newExpNode(VoidK);
                        				(yyval)->type = Void;
                        				(yyval)->escopo = savedFunName;
                        				flagType = 1;
					}
#line 1422 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 90 "cminus.y" /* yacc.c:1646  */
    {
                        				(yyval) = newExpNode(IntFuncK);
                        				(yyval)->type = Integer;
                        				flagFun = 1;
                        				(yyval)->child[0] = (yyvsp[-5]);
                        				(yyvsp[-5])->child[0] = (yyvsp[-2]);
                        				(yyvsp[-5])->child[1] = (yyvsp[0]);
                     		 }
#line 1435 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 99 "cminus.y" /* yacc.c:1646  */
    {
                        				(yyval) = newExpNode(VoidFuncK);
                        				(yyval)->type = Void;
                        				flagFun = 1;
                        				(yyval)->child[0] = (yyvsp[-5]);
                        				(yyvsp[-5])->child[0] = (yyvsp[-2]);
                        				(yyvsp[-5])->child[1] = (yyvsp[0]);
                      		}
#line 1448 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 109 "cminus.y" /* yacc.c:1646  */
    {
	  		(yyval)= (yyvsp[0]);
	  }
#line 1456 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 112 "cminus.y" /* yacc.c:1646  */
    {
			(yyval) = NULL;
	  }
#line 1464 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 116 "cminus.y" /* yacc.c:1646  */
    {
						(yyval) = (yyvsp[-2]);
                        			(yyval)->sibling = (yyvsp[0]);

			}
#line 1474 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 121 "cminus.y" /* yacc.c:1646  */
    {
				(yyval) = (yyvsp[0]);
			}
#line 1482 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 125 "cminus.y" /* yacc.c:1646  */
    {
	  		(yyval) = (yyvsp[-1]);
			(yyval)->child[0] = (yyvsp[0]);
	  }
#line 1491 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 129 "cminus.y" /* yacc.c:1646  */
    {
			(yyval) = newExpNode(VetorK);
                        (yyval)->child[0] = (yyvsp[-2]);
                        (yyval)->type = (yyvsp[-3])->type;

	  }
#line 1502 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 136 "cminus.y" /* yacc.c:1646  */
    {
						YYSTYPE aux = (yyvsp[-2]);
						if(aux != NULL)
						{
							while(aux->sibling != NULL){
								aux = aux->sibling;
							}
							aux->sibling = (yyvsp[-1]);
							(yyval) = (yyvsp[-2]);
						}
						else{
							(yyval) = (yyvsp[-1]);
						}

				}
#line 1522 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 152 "cminus.y" /* yacc.c:1646  */
    {
						YYSTYPE aux = (yyvsp[-1]);
						if(aux != NULL){
							while(aux->sibling != NULL){
								aux = aux->sibling;
							}
							aux->sibling = (yyvsp[0]);
							(yyval) = (yyvsp[-1]);
						}
						else{
							(yyval) = (yyvsp[0]);
						}

					}
#line 1541 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 165 "cminus.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 1547 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 167 "cminus.y" /* yacc.c:1646  */
    {
						YYSTYPE aux = (yyvsp[-1]);
						if(aux != NULL){
							while(aux->sibling != NULL){
								aux = aux->sibling;
							}
							aux->sibling = (yyvsp[0]);
							(yyval) = (yyvsp[-1]);
						}
						else{
							(yyval) = (yyvsp[0]);
						}
				}
#line 1565 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 179 "cminus.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 1571 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 181 "cminus.y" /* yacc.c:1646  */
    {
		  		(yyval) = (yyvsp[0]);
		  }
#line 1579 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 184 "cminus.y" /* yacc.c:1646  */
    {
		  		(yyval) = (yyvsp[0]);
		  }
#line 1587 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 187 "cminus.y" /* yacc.c:1646  */
    {
		  		(yyval) = (yyvsp[0]);
		  }
#line 1595 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 190 "cminus.y" /* yacc.c:1646  */
    {
		  		(yyval) = (yyvsp[0]);
		  }
#line 1603 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 193 "cminus.y" /* yacc.c:1646  */
    {
		  		(yyval) = (yyvsp[0]);
		  }
#line 1611 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 197 "cminus.y" /* yacc.c:1646  */
    {
					(yyval) = (yyvsp[-1]);
				}
#line 1619 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 200 "cminus.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1625 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 202 "cminus.y" /* yacc.c:1646  */
    {
					(yyval) = newStmtNode(IfK);
					(yyval)->child[0] = (yyvsp[-2]);
					(yyval)->child[1] = (yyvsp[0]);
			}
#line 1635 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 207 "cminus.y" /* yacc.c:1646  */
    {
					(yyval) = newStmtNode(IfK);
					(yyval)->child[0] = (yyvsp[-4]);
					(yyval)->child[1] = (yyvsp[-2]);
					(yyval)->child[2] = (yyvsp[0]);
			}
#line 1646 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 214 "cminus.y" /* yacc.c:1646  */
    {
					(yyval) = newStmtNode(WhileK);
					(yyval)->child[0] = (yyvsp[-2]);
					(yyval)->child[1] = (yyvsp[0]);
			}
#line 1656 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 220 "cminus.y" /* yacc.c:1646  */
    {
				(yyval) = newStmtNode(ReturnK);
			   }
#line 1664 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 223 "cminus.y" /* yacc.c:1646  */
    {
					(yyval) = newStmtNode(ReturnK);
					(yyval)->child[0] = (yyvsp[-1]);
			   }
#line 1673 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 228 "cminus.y" /* yacc.c:1646  */
    {
		  		(yyval) = newStmtNode(AssignK);
				(yyval)->child[0] = (yyvsp[-2]);
				(yyval)->child[1] = (yyvsp[0]);
				(yyval)->lineno = lineno;
		  }
#line 1684 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 234 "cminus.y" /* yacc.c:1646  */
    {
				(yyval) = (yyvsp[0]);
		}
#line 1692 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 237 "cminus.y" /* yacc.c:1646  */
    {
		(yyval) =(yyvsp[0]);
	}
#line 1700 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 240 "cminus.y" /* yacc.c:1646  */
    {
		(yyval) = (yyvsp[-3]);
		(yyval)->child[0]=(yyvsp[-1]);
	}
#line 1709 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 244 "cminus.y" /* yacc.c:1646  */
    {
						(yyval) = (yyvsp[-1]);
						(yyval)->child[0]=(yyvsp[-2]);
						(yyval)->child[1]=(yyvsp[0]);
					}
#line 1719 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 249 "cminus.y" /* yacc.c:1646  */
    {
						(yyval) = (yyvsp[0]);
					}
#line 1727 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 252 "cminus.y" /* yacc.c:1646  */
    {
				(yyval) = newExpNode(OpK);
				(yyval)->attr.op = LT;
		    }
#line 1736 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 256 "cminus.y" /* yacc.c:1646  */
    {
				(yyval) = newExpNode(OpK);
				(yyval)->attr.op = LTIGUAL;

			}
#line 1746 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 261 "cminus.y" /* yacc.c:1646  */
    {
				(yyval) = newExpNode(OpK);
				(yyval)->attr.op = MT;

			}
#line 1756 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 266 "cminus.y" /* yacc.c:1646  */
    {
				(yyval) = newExpNode(OpK);
				(yyval)->attr.op = MTIGUAL;

			}
#line 1766 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 271 "cminus.y" /* yacc.c:1646  */
    {
				(yyval) = newExpNode(OpK);
				(yyval)->attr.op = EQ;

			}
#line 1776 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 276 "cminus.y" /* yacc.c:1646  */
    {
				(yyval) = newExpNode(OpK);
				(yyval)->attr.op = DIFFERENT;

			}
#line 1786 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 282 "cminus.y" /* yacc.c:1646  */
    {
					(yyval) = (yyvsp[-1]);
					(yyval)->child[0]=(yyvsp[-2]);
					(yyval)->child[1]=(yyvsp[0]);

			}
#line 1797 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 288 "cminus.y" /* yacc.c:1646  */
    {
				(yyval) = (yyvsp[0]);
			}
#line 1805 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 291 "cminus.y" /* yacc.c:1646  */
    {
	 		(yyval) = newExpNode(OpK);
			(yyval)->attr.op = PLUS;
	 }
#line 1814 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 295 "cminus.y" /* yacc.c:1646  */
    {
	 		(yyval) = newExpNode(OpK);
			(yyval)->attr.op = MINUS;
	 }
#line 1823 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 300 "cminus.y" /* yacc.c:1646  */
    {
	  		(yyval) = (yyvsp[-1]);
			(yyval)->child[0] = (yyvsp[-2]);
			(yyval)->child[1] = (yyvsp[0]);
	  }
#line 1833 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 305 "cminus.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[0]);
	  }
#line 1841 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 309 "cminus.y" /* yacc.c:1646  */
    {
	 		(yyval) = newExpNode(OpK);
			(yyval)->attr.op = TIMES;
	 }
#line 1850 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 313 "cminus.y" /* yacc.c:1646  */
    {
	 		(yyval) = newExpNode(OpK);
			(yyval)->attr.op = OVER;
	 }
#line 1859 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 317 "cminus.y" /* yacc.c:1646  */
    {
	  		(yyval) = (yyvsp[-1]);
	  }
#line 1867 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 320 "cminus.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[0]);
		}
#line 1875 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 323 "cminus.y" /* yacc.c:1646  */
    {
			(yyval) =(yyvsp[0]);
		}
#line 1883 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 327 "cminus.y" /* yacc.c:1646  */
    {
			(yyval) = NULL;
		}
#line 1891 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 331 "cminus.y" /* yacc.c:1646  */
    {
		 		(yyval) = (yyvsp[-3]);
				(yyval)->child[0] = (yyvsp[-1]);
		 }
#line 1900 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 336 "cminus.y" /* yacc.c:1646  */
    {
				(yyval) = (yyvsp[0]); 
		}
#line 1908 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 339 "cminus.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(NullK); }
#line 1914 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 341 "cminus.y" /* yacc.c:1646  */
    {
				YYSTYPE aux = (yyvsp[-2]);
						if(aux != NULL){
							while(aux->sibling != NULL){
								aux = aux->sibling;
							}
							aux->sibling = (yyvsp[0]);
							(yyval) = (yyvsp[-2]);
						}
						else{
							(yyval) = (yyvsp[0]);
						}

			}
#line 1933 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 354 "cminus.y" /* yacc.c:1646  */
    {
					(yyval)=(yyvsp[0]);
			}
#line 1941 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 358 "cminus.y" /* yacc.c:1646  */
    {
		(yyval) = newExpNode(IdK);
                (yyval)->attr.name = copyString(tokenString);
                savedName = (yyval)->attr.name;
                (yyval)->lineno = lineno;
                (yyval)->escopo = savedFunName;
                if(flagFun == 1){
                	savedFunName = (yyval)->attr.name;
                	flagFun = 0;
                }
                if(flagType == 0){
                        (yyval)->type = Integer;
                }
                else{
                        (yyval)->type = Void;
                        flagType = 0;
                }
	}
#line 1964 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 376 "cminus.y" /* yacc.c:1646  */
    {
		(yyval) = newExpNode(ConstK);
		(yyval)->attr.val = atoi(tokenString);
	}
#line 1973 "cminus.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 381 "cminus.y" /* yacc.c:1646  */
    {savedFunName = savedName; }
#line 1979 "cminus.tab.c" /* yacc.c:1646  */
    break;


#line 1983 "cminus.tab.c" /* yacc.c:1646  */
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
#line 384 "cminus.y" /* yacc.c:1906  */


int yyerror(char * message)
{ fprintf(listing,"Syntax error at line %d: %s\n",lineno,message);
  fprintf(listing,"Current token: ");
  printToken(yychar,tokenString);
  Error = TRUE;
  return 0;
}

/* yylex calls getToken to make Yacc/Bison output
 * compatible with ealier versions of the TINY scanner
 */
static int yylex(void)
{ return getToken(); }

TreeNode * parse(void)
{ yyparse();
  return savedTree;
}
