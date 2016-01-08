/* A Bison parser, made by GNU Bison 2.4.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006,
   2009, 2010 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 2 "toy.y"

#include <stdio.h>
#include <stdlib.h>


/* Line 189 of yacc.c  */
#line 78 "y.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     _int = 258,
     _boolean = 259,
     _double = 260,
     _string = 261,
     _break = 262,
     _class = 263,
     _else = 264,
     _extends = 265,
     _booleanconstant = 266,
     _for = 267,
     _if = 268,
     _implements = 269,
     _interface = 270,
     _newarray = 271,
     _println = 272,
     _readln = 273,
     _return = 274,
     _void = 275,
     _while = 276,
     _id = 277,
     _doubleconstant = 278,
     _intconstant = 279,
     _stringconstant = 280,
     _plus = 281,
     _minus = 282,
     _multiplication = 283,
     _division = 284,
     _mod = 285,
     _less = 286,
     _lessequal = 287,
     _greaterequal = 288,
     _equal = 289,
     _notequal = 290,
     _and = 291,
     _or = 292,
     _not = 293,
     _assignop = 294,
     _semicolon = 295,
     _comma = 296,
     _period = 297,
     _leftparen = 298,
     _rightparen = 299,
     _leftbracket = 300,
     _rightbracket = 301,
     _leftbrace = 302,
     _rightbrace = 303,
     _greater = 304
   };
