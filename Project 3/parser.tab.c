/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     BOOL = 258,
     CHAR = 259,
     CHARCONSTANT = 260,
     ELSE = 261,
     FOR = 262,
     IF = 263,
     INT = 264,
     PRINTF = 265,
     RETURN = 266,
     STRING = 267,
     VOID = 268,
     WHILE = 269,
     PLUS = 270,
     MINUS = 271,
     MULT = 272,
     DIV = 273,
     MOD = 274,
     LESSTHAN = 275,
     LESSTHANOREQL = 276,
     GRTRTHAN = 277,
     GRTRTHANOREQL = 278,
     EQUIVALENT = 279,
     NOTEQUIVALENT = 280,
     EQUAL = 281,
     SEMICOLON = 282,
     COMMA = 283,
     LPAREN = 284,
     RPAREN = 285,
     LBRACE = 286,
     RBRACE = 287,
     STRINGCONSTANT = 288,
     INTCONSTANT = 289,
     BOOLCONSTANT = 290,
     ID = 291,
     NOELSE = 292
   };
#endif
/* Tokens.  */
#define BOOL 258
#define CHAR 259
#define CHARCONSTANT 260
#define ELSE 261
#define FOR 262
#define IF 263
#define INT 264
#define PRINTF 265
#define RETURN 266
#define STRING 267
#define VOID 268
#define WHILE 269
#define PLUS 270
#define MINUS 271
#define MULT 272
#define DIV 273
#define MOD 274
#define LESSTHAN 275
#define LESSTHANOREQL 276
#define GRTRTHAN 277
#define GRTRTHANOREQL 278
#define EQUIVALENT 279
#define NOTEQUIVALENT 280
#define EQUAL 281
#define SEMICOLON 282
#define COMMA 283
#define LPAREN 284
#define RPAREN 285
#define LBRACE 286
#define RBRACE 287
#define STRINGCONSTANT 288
#define INTCONSTANT 289
#define BOOLCONSTANT 290
#define ID 291
#define NOELSE 292




/* Copy the first part of user declarations.  */
#line 6 "parser.y"


#include <stdio.h>
#inlcude "ast.h"
int yylex();



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 200 "parser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   530

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNRULES -- Number of states.  */
#define YYNSTATES  156

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      35,    36,    37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    17,    20,
      22,    24,    26,    28,    35,    42,    44,    45,    47,    51,
      56,    60,    64,    67,    70,    72,    75,    77,    79,    82,
      84,    86,    88,    90,    92,    94,   102,   108,   114,   122,
     130,   138,   145,   154,   163,   172,   182,   185,   189,   197,
     203,   209,   213,   215,   219,   221,   223,   225,   229,   233,
     237,   241,   245,   248,   252,   256,   260,   264,   268,   272,
     276,   281,   283,   284,   286,   288,   290
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      39,     0,    -1,    40,    -1,    40,    41,    -1,    41,    -1,
      42,    -1,    45,    -1,    43,    27,    -1,    44,    36,    -1,
       9,    -1,     3,    -1,    12,    -1,     4,    -1,    44,    36,
      29,    46,    30,    48,    -1,    13,    36,    29,    46,    30,
      48,    -1,    47,    -1,    -1,    43,    -1,    47,    28,    43,
      -1,    31,    49,    50,    32,    -1,    31,    50,    32,    -1,
      31,    49,    32,    -1,    31,    32,    -1,    49,    42,    -1,
      42,    -1,    50,    51,    -1,    51,    -1,    27,    -1,    58,
      27,    -1,    52,    -1,    53,    -1,    54,    -1,    55,    -1,
      56,    -1,    48,    -1,     8,    29,    58,    30,    51,     6,
      51,    -1,     8,    29,    58,    30,    51,    -1,    14,    29,
      58,    30,    51,    -1,     7,    29,    58,    27,    27,    30,
      51,    -1,     7,    29,    27,    58,    27,    30,    51,    -1,
       7,    29,    27,    27,    58,    30,    51,    -1,     7,    29,
      27,    27,    30,    51,    -1,     7,    29,    58,    27,    58,
      27,    30,    51,    -1,     7,    29,    58,    27,    27,    58,
      30,    51,    -1,     7,    29,    27,    58,    27,    58,    30,
      51,    -1,     7,    29,    58,    27,    58,    27,    58,    30,
      51,    -1,    11,    27,    -1,    11,    58,    27,    -1,    10,
      29,    33,    28,    57,    30,    27,    -1,    10,    29,    61,
      30,    27,    -1,    10,    29,    36,    30,    27,    -1,    57,
      28,    58,    -1,    58,    -1,    36,    26,    58,    -1,    61,
      -1,    36,    -1,    59,    -1,    29,    58,    30,    -1,    58,
      15,    58,    -1,    58,    16,    58,    -1,    58,    17,    58,
      -1,    58,    18,    58,    -1,    16,    58,    -1,    58,    20,
      58,    -1,    58,    21,    58,    -1,    58,    22,    58,    -1,
      58,    23,    58,    -1,    58,    24,    58,    -1,    58,    25,
      58,    -1,    58,    19,    58,    -1,    36,    29,    60,    30,
      -1,    57,    -1,    -1,    34,    -1,    33,    -1,    35,    -1,
       5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    93,    93,    97,    98,   101,   102,   105,   108,   111,
     112,   113,   114,   117,   119,   123,   124,   127,   128,   131,
     132,   133,   134,   137,   138,   141,   142,   145,   146,   147,
     148,   149,   150,   151,   152,   155,   156,   159,   162,   163,
     164,   165,   166,   167,   168,   169,   172,   173,   176,   177,
     178,   181,   182,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     205,   208,   209,   212,   213,   214,   215
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOL", "CHAR", "CHARCONSTANT", "ELSE",
  "FOR", "IF", "INT", "PRINTF", "RETURN", "STRING", "VOID", "WHILE",
  "PLUS", "MINUS", "MULT", "DIV", "MOD", "LESSTHAN", "LESSTHANOREQL",
  "GRTRTHAN", "GRTRTHANOREQL", "EQUIVALENT", "NOTEQUIVALENT", "EQUAL",
  "SEMICOLON", "COMMA", "LPAREN", "RPAREN", "LBRACE", "RBRACE",
  "STRINGCONSTANT", "INTCONSTANT", "BOOLCONSTANT", "ID", "NOELSE",
  "$accept", "Program", "DeclAdd", "Decl", "VariableDecl", "Variable",
  "Type", "FunctionDecl", "OptFormals", "Formals", "StmtBlock",
  "VarDeclAdd", "StmtAdd", "Stmt", "IfStmt", "WhileStmt", "ForStmt",
  "ReturnStmt", "PrintStmt", "ExprAdd", "Expr", "Call", "OptExprAdd",
  "Constant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    39,    40,    40,    41,    41,    42,    43,    44,
      44,    44,    44,    45,    45,    46,    46,    47,    47,    48,
      48,    48,    48,    49,    49,    50,    50,    51,    51,    51,
      51,    51,    51,    51,    51,    52,    52,    53,    54,    54,
      54,    54,    54,    54,    54,    54,    55,    55,    56,    56,
      56,    57,    57,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      59,    60,    60,    61,    61,    61,    61
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     6,     6,     1,     0,     1,     3,     4,
       3,     3,     2,     2,     1,     2,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     7,     5,     5,     7,     7,
       7,     6,     8,     8,     8,     9,     2,     3,     7,     5,
       5,     3,     1,     3,     1,     1,     1,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       4,     1,     0,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    10,    12,     9,    11,     0,     0,     2,     4,     5,
       0,     0,     6,     0,     1,     3,     7,     8,    16,    16,
      17,     0,     0,    15,     0,     8,     0,     0,     0,     0,
      14,    18,    13,    76,     0,     0,     0,     0,     0,     0,
      27,     0,    22,    74,    73,    75,    55,    24,    34,     0,
       0,    26,    29,    30,    31,    32,    33,     0,    56,    54,
       0,     0,     0,    46,     0,     0,    62,     0,     0,    72,
      21,    23,     0,    20,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
      74,     0,     0,    47,     0,    57,    53,    71,    52,     0,
      19,    58,    59,    60,    61,    69,    63,    64,    65,    66,
      67,    68,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,     0,     0,     0,     0,     0,    36,     0,    50,
      49,    37,    51,    41,     0,     0,     0,     0,     0,     0,
       0,     0,    40,    39,     0,    38,     0,     0,     0,    35,
      48,    44,    43,    42,     0,    45
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    10,    21,    12,    22,    23,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    97,
      57,    58,    99,    59
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -51
static const yytype_int16 yypact[] =
{
     123,   -51,   -51,   -51,   -51,   -23,    28,   123,   -51,   -51,
      -4,    20,   -51,    11,   -51,   -51,   -51,    44,   180,   180,
     -51,    50,    65,    82,   103,   -51,    81,   180,    81,    -2,
     -51,   -51,   -51,   -51,   105,   108,   109,   181,   110,    95,
     -51,    95,   -51,   -51,   -51,   -51,     9,   -51,   -51,   137,
      10,   -51,   -51,   -51,   -51,   -51,   -51,   400,   -51,   -51,
     196,    95,    14,   -51,   413,    95,   484,   288,    95,    95,
     -51,   -51,   171,   -51,   -51,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,   -51,   206,   426,   304,
     115,   125,   126,   -51,   320,   -51,   -51,   129,   465,   130,
     -51,   475,   484,   492,   499,   505,    84,    77,    68,    46,
     134,   -51,   221,   439,   231,    47,    95,   138,   140,    47,
      95,   -51,    47,   336,   243,   258,   452,   -51,    23,   -51,
     -51,   -51,   465,   -51,    47,    47,   352,    47,   368,   266,
      47,   147,   -51,   -51,    47,   -51,    47,    47,   384,   -51,
     -51,   -51,   -51,   -51,    47,   -51
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -51,   -51,   -51,   154,   -13,    41,     4,   -51,   156,   -51,
      36,   -51,   131,   -50,   -51,   -51,   -51,   -51,   -51,    72,
      38,   -51,   -51,   128
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      74,     1,     2,    33,    11,    34,    35,     3,    36,    37,
       4,    11,    38,    13,    39,    33,    47,    34,    35,    33,
      36,    37,    74,    16,    38,    40,    39,    41,    14,    29,
      42,    43,    44,    45,    46,    68,    71,    40,    69,    41,
      18,    29,    73,    43,    44,    45,    46,    90,    44,    45,
      91,   120,    33,   141,    34,    35,    17,    36,    37,    20,
      20,    38,    30,    39,    32,   127,    80,    81,    31,   131,
      84,    85,   133,    19,    40,    64,    41,    66,    29,    67,
      43,    44,    45,    46,   142,   143,    25,   145,    80,    81,
     149,    83,    84,    85,   151,    26,   152,   153,    88,    89,
      33,    84,    85,    94,   155,    81,    96,    98,    84,    85,
      27,    39,    29,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    41,   113,     1,     2,    43,    44,
      45,    46,     3,    28,    60,     4,     5,    61,    62,    65,
       1,     2,    33,   116,    34,    35,     3,    36,    37,     4,
     123,    38,   126,    39,    98,   117,   118,   120,   132,    85,
     121,    15,   136,   138,    40,   129,    41,   130,    29,    70,
      43,    44,    45,    46,   150,    24,    33,   148,    34,    35,
      72,    36,    37,     1,     2,    38,    33,    39,   128,     3,
      92,     0,     4,     0,     0,     0,     0,    39,    40,     0,
      41,    33,    29,   100,    43,    44,    45,    46,    63,     0,
      41,    33,    39,     0,    43,    44,    45,    46,     0,     0,
       0,     0,    39,    87,     0,    41,    33,     0,     0,    43,
      44,    45,    46,   112,     0,    41,    33,    39,     0,    43,
      44,    45,    46,     0,     0,     0,     0,    39,    33,     0,
      41,   122,     0,     0,    43,    44,    45,    46,   125,    39,
      41,     0,     0,    33,    43,    44,    45,    46,     0,     0,
       0,    33,    41,   135,    39,     0,    43,    44,    45,    46,
       0,     0,    39,     0,     0,     0,     0,    41,   137,     0,
       0,    43,    44,    45,    46,    41,   147,     0,     0,    43,
      44,    45,    46,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,     0,     0,     0,     0,    95,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
       0,     0,     0,     0,   115,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,     0,     0,     0,     0,
     119,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,     0,     0,     0,     0,   134,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,     0,     0,
       0,     0,   144,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,     0,     0,     0,     0,   146,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
       0,     0,     0,     0,   154,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,     0,    86,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,     0,
      93,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,     0,   114,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,     0,   124,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,     0,   139,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      78,    79,    80,    81,    82,    83,    84,    85,    79,    80,
      81,    82,    83,    84,    85,    80,    81,    82,    83,    84,
      85
};