#endif
/* Tokens.  */
#define _int 258
#define _boolean 259
#define _double 260
#define _string 261
#define _break 262
#define _class 263
#define _else 264
#define _extends 265
#define _booleanconstant 266
#define _for 267
#define _if 268
#define _implements 269
#define _interface 270
#define _newarray 271
#define _println 272
#define _readln 273
#define _return 274
#define _void 275
#define _while 276
#define _id 277
#define _doubleconstant 278
#define _intconstant 279
#define _stringconstant 280
#define _plus 281
#define _minus 282
#define _multiplication 283
#define _division 284
#define _mod 285
#define _less 286
#define _lessequal 287
#define _greaterequal 288
#define _equal 289
#define _notequal 290
#define _and 291
#define _or 292
#define _not 293
#define _assignop 294
#define _semicolon 295
#define _comma 296
#define _period 297
#define _leftparen 298
#define _rightparen 299
#define _leftbracket 300
#define _rightbracket 301
#define _leftbrace 302
#define _rightbrace 303
#define _greater 304




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 218 "y.tab.c"

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   704

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNRULES -- Number of states.  */
#define YYNSTATES  226

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    19,
      22,    25,    30,    33,    35,    38,    41,    44,    47,    50,
      54,    56,    63,    70,    72,    74,    76,    80,    81,    87,
      95,   103,   113,   116,   119,   121,   123,   127,   133,   140,
     147,   149,   154,   157,   159,   162,   164,   167,   169,   171,
     173,   175,   177,   179,   181,   183,   189,   197,   203,   213,
     222,   231,   239,   241,   245,   248,   254,   256,   260,   264,
     266,   268,   270,   274,   278,   282,   286,   290,   294,   297,
     301,   305,   309,   313,   317,   321,   325,   329,   332,   336,
     343,   348,   355,   357,   359,   361,   363,   365
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,    52,    -1,    52,    51,    -1,    53,    -1,
      59,    -1,    63,    -1,    66,    -1,    54,    40,    -1,    57,
      22,    -1,    22,    56,    -1,    45,    79,    46,    56,    -1,
      42,    56,    -1,    62,    -1,     3,    58,    -1,     5,    58,
      -1,     4,    58,    -1,     6,    58,    -1,    22,    58,    -1,
      45,    46,    58,    -1,    62,    -1,    57,    22,    43,    60,
      44,    68,    -1,    20,    22,    43,    60,    44,    68,    -1,
      61,    -1,    62,    -1,    54,    -1,    54,    41,    61,    -1,
      -1,     8,    22,    47,    64,    48,    -1,     8,    22,    10,
      22,    47,    64,    48,    -1,     8,    22,    14,    65,    47,
      64,    48,    -1,     8,    22,    10,    22,    14,    65,    47,
      64,    48,    -1,    53,    64,    -1,    59,    64,    -1,    62,
      -1,    22,    -1,    22,    41,    65,    -1,    15,    22,    47,
      67,    48,    -1,    57,    22,    43,    60,    44,    40,    -1,
      20,    22,    43,    60,    44,    40,    -1,    62,    -1,    47,
      69,    70,    48,    -1,    69,    53,    -1,    62,    -1,    71,
      70,    -1,    62,    -1,    79,    40,    -1,    40,    -1,    72,
      -1,    73,    -1,    74,    -1,    75,    -1,    76,    -1,    77,
      -1,    68,    -1,    13,    43,    79,    44,    71,    -1,    13,
      43,    79,    44,    71,     9,    71,    -1,    21,    43,    79,
      44,    71,    -1,    12,    43,    79,    40,    79,    40,    79,
      44,    71,    -1,    12,    43,    40,    79,    40,    79,    44,
      71,    -1,    12,    43,    79,    40,    79,    40,    44,    71,
      -1,    12,    43,    40,    79,    40,    44,    71,    -1,     7,
      -1,    19,    79,    40,    -1,    19,    40,    -1,    17,    43,
      78,    44,    40,    -1,    79,    -1,    79,    41,    78,    -1,
      22,    39,    79,    -1,    82,    -1,    55,    -1,    80,    -1,
      43,    79,    44,    -1,    79,    26,    79,    -1,    79,    27,
      79,    -1,    79,    28,    79,    -1,    79,    29,    79,    -1,
      79,    30,    79,    -1,    27,    79,    -1,    79,    31,    79,
      -1,    79,    32,    79,    -1,    79,    49,    79,    -1,    79,
      33,    79,    -1,    79,    34,    79,    -1,    79,    35,    79,
      -1,    79,    36,    79,    -1,    79,    37,    79,    -1,    38,
      79,    -1,    18,    43,    44,    -1,    16,    43,    24,    41,
      57,    44,    -1,    22,    43,    81,    44,    -1,    22,    42,
      22,    43,    81,    44,    -1,    78,    -1,    62,    -1,    24,
      -1,    23,    -1,    25,    -1,    11,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    29,    29,    30,    32,    33,    34,    35,    37,    39,
      41,    43,    44,    45,    47,    48,    49,    50,    51,    53,
      54,    56,    57,    59,    60,    62,    63,    65,    67,    68,
      69,    70,    72,    73,    74,    76,    77,    79,    81,    82,
      83,    85,    87,    88,    90,    91,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   103,   104,   106,   108,   109,
     110,   111,   113,   115,   116,   118,   120,   121,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     146,   147,   149,   150,   152,   153,   154,   155
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_int", "_boolean", "_double", "_string",
  "_break", "_class", "_else", "_extends", "_booleanconstant", "_for",
  "_if", "_implements", "_interface", "_newarray", "_println", "_readln",
  "_return", "_void", "_while", "_id", "_doubleconstant", "_intconstant",
  "_stringconstant", "_plus", "_minus", "_multiplication", "_division",
  "_mod", "_less", "_lessequal", "_greaterequal", "_equal", "_notequal",
  "_and", "_or", "_not", "_assignop", "_semicolon", "_comma", "_period",
  "_leftparen", "_rightparen", "_leftbracket", "_rightbracket",
  "_leftbrace", "_rightbrace", "_greater", "$accept", "Program", "Decl",
  "Vdecl", "Var", "Lval", "LvalR", "Type", "TypeR", "Fdecl", "Formals",
  "Vlist", "EMPTY", "Cdecl", "Field", "IDlist", "Idecl", "Prototype",
  "StmtBlock", "VdecKLN", "StmtKLN", "Stmt", "IfStmt", "WhileStmt",
  "ForStmt", "BreakStmt", "ReturnStmt", "PrintStmt", "ExprList", "Expr",
  "Call", "Actuals", "Const", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    52,    52,    52,    52,    53,    54,
      55,    56,    56,    56,    57,    57,    57,    57,    57,    58,
      58,    59,    59,    60,    60,    61,    61,    62,    63,    63,
      63,    63,    64,    64,    64,    65,    65,    66,    67,    67,
      67,    68,    69,    69,    70,    70,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    72,    72,    73,    74,    74,
      74,    74,    75,    76,    76,    77,    78,    78,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      80,    80,    81,    81,    82,    82,    82,    82
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     2,     2,
       2,     4,     2,     1,     2,     2,     2,     2,     2,     3,
       1,     6,     6,     1,     1,     1,     3,     0,     5,     7,
       7,     9,     2,     2,     1,     1,     3,     5,     6,     6,
       1,     4,     2,     1,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     7,     5,     9,     8,
       8,     7,     1,     3,     2,     5,     1,     3,     3,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     6,
       4,     6,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    27,    27,    27,    27,     0,     0,     0,    27,     0,
       2,     4,     0,     0,     5,     6,     7,     0,    14,    20,
      16,    15,    17,     0,     0,     0,    18,     1,     3,     8,
       9,    27,     0,     0,    27,    27,    27,    27,    19,     0,
      35,     0,    27,    27,    34,     0,     0,     0,    40,     0,
      25,     0,     0,    23,    24,     0,     0,    27,     0,    27,
      32,    33,    28,     0,     0,    37,     0,     9,     0,     0,
       0,     0,    36,     0,    27,    27,    26,    27,    22,    21,
      27,    29,    30,     0,     0,    43,    27,     0,     0,     0,
      62,    97,     0,     0,     0,     0,     0,     0,     0,    27,
      95,    94,    96,     0,     0,    47,     0,    42,    70,    45,
      54,     0,    27,    48,    49,    50,    51,    52,    53,     0,
      71,    69,    31,    39,    38,     0,     0,     0,     0,     0,
      27,    64,     0,     0,     0,    27,    27,     0,    10,    13,
      78,    87,     0,    41,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,     0,
       0,     0,     0,     0,    66,    88,     0,    13,    63,     0,
      68,     0,    27,    12,    93,    92,     0,     0,    72,    73,
      74,    75,    76,    77,    79,    80,    82,    83,    84,    85,
      86,    81,     0,     0,     0,     0,     0,     0,     0,    27,
      90,    27,     0,     0,    55,     0,    65,    67,    57,     0,
      11,     0,     0,     0,     0,    89,    91,    61,     0,     0,
       0,    56,    59,    60,     0,    58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    42,    12,   108,   138,    13,    26,    43,
      52,    53,    19,    15,    45,    41,    16,    49,   110,    86,
     111,   112,   113,   114,   115,   116,   117,   118,   175,   119,
     120,   176,   121
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -129
static const yytype_int16 yypact[] =
{
     682,   -15,   -15,   -15,   -15,    11,    27,    41,   -15,    67,
     682,  -129,    35,    54,  -129,  -129,  -129,    34,  -129,  -129,
    -129,  -129,  -129,    10,    47,    38,  -129,  -129,  -129,  -129,
      39,   -15,    81,    84,   177,   413,    65,    65,  -129,    -8,
      64,    74,   177,   177,  -129,    60,   101,   102,  -129,    77,
      85,   134,   114,  -129,  -129,   115,    84,   177,    84,   177,
    -129,  -129,  -129,    86,   118,  -129,    65,  -129,   117,   117,
     119,   121,  -129,   124,    65,    65,  -129,  -129,  -129,  -129,
     177,  -129,  -129,   129,   140,  -129,   197,   130,   122,   145,
    -129,  -129,   143,   146,   151,   155,   162,   152,   163,    50,
    -129,  -129,  -129,   329,   329,  -129,   329,  -129,  -129,  -129,
    -129,   164,   234,  -129,  -129,  -129,  -129,  -129,  -129,   347,
    -129,  -129,  -129,  -129,  -129,   306,   329,   187,   329,   173,
     112,  -129,   371,   329,   329,    16,   329,    61,  -129,   166,
       7,  -129,   395,  -129,  -129,   329,   329,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,  -129,   329,   329,
     419,   443,   182,   189,   467,  -129,   329,  -129,  -129,   491,
     635,   191,   -23,  -129,  -129,  -129,   192,   515,  -129,     7,
       7,  -129,  -129,  -129,   107,   107,   107,   199,   199,    83,
     647,   107,   539,   329,   234,    65,   198,   329,   234,   329,
    -129,   -23,   260,   563,   230,   205,  -129,  -129,  -129,   210,
    -129,   234,   587,   283,   234,  -129,  -129,  -129,   234,   234,
     611,  -129,  -129,  -129,   234,  -129
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -129,   232,  -129,     4,   -21,  -129,  -128,   -24,    25,    21,
     -27,   194,   -34,  -129,   -25,     8,  -129,  -129,    -9,  -129,
     131,   144,  -129,  -129,  -129,  -129,  -129,  -129,  -123,    -6,
    -129,    63,  -129
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -21
static const yytype_int16 yytable[] =
{
      44,    48,    54,    54,    11,   163,    56,   173,    44,    44,
      55,    47,    51,    51,    11,    50,    50,    60,    61,   172,
      32,    14,   166,    44,    33,    44,    18,    20,    21,    22,
      17,    14,    71,    23,    73,   147,   148,   149,   171,    57,
      54,    54,    51,    85,   173,    50,    44,    83,    84,    24,
      51,    51,   109,    50,    50,    87,    38,    34,   172,    78,
      79,   166,    51,    25,    70,   139,    72,    27,     1,     2,
       3,     4,    91,   210,   207,    29,    30,    94,   109,    96,
      31,    36,    37,   130,   100,   101,   102,     8,   103,   134,
     107,   132,   135,   136,    35,   137,   167,   140,   141,   104,
     142,   167,   174,    39,   106,    58,    40,    31,    62,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   160,
     161,    59,   164,    63,    64,    65,    66,   169,   170,    74,
     164,   177,   158,   145,   146,   147,   148,   149,   167,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   134,   191,   192,   135,   136,    67,   166,    68,    69,
     177,    75,   123,    91,    77,   174,    80,   167,    94,    81,
      96,   205,    82,    88,   130,   100,   101,   102,   122,   103,
       1,     2,     3,     4,    89,   124,   125,   203,   -20,   126,
     104,   164,   131,   164,   127,   106,   212,     7,   128,     8,
       1,     2,     3,     4,    90,   129,   133,   220,    91,    92,
      93,   162,   143,    94,    95,    96,    97,   165,    98,    99,
     100,   101,   102,   195,   103,   145,   146,   147,   148,   149,
     150,   151,   152,   196,   199,   104,   200,   105,   206,   214,
     106,    90,    28,   144,    77,    91,    92,    93,   158,   215,
      94,    95,    96,    97,   216,    98,   130,   100,   101,   102,
      76,   103,   209,     0,     0,     0,     0,     0,     0,     0,
       0,    91,   104,     0,   105,     0,    94,   106,    96,     0,
       0,    77,   130,   100,   101,   102,     0,   103,     0,     0,
       0,     0,     0,     0,    91,     0,     0,     0,   104,    94,
       0,    96,     0,   106,   211,   130,   100,   101,   102,     0,
     103,     0,     0,     0,     0,     0,     0,    91,     0,     0,
       0,   104,    94,     0,    96,     0,   106,   219,   130,   100,
     101,   102,     0,   103,     0,     0,     0,     0,   204,     0,
      91,     0,   208,     0,   104,    94,   159,    96,     0,   106,
       0,   130,   100,   101,   102,   217,   103,     0,   221,     0,
       0,     0,   222,   223,     0,     0,     0,   104,   225,     0,
       0,     0,   106,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,     0,     0,   157,     0,     0,
       0,     0,     0,     0,     0,     0,   158,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,     0,
       0,   168,     0,     0,     0,     0,     1,     2,     3,     4,
     158,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,    46,     0,     8,     0,     0,     0,   178,
       0,     0,     0,     0,   158,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,     0,     0,   193,
       0,     0,     0,     0,     0,     0,     0,     0,   158,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,     0,     0,     0,     0,     0,     0,   194,     0,     0,
       0,     0,   158,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,     0,     0,     0,   197,     0,
       0,     0,     0,     0,     0,     0,   158,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,     0,
       0,     0,     0,     0,     0,   198,     0,     0,     0,     0,
     158,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,     0,     0,     0,     0,     0,     0,     0,
       0,   201,     0,     0,   158,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,     0,     0,   202,
       0,     0,     0,     0,     0,     0,     0,     0,   158,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,     0,     0,   213,     0,     0,     0,     0,     0,     0,
       0,     0,   158,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,     0,     0,     0,     0,     0,
       0,   218,     0,     0,     0,     0,   158,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,     0,
       0,     0,     0,     0,     0,   224,     0,     0,     0,     0,
     158,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   158,     1,     2,     3,     4,     0,
       5,     0,     0,     0,     0,     0,   158,     6,     0,     0,
       0,     0,     7,     0,     8
};

static const yytype_int16 yycheck[] =
{
      34,    35,    36,    37,     0,   128,    14,   135,    42,    43,
      37,    35,    36,    37,    10,    36,    37,    42,    43,    42,
      10,     0,    45,    57,    14,    59,     1,     2,     3,     4,
      45,    10,    57,    22,    59,    28,    29,    30,    22,    47,
      74,    75,    66,    77,   172,    66,    80,    74,    75,    22,
      74,    75,    86,    74,    75,    80,    31,    47,    42,    68,
      69,    45,    86,    22,    56,    99,    58,     0,     3,     4,
       5,     6,    11,   201,   197,    40,    22,    16,   112,    18,
      46,    43,    43,    22,    23,    24,    25,    22,    27,    39,
      86,    97,    42,    43,    47,    45,   130,   103,   104,    38,
     106,   135,   136,    22,    43,    41,    22,    46,    48,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,   125,
     126,    47,   128,    22,    22,    48,    41,   133,   134,    43,
     136,   137,    49,    26,    27,    28,    29,    30,   172,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    39,   158,   159,    42,    43,    22,    45,    44,    44,
     166,    43,    40,    11,    47,   199,    47,   201,    16,    48,
      18,   195,    48,    44,    22,    23,    24,    25,    48,    27,
       3,     4,     5,     6,    44,    40,    43,   193,    22,    43,
      38,   197,    40,   199,    43,    43,   202,    20,    43,    22,
       3,     4,     5,     6,     7,    43,    43,   213,    11,    12,
      13,    24,    48,    16,    17,    18,    19,    44,    21,    22,
      23,    24,    25,    41,    27,    26,    27,    28,    29,    30,
      31,    32,    33,    44,    43,    38,    44,    40,    40,     9,
      43,     7,    10,   112,    47,    11,    12,    13,    49,    44,
      16,    17,    18,    19,    44,    21,    22,    23,    24,    25,
      66,    27,   199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    38,    -1,    40,    -1,    16,    43,    18,    -1,
      -1,    47,    22,    23,    24,    25,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,    38,    16,
      -1,    18,    -1,    43,    44,    22,    23,    24,    25,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    38,    16,    -1,    18,    -1,    43,    44,    22,    23,
      24,    25,    -1,    27,    -1,    -1,    -1,    -1,   194,    -1,
      11,    -1,   198,    -1,    38,    16,    40,    18,    -1,    43,
      -1,    22,    23,    24,    25,   211,    27,    -1,   214,    -1,
      -1,    -1,   218,   219,    -1,    -1,    -1,    38,   224,    -1,
      -1,    -1,    43,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      49,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    20,    -1,    22,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    49,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    49,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      49,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    49,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      49,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    49,     3,     4,     5,     6,    -1,
       8,    -1,    -1,    -1,    -1,    -1,    49,    15,    -1,    -1,
      -1,    -1,    20,    -1,    22
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,    15,    20,    22,    51,
      52,    53,    54,    57,    59,    63,    66,    45,    58,    62,
      58,    58,    58,    22,    22,    22,    58,     0,    51,    40,
      22,    46,    10,    14,    47,    47,    43,    43,    58,    22,
      22,    65,    53,    59,    62,    64,    20,    57,    62,    67,
      54,    57,    60,    61,    62,    60,    14,    47,    41,    47,
      64,    64,    48,    22,    22,    48,    41,    22,    44,    44,
      65,    64,    65,    64,    43,    43,    61,    47,    68,    68,
      47,    48,    48,    60,    60,    62,    69,    64,    44,    44,
       7,    11,    12,    13,    16,    17,    18,    19,    21,    22,
      23,    24,    25,    27,    38,    40,    43,    53,    55,    62,
      68,    70,    71,    72,    73,    74,    75,    76,    77,    79,
      80,    82,    48,    40,    40,    43,    43,    43,    43,    43,
      22,    40,    79,    43,    39,    42,    43,    45,    56,    62,
      79,    79,    79,    48,    70,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    40,    49,    40,
      79,    79,    24,    78,    79,    44,    45,    62,    40,    79,
      79,    22,    42,    56,    62,    78,    81,    79,    44,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    40,    44,    41,    44,    41,    44,    43,
      44,    46,    40,    79,    71,    57,    40,    78,    71,    81,
      56,    44,    79,    40,     9,    44,    44,    71,    44,    44,
      79,    71,    71,    71,    44,    71
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
	printf("[shift]\n");
  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1464 of yacc.c  */
#line 29 "toy.y"
    {printf("[reduce 1]\n[accept]\n"); exit(0);}
    break;

  case 3:

/* Line 1464 of yacc.c  */
#line 30 "toy.y"
    {printf("[reduce 2]\n");}
    break;

  case 4:

/* Line 1464 of yacc.c  */
#line 32 "toy.y"
    {printf("[reduce 3]\n");}
    break;

  case 5:

/* Line 1464 of yacc.c  */
#line 33 "toy.y"
    {printf("[reduce 4]\n");}
    break;

  case 6:

/* Line 1464 of yacc.c  */
#line 34 "toy.y"
    {printf("[reduce 5]\n");}
    break;

  case 7:

/* Line 1464 of yacc.c  */
#line 35 "toy.y"
    {printf("[reduce 6]\n");}
    break;

  case 8:

/* Line 1464 of yacc.c  */
#line 37 "toy.y"
    {printf("[reduce 7]\n");}
    break;

  case 9:

/* Line 1464 of yacc.c  */
#line 39 "toy.y"
    {printf("[reduce 8]\n");}
    break;

  case 10:

/* Line 1464 of yacc.c  */
#line 41 "toy.y"
    {printf("[reduce 9]\n");}
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 43 "toy.y"
    {printf("[reduce 10]");}
    break;

  case 12:

/* Line 1464 of yacc.c  */
#line 44 "toy.y"
    {printf("[reduce 11]");}
    break;

  case 13:

/* Line 1464 of yacc.c  */
#line 45 "toy.y"
    {printf("[reduce 12]");}
    break;

  case 14:

/* Line 1464 of yacc.c  */
#line 47 "toy.y"
    {printf("[reduce 13]\n");}
    break;

  case 15:

/* Line 1464 of yacc.c  */
#line 48 "toy.y"
    {printf("[reduce 14]\n");}
    break;

  case 16:

/* Line 1464 of yacc.c  */
#line 49 "toy.y"
    {printf("[reduce 15]\n");}
    break;

  case 17:

/* Line 1464 of yacc.c  */
#line 50 "toy.y"
    {printf("[reduce 16]\n");}
    break;

  case 18:

/* Line 1464 of yacc.c  */
#line 51 "toy.y"
    {printf("[reduce 17]\n");}
    break;

  case 19:

/* Line 1464 of yacc.c  */
#line 53 "toy.y"
    {printf("[reduce 18]");}
    break;

  case 20:

/* Line 1464 of yacc.c  */
#line 54 "toy.y"
    {printf("[reduce 19]");}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 56 "toy.y"
    {printf("[reduce 20]\n");}
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 57 "toy.y"
    {printf("[reduce 21]\n");}
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 59 "toy.y"
    {printf("[reduce 22]\n");}
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 60 "toy.y"
    {printf("[reduce 23]\n");}
    break;

  case 25:

/* Line 1464 of yacc.c  */
#line 62 "toy.y"
    {printf("[reduce 24]\n");}
    break;

  case 26:

/* Line 1464 of yacc.c  */
#line 63 "toy.y"
    {printf("[reduce 25]\n");}
    break;

  case 27:

/* Line 1464 of yacc.c  */
#line 65 "toy.y"
    {printf("[reduce 26]\n");}
    break;

  case 28:

/* Line 1464 of yacc.c  */
#line 67 "toy.y"
    {printf("[reduce 27]\n");}
    break;

  case 29:

/* Line 1464 of yacc.c  */
#line 68 "toy.y"
    {printf("[reduce 28]\n");}
    break;

  case 30:

/* Line 1464 of yacc.c  */
#line 69 "toy.y"
    {printf("[reduce 29]\n");}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 70 "toy.y"
    {printf("[reduce 30]\n");}
    break;

  case 32:

/* Line 1464 of yacc.c  */
#line 72 "toy.y"
    {printf("[reduce 31]\n");}
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 73 "toy.y"
    {printf("[reduce 32]\n");}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 74 "toy.y"
    {printf("[reduce 33]\n");}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 76 "toy.y"
    {printf("[reduce 34]\n");}
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 77 "toy.y"
    {printf("[reduce 35]\n");}
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 79 "toy.y"
    {printf("[reduce 36]\n");}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 81 "toy.y"
    {printf("[reduce 37]\n");}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 82 "toy.y"
    {printf("[reduce 38]\n");}
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 83 "toy.y"
    {printf("[reduce 39]\n");}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 85 "toy.y"
    {printf("[reduce 40]\n");}
    break;

  case 42:

/* Line 1464 of yacc.c  */
#line 87 "toy.y"
    {printf("[reduce 41]\n");}
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 88 "toy.y"
    {printf("[reduce 42]\n");}
    break;

  case 44:

/* Line 1464 of yacc.c  */
#line 90 "toy.y"
    {printf("[reduce 43]\n");}
    break;

  case 45:

/* Line 1464 of yacc.c  */
#line 91 "toy.y"
    {printf("[reduce 44]\n");}
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 93 "toy.y"
    {printf("[reduce 45]\n");}
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 94 "toy.y"
    {printf("[reduce 46]\n");}
    break;

  case 48:

/* Line 1464 of yacc.c  */
#line 95 "toy.y"
    {printf("[reduce 47]\n");}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 96 "toy.y"
    {printf("[reduce 48]\n");}
    break;

  case 50:

/* Line 1464 of yacc.c  */
#line 97 "toy.y"
    {printf("[reduce 49]\n");}
    break;

  case 51:

/* Line 1464 of yacc.c  */
#line 98 "toy.y"
    {printf("[reduce 50]\n");}
    break;

  case 52:

/* Line 1464 of yacc.c  */
#line 99 "toy.y"
    {printf("[reduce 51]\n");}
    break;

  case 53:

/* Line 1464 of yacc.c  */
#line 100 "toy.y"
    {printf("[reduce 52]\n");}
    break;

  case 54:

/* Line 1464 of yacc.c  */
#line 101 "toy.y"
    {printf("[reduce 53]\n");}
    break;

  case 55:

/* Line 1464 of yacc.c  */
#line 103 "toy.y"
    {printf("[reduce 54]\n");}
    break;

  case 56:

/* Line 1464 of yacc.c  */
#line 104 "toy.y"
    {printf("[reduce 55]\n");}
    break;

  case 57:

/* Line 1464 of yacc.c  */
#line 106 "toy.y"
    {printf("[reduce 56]\n");}
    break;

  case 58:

/* Line 1464 of yacc.c  */
#line 108 "toy.y"
    {printf("[reduce 57]\n");}
    break;

  case 59:

/* Line 1464 of yacc.c  */
#line 109 "toy.y"
    {printf("[reduce 58]\n");}
    break;

  case 60:

/* Line 1464 of yacc.c  */
#line 110 "toy.y"
    {printf("[reduce 59]\n");}
    break;

  case 61:

/* Line 1464 of yacc.c  */
#line 111 "toy.y"
    {printf("[reduce 60]\n");}
    break;

  case 62:

/* Line 1464 of yacc.c  */
#line 113 "toy.y"
    {printf("[reduce 61]\n");}
    break;

  case 63:

/* Line 1464 of yacc.c  */
#line 115 "toy.y"
    {printf("[reduce 62]\n");}
    break;

  case 64:

/* Line 1464 of yacc.c  */
#line 116 "toy.y"
    {printf("[reduce 63]\n");}
    break;

  case 65:

/* Line 1464 of yacc.c  */
#line 118 "toy.y"
    {printf("[reduce 64]\n");}
    break;

  case 66:

/* Line 1464 of yacc.c  */
#line 120 "toy.y"
    {printf("[reduce 65]\n");}
    break;

  case 67:

/* Line 1464 of yacc.c  */
#line 121 "toy.y"
    {printf("[reduce 66]\n");}
    break;

  case 68:

/* Line 1464 of yacc.c  */
#line 123 "toy.y"
    {printf("[reduce 67]\n");}
    break;

  case 69:

/* Line 1464 of yacc.c  */
#line 124 "toy.y"
    {printf("[reduce 68]\n");}
    break;

  case 70:

/* Line 1464 of yacc.c  */
#line 125 "toy.y"
    {printf("[reduce 69]\n");}
    break;

  case 71:

/* Line 1464 of yacc.c  */
#line 126 "toy.y"
    {printf("[reduce 70]\n");}
    break;

  case 72:

/* Line 1464 of yacc.c  */
#line 127 "toy.y"
    {printf("[reduce 71]\n");}
    break;

  case 73:

/* Line 1464 of yacc.c  */
#line 128 "toy.y"
    {printf("[reduce 72]\n");}
    break;

  case 74:

/* Line 1464 of yacc.c  */
#line 129 "toy.y"
    {printf("[reduce 73]\n");}
    break;

  case 75:

/* Line 1464 of yacc.c  */
#line 130 "toy.y"
    {printf("[reduce 74]\n");}
    break;

  case 76:

/* Line 1464 of yacc.c  */
#line 131 "toy.y"
    {printf("[reduce 75]\n");}
    break;

  case 77:

/* Line 1464 of yacc.c  */
#line 132 "toy.y"
    {printf("[reduce 76]\n");}
    break;

  case 78:

/* Line 1464 of yacc.c  */
#line 133 "toy.y"
    {printf("[reduce 77]\n");}
    break;

  case 79:

/* Line 1464 of yacc.c  */
#line 134 "toy.y"
    {printf("[reduce 78]\n");}
    break;

  case 80:

/* Line 1464 of yacc.c  */
#line 135 "toy.y"
    {printf("[reduce 79]\n");}
    break;

  case 81:

/* Line 1464 of yacc.c  */
#line 136 "toy.y"
    {printf("[reduce 80]\n");}
    break;

  case 82:

/* Line 1464 of yacc.c  */
#line 137 "toy.y"
    {printf("[reduce 81]\n");}
    break;

  case 83:

/* Line 1464 of yacc.c  */
#line 138 "toy.y"
    {printf("[reduce 82]\n");}
    break;

  case 84:

/* Line 1464 of yacc.c  */
#line 139 "toy.y"
    {printf("[reduce 83]\n");}
    break;

  case 85:

/* Line 1464 of yacc.c  */
#line 140 "toy.y"
    {printf("[reduce 84]\n");}
    break;

  case 86:

/* Line 1464 of yacc.c  */
#line 141 "toy.y"
    {printf("[reduce 85]\n");}
    break;

  case 87:

/* Line 1464 of yacc.c  */
#line 142 "toy.y"
    {printf("[reduce 86]\n");}
    break;

  case 88:

/* Line 1464 of yacc.c  */
#line 143 "toy.y"
    {printf("[reduce 87]\n");}
    break;

  case 89:

/* Line 1464 of yacc.c  */
#line 144 "toy.y"
    {printf("[reduce 88]\n");}
    break;

  case 90:

/* Line 1464 of yacc.c  */
#line 146 "toy.y"
    {printf("[reduce 89]\n");}
    break;

  case 91:

/* Line 1464 of yacc.c  */
#line 147 "toy.y"
    {printf("[reduce 90]\n");}
    break;

  case 92:

/* Line 1464 of yacc.c  */
#line 149 "toy.y"
    {printf("[reduce 91]\n");}
    break;

  case 93:

/* Line 1464 of yacc.c  */
#line 150 "toy.y"
    {printf("[reduce 92]\n");}
    break;

  case 94:

/* Line 1464 of yacc.c  */
#line 152 "toy.y"
    {printf("[reduce 93]\n");}
    break;

  case 95:

/* Line 1464 of yacc.c  */
#line 153 "toy.y"
    {printf("[reduce 94]\n");}
    break;

  case 96:

/* Line 1464 of yacc.c  */
#line 154 "toy.y"
    {printf("[reduce 95]\n");}
    break;

  case 97:

/* Line 1464 of yacc.c  */
#line 155 "toy.y"
    {printf("[reduce 96]\n");}
    break;



/* Line 1464 of yacc.c  */
#line 2381 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1684 of yacc.c  */
#line 157 "toy.y"

int yyerror(char *s) {
	fprintf(stderr, "%s\n", s);
}

int main() {
	// print full lexer output
	//while(yylex()) {}
    yyparse();
}