static const yytype_int16 yycheck[] =
{
      50,     3,     4,     5,     0,     7,     8,     9,    10,    11,
      12,     7,    14,    36,    16,     5,    29,     7,     8,     5,
      10,    11,    72,    27,    14,    27,    16,    29,     0,    31,
      32,    33,    34,    35,    36,    26,    49,    27,    29,    29,
      29,    31,    32,    33,    34,    35,    36,    33,    34,    35,
      36,    28,     5,    30,     7,     8,    36,    10,    11,    18,
      19,    14,    26,    16,    28,   115,    20,    21,    27,   119,
      24,    25,   122,    29,    27,    37,    29,    39,    31,    41,
      33,    34,    35,    36,   134,   135,    36,   137,    20,    21,
     140,    23,    24,    25,   144,    30,   146,   147,    60,    61,
       5,    24,    25,    65,   154,    21,    68,    69,    24,    25,
      28,    16,    31,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    29,    87,     3,     4,    33,    34,
      35,    36,     9,    30,    29,    12,    13,    29,    29,    29,
       3,     4,     5,    28,     7,     8,     9,    10,    11,    12,
     112,    14,   114,    16,   116,    30,    30,    28,   120,    25,
      30,     7,   124,   125,    27,    27,    29,    27,    31,    32,
      33,    34,    35,    36,    27,    19,     5,   139,     7,     8,
      49,    10,    11,     3,     4,    14,     5,    16,   116,     9,
      62,    -1,    12,    -1,    -1,    -1,    -1,    16,    27,    -1,
      29,     5,    31,    32,    33,    34,    35,    36,    27,    -1,
      29,     5,    16,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    16,    27,    -1,    29,     5,    -1,    -1,    33,
      34,    35,    36,    27,    -1,    29,     5,    16,    -1,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    16,     5,    -1,
      29,    30,    -1,    -1,    33,    34,    35,    36,    27,    16,
      29,    -1,    -1,     5,    33,    34,    35,    36,    -1,    -1,
      -1,     5,    29,    30,    16,    -1,    33,    34,    35,    36,
      -1,    -1,    16,    -1,    -1,    -1,    -1,    29,    30,    -1,
      -1,    33,    34,    35,    36,    29,    30,    -1,    -1,    33,
      34,    35,    36,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      18,    19,    20,    21,    22,    23,    24,    25,    19,    20,
      21,    22,    23,    24,    25,    20,    21,    22,    23,    24,
      25
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     9,    12,    13,    39,    40,    41,    42,
      43,    44,    45,    36,     0,    41,    27,    36,    29,    29,
      43,    44,    46,    47,    46,    36,    30,    28,    30,    31,
      48,    43,    48,     5,     7,     8,    10,    11,    14,    16,
      27,    29,    32,    33,    34,    35,    36,    42,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    58,    59,    61,
      29,    29,    29,    27,    58,    29,    58,    58,    26,    29,
      32,    42,    50,    32,    51,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    27,    27,    58,    58,
      33,    36,    61,    27,    58,    30,    58,    57,    58,    60,
      32,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    27,    58,    27,    30,    28,    30,    30,    30,
      28,    30,    30,    58,    27,    27,    58,    51,    57,    27,
      27,    51,    58,    51,    30,    30,    58,    30,    58,    27,
       6,    30,    51,    51,    30,    51,    30,    30,    58,    51,
      27,    51,    51,    51,    30,    51
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
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
     `$$ = $1'.

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
#line 93 "parser.y"
    { Program *program = new Program((yyvsp[(1) - (1)].declList));
                                                   program->SetParent(NULL); ;}
    break;

  case 3:
#line 97 "parser.y"
    { ((yyval.declList) = (yyvsp[(1) - (2)].declList))->Append((yyvsp[(2) - (2)].decl)); ;}
    break;

  case 4:
#line 98 "parser.y"
    { ((yyval.declList) = new List<Decl*>)->Append((yyvsp[(1) - (1)].decl)); ;}
    break;

  case 5:
#line 101 "parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].varDecl); ;}
    break;

  case 6:
#line 102 "parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)]); ;}
    break;

  case 7:
#line 105 "parser.y"
    { (yyval.varDecl) = (yyvsp[(1) - (2)].varDecl); ;}
    break;

  case 8:
#line 108 "parser.y"
    { (yyval.varDecl) = new VarDecl((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)].type)); ;}
    break;

  case 9:
#line 111 "parser.y"
    { (yyval.type) = Type::intType; ;}
    break;

  case 10:
#line 112 "parser.y"
    { (yyval.type) = Type::boolType; ;}
    break;

  case 11:
#line 113 "parser.y"
    { (yyval.type) = Type::stringType; ;}
    break;

  case 12:
#line 114 "parser.y"
    { (yyval.type) = Type::charType; ;}
    break;

  case 13:
#line 117 "parser.y"
    { (yyval) = new FnDecl((yyvsp[(2) - (6)]), (yyvsp[(1) - (6)].type), (yyvsp[(4) - (6)].formals));
                                                                   (yyval)->SetFunctionBody((yyvsp[(6) - (6)].stmtblock)); ;}
    break;

  case 14:
#line 119 "parser.y"
    { (yyval) = new FnDecl((yyvsp[(2) - (6)]), Type::voidType, (yyvsp[(4) - (6)].formals)); 
                                                                   (yyval)->SetFunction((yyvsp[(6) - (6)].stmtblock)); ;}
    break;

  case 15:
#line 123 "parser.y"
    { (yyval.formals) = (yyvsp[(1) - (1)].formals); ;}
    break;

  case 16:
#line 124 "parser.y"
    { (yyval.formals) = new List<VarDecl *>; ;}
    break;

  case 17:
#line 127 "parser.y"
    { ((yyval.formals) = new List<VarDecl *>)->Append((yyvsp[(1) - (1)].varDecl)); ;}
    break;

  case 18:
#line 128 "parser.y"
    { ((yyval.formals) = (yyvsp[(1) - (3)].formals))->Append((yyvsp[(3) - (3)].varDecl)); ;}
    break;

  case 19:
#line 131 "parser.y"
    { (yyval.stmtblock) = new StmtBlock((yyvsp[(2) - (4)].vardecls), (yyvsp[(3) - (4)].statements)); ;}
    break;

  case 20:
#line 132 "parser.y"
    { (yyval.stmtblock) = new StmtBlock(new List<VarDecl*>, (yyvsp[(2) - (3)].statements)); ;}
    break;

  case 21:
#line 133 "parser.y"
    { (yyval.stmtblock) = new StmtBlock((yyvsp[(2) - (3)].vardecls), new List<Stmt*>); ;}
    break;

  case 22:
#line 134 "parser.y"
    { (yyval.stmtblock) = new StmtBlock(new List<VarDecl*>, new List<Stmt*>); ;}
    break;

  case 23:
#line 137 "parser.y"
    { ((yyval.vardecls) = (yyvsp[(1) - (2)].vardecls))->Append((yyvsp[(2) - (2)].varDecl)); ;}
    break;

  case 24:
#line 138 "parser.y"
    { ((yyval.vardecls) = new List<VarDecl*>)->Append((yyvsp[(1) - (1)].varDecl)); ;}
    break;

  case 25:
#line 141 "parser.y"
    { ((yyval.statements) = (yyvsp[(1) - (2)].statements))->Append((yyvsp[(2) - (2)].stmt)); ;}
    break;

  case 26:
#line 142 "parser.y"
    { ((yyval.statements) = new List<Stmt*>)->Append((yyvsp[(1) - (1)].stmt)); ;}
    break;

  case 27:
#line 145 "parser.y"
    { (yyval.stmt) = new EmptyExpr(); ;}
    break;

  case 28:
#line 146 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (2)].expr); ;}
    break;

  case 29:
#line 147 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].ifStmt); ;}
    break;

  case 30:
#line 148 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].whileStmt); ;}
    break;

  case 31:
#line 149 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].forStmt); ;}
    break;

  case 32:
#line 150 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].returnStmt); ;}
    break;

  case 33:
#line 151 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].printStmt); ;}
    break;

  case 34:
#line 152 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmtblock); ;}
    break;

  case 35:
#line 155 "parser.y"
    { (yyval.ifStmt) = new IfStmt((yyvsp[(3) - (7)].expr), (yyvsp[(5) - (7)].stmt), (yyvsp[(7) - (7)].stmt)); ;}
    break;

  case 36:
#line 156 "parser.y"
    { (yyval.ifStmt) = new IfStmt((yyvsp[(3) - (5)].expr), (yyvsp[(5) - (5)].stmt), NULL); ;}
    break;

  case 37:
#line 159 "parser.y"
    { (yyval.whileStmt) = new WhileStmt((yyvsp[(3) - (5)].expr), (yyvsp[(5) - (5)].stmt)); ;}
    break;

  case 38:
#line 162 "parser.y"
    { (yyval.forStmt) = new ForStmt((yyvsp[(3) - (7)].expr), new EmptyExpr(), new EmptyExpr()); ;}
    break;

  case 39:
#line 163 "parser.y"
    { (yyval.forStmt) = new ForStmt(new EmptyExpr(), (yyvsp[(4) - (7)].expr), new EmptyExpr()); ;}
    break;

  case 40:
#line 164 "parser.y"
    { (yyval.forStmt) = new ForStmt(new EmptyExpr(), new EmptyExpr(), (yyvsp[(5) - (7)].expr)); ;}
    break;

  case 41:
#line 165 "parser.y"
    { (yyval.forStmt) = new ForStmt(new EmptyExp(), new EmptyExpr(), new EmptyExpr()); ;}
    break;

  case 42:
#line 166 "parser.y"
    { (yyval.forStmt) = new ForStmt((yyvsp[(3) - (8)].expr), (yyvsp[(5) - (8)].expr), new EmptyExpr()); ;}
    break;

  case 43:
#line 167 "parser.y"
    { (yyval.forStmt) = new ForStmt((yyvsp[(3) - (8)].expr), new EmptyExpr(), (yyvsp[(6) - (8)].expr)); ;}
    break;

  case 44:
#line 168 "parser.y"
    { (yyval.forStmt) = new ForStmt(new EmptyExpr(), (yyvsp[(4) - (8)].expr), (yyvsp[(6) - (8)].expr)); ;}
    break;

  case 45:
#line 169 "parser.y"
    { (yyval.forStmt) = new ForStmt((yyvsp[(3) - (9)].expr), (yyvsp[(5) - (9)].expr), (yyvsp[(7) - (9)].expr)); ;}
    break;

  case 46:
#line 172 "parser.y"
    { (yyval.returnStmt) = new ReturnStmt((yyloc), new EmptyExpr()); ;}
    break;

  case 47:
#line 173 "parser.y"
    { (yyval.returnStmt) = new ReturnStmt((yylsp[(2) - (3)]), (yyvsp[(2) - (3)].expr)); ;}
    break;

  case 48:
#line 176 "parser.y"
    { (yyval.printStmt) = new PrintStmt((yyvsp[(3) - (7)]), new List<Expr*>); ;}
    break;

  case 49:
#line 177 "parser.y"
    { (yyval.printStmt) = new PrintStmt((yyvsp[(3) - (5)])); ;}
    break;

  case 50:
#line 178 "parser.y"
    { (yyval.printStmt) = new PrintStmt((yyvsp[(3) - (5)])); ;}
    break;

  case 51:
#line 181 "parser.y"
    { ((yyval.exprList) = (yyvsp[(1) - (3)].exprList))->Append((yyvsp[(3) - (3)].expr)); ;}
    break;

  case 52:
#line 182 "parser.y"
    { ((yyval.exprList) = new List<Expr*>)->Append((yyvsp[(1) - (1)].expr)); ;}
    break;

  case 53:
#line 185 "parser.y"
    { (yyval.expr) = new AssignExpr((yyvsp[(1) - (3)]), new Operator((yylsp[(2) - (3)]), "="), (yyvsp[(3) - (3)].expr));  ;}
    break;

  case 54:
#line 186 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)]); ;}
    break;

  case 55:
#line 187 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)]); ;}
    break;

  case 56:
#line 188 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].call); ;}
    break;

  case 57:
#line 189 "parser.y"
    { (yyval.expr) = (yyvsp[(2) - (3)].expr); ;}
    break;

  case 58:
#line 190 "parser.y"
    { (yyval.expr) = new ArithmeticExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(2) - (3)]), "+"), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 59:
#line 191 "parser.y"
    { (yyval.expr) = new ArithmeticExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(2) - (3)]), "-"), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 60:
#line 192 "parser.y"
    { (yyval.expr) = new ArithmeticExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(2) - (3)]), "*"), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 61:
#line 193 "parser.y"
    { (yyval.expr) = new ArithmeticExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(2) - (3)]), "/"), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 62:
#line 194 "parser.y"
    { (yyval.expr) = new ArithmeticExpr(new Operator((yylsp[(1) - (2)]), "-"), (yyvsp[(2) - (2)].expr)); ;}
    break;

  case 63:
#line 195 "parser.y"
    { (yyval.expr) = new RelationExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(2) - (3)]), "<"), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 64:
#line 196 "parser.y"
    { (yyval.expr) = new RelationExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(2) - (3)]), "<="), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 65:
#line 197 "parser.y"
    { (yyval.expr) = new RelationExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(2) - (3)]), ">"), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 66:
#line 198 "parser.y"
    { (yyval.expr) = new RelationExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(2) - (3)]), ">="), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 67:
#line 199 "parser.y"
    { (yyval.expr) = new RelationExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(2) - (3)]), "=="), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 68:
#line 200 "parser.y"
    { (yyval.expr) = new RelationExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(2) - (3)]), "!="), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 69:
#line 201 "parser.y"
    { (yyval.expr) = new RelationExpr((yyvsp[(1) - (3)].expr), new Operator((yylsp[(2) - (3)]), "%"), (yyvsp[(3) - (3)].expr)); ;}
    break;

  case 70:
#line 205 "parser.y"
    { (yyval.call) = new Call((yyloc), NULL, (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)].exprList)); ;}
    break;

  case 71:
#line 208 "parser.y"
    { (yyval.exprList) = (yyvsp[(1) - (1)].exprList); ;}
    break;

  case 72:
#line 209 "parser.y"
    { (yyval.exprList) = new List<Expr*>; ;}
    break;

  case 73:
#line 212 "parser.y"
    { (yyval) = new IntConstant((yylsp[(1) - (1)]), (yyvsp[(1) - (1)])); ;}
    break;

  case 74:
#line 213 "parser.y"
    { (yyval) = new StringConstant((yylsp[(1) - (1)]), (yyvsp[(1) - (1)])); ;}
    break;

  case 75:
#line 214 "parser.y"
    { (yyval) = new BoolConstant((yylsp[(1) - (1)]), (yyvsp[(1) - (1)])); ;}
    break;

  case 76:
#line 215 "parser.y"
    { (yyval) = new CharConstant((yylsp[(1) - (1)]), (yyvsp[(1) - (1)])); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2009 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 219 "parser.y"


int yyerror(char *s){
  printf("\nError: %s\n", s);
  printf("[reject]\n");
  return 0;
}

int main(int argc, char **argv){
      if(yyparse() == 0){
            printf("\n[accept]\n");
      }
      return 0;
}
