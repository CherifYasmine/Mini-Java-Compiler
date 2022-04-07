
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

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
#line 1 "minijava.y"

	

#include <stdio.h>	
 			
int yyerror(char const *msg);	
int yylex(void);
extern int line;



/* Line 189 of yacc.c  */
#line 85 "minijava.tab.c"

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
     CLASS = 258,
     PUBLIC = 259,
     STATIC = 260,
     VOID = 261,
     MAIN = 262,
     PSVM = 263,
     EXTENDS = 264,
     RETURN = 265,
     PRINT = 266,
     NEW = 267,
     BOOLEAN = 268,
     INT = 269,
     STRING = 270,
     IF = 271,
     ELSE = 272,
     WHILE = 273,
     LENGTH = 274,
     THIS = 275,
     POINT = 276,
     POINT_VIRGULE = 277,
     VIRGULE = 278,
     AFFECTATION = 279,
     OPERATOR = 280,
     ID = 281,
     NUMBER = 282,
     BOOL = 283,
     PARENTHESE_OUVRANTE = 284,
     PARENTHESE_FERMANTE = 285,
     BRACE_OUVRANTE = 286,
     BRACE_FERMANTE = 287,
     BRACKET_FERMANTE = 288,
     BRACKET_OUVRANTE = 289,
     NOT = 290
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 162 "minijava.tab.c"

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
# if YYENABLE_NLS
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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1032

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNRULES -- Number of states.  */
#define YYNSTATES  410

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

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
      35
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    19,    27,    35,    43,
      51,    54,    56,    59,    62,    65,    67,    70,    72,    75,
      77,    81,    85,    89,    92,    94,    98,   102,   106,   110,
     112,   126,   140,   154,   168,   182,   196,   210,   224,   238,
     242,   246,   250,   252,   254,   256,   258,   268,   278,   288,
     298,   308,   318,   328,   335,   342,   349,   356,   363,   370,
     377,   379,   391,   401,   411,   423,   435,   447,   459,   467,
     473,   481,   489,   497,   503,   509,   515,   521,   527,   532,
     537,   542,   547,   555,   563,   571,   579,   587,   595,   599,
     603,   608,   613,   618,   622,   626,   630,   637,   644,   651,
     658,   665,   667,   669,   671,   673,   675,   681,   687,   693,
     699,   705,   710,   715,   720,   725,   730,   733,   736,   740,
     744,   748,   751,   753,   757,   761,   763
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      37,     0,    -1,    50,    38,    -1,    39,    38,    -1,    56,
      -1,     3,    26,    40,    31,    41,    42,    32,    -1,     1,
      26,    40,    31,    41,    42,    32,    -1,     3,     1,    40,
      31,    41,    42,    32,    -1,     3,    26,    40,     1,    41,
      42,    32,    -1,     3,    26,    40,    31,    41,    42,     1,
      -1,     9,    26,    -1,    56,    -1,     1,    26,    -1,     3,
       1,    -1,    44,    41,    -1,    56,    -1,    48,    42,    -1,
      56,    -1,    52,    43,    -1,    56,    -1,    49,    26,    22,
      -1,    49,     1,    22,    -1,    49,    26,     1,    -1,    46,
      45,    -1,    56,    -1,    23,    49,    26,    -1,     1,    49,
      26,    -1,    23,    49,     1,    -1,    49,    26,    45,    -1,
      56,    -1,     4,    49,    26,    29,    47,    30,    31,    41,
      43,    10,    53,    22,    32,    -1,     1,    49,    26,    29,
      47,    30,    31,    41,    43,    10,    53,    22,    32,    -1,
       4,    49,     1,    29,    47,    30,    31,    41,    43,    10,
      53,    22,    32,    -1,     4,    49,    26,     1,    47,    30,
      31,    41,    43,    10,    53,    22,    32,    -1,     4,    49,
      26,    29,    47,     1,    31,    41,    43,    10,    53,    22,
      32,    -1,     4,    49,    26,    29,    47,    30,     1,    41,
      43,    10,    53,    22,    32,    -1,     4,    49,    26,    29,
      47,    30,    31,    41,    43,     1,    53,    22,    32,    -1,
       4,    49,    26,    29,    47,    30,    31,    41,    43,    10,
      53,     1,    32,    -1,     4,    49,    26,    29,    47,    30,
      31,    41,    43,    10,    53,    22,     1,    -1,    14,    34,
      33,    -1,    14,     1,    33,    -1,    14,    34,     1,    -1,
      13,    -1,    14,    -1,    26,    -1,     1,    -1,     3,    26,
      31,     8,    51,    31,    52,    32,    32,    -1,     1,    26,
      31,     8,    51,    31,    52,    32,    32,    -1,     3,     1,
      31,     8,    51,    31,    52,    32,    32,    -1,     3,    26,
       1,     8,    51,    31,    52,    32,    32,    -1,     3,    26,
      31,     8,    51,     1,    52,    32,    32,    -1,     3,    26,
      31,     8,    51,    31,    52,     1,    32,    -1,     3,    26,
      31,     8,    51,    31,    52,    32,     1,    -1,    29,    15,
      34,    33,    26,    30,    -1,     1,    15,    34,    33,    26,
      30,    -1,    29,     1,    34,    33,    26,    30,    -1,    29,
      15,     1,    33,    26,    30,    -1,    29,    15,    34,     1,
      26,    30,    -1,    29,    15,    34,    33,     1,    30,    -1,
      29,    15,    34,    33,    26,     1,    -1,    43,    -1,    16,
      29,    53,    30,    31,    52,    32,    17,    31,    52,    32,
      -1,    16,    29,    53,    30,    31,    52,    32,    17,    52,
      -1,    16,    29,    53,    30,    52,    17,    31,    52,    32,
      -1,     1,    29,    53,    30,    31,    52,    32,    17,    31,
      52,    32,    -1,    16,     1,    53,    30,    31,    52,    32,
      17,    31,    52,    32,    -1,    16,    29,    53,     1,    31,
      52,    32,    17,    31,    52,    32,    -1,    16,    29,    53,
      30,    31,    52,    32,     1,    31,    52,    32,    -1,    18,
      29,    53,    30,    31,    52,    32,    -1,    18,    29,    53,
      30,    52,    -1,     1,    29,    53,    30,    31,    52,    32,
      -1,    18,     1,    53,    30,    31,    52,    32,    -1,    18,
      29,    53,     1,    31,    52,    32,    -1,    11,    29,    53,
      30,    22,    -1,     1,    29,    53,    30,    22,    -1,    11,
       1,    53,    30,    22,    -1,    11,    29,    53,     1,    22,
      -1,    11,    29,    53,    30,     1,    -1,    26,    24,    53,
      22,    -1,     1,    24,    53,    22,    -1,    26,     1,    53,
      22,    -1,    26,    24,    53,     1,    -1,    26,    34,    53,
      33,    24,    53,    22,    -1,     1,    34,    53,    33,    24,
      53,    22,    -1,    26,     1,    53,    33,    24,    53,    22,
      -1,    26,    34,    53,     1,    24,    53,    22,    -1,    26,
      34,    53,    33,     1,    53,    22,    -1,    26,    34,    53,
      33,    24,    53,     1,    -1,    53,    25,    53,    -1,    53,
       1,    53,    -1,    53,    34,    53,    33,    -1,    53,     1,
      53,    33,    -1,    53,    34,    53,     1,    -1,    53,    21,
      19,    -1,    53,     1,    19,    -1,    53,    21,     1,    -1,
      53,    21,    26,    29,    54,    30,    -1,    53,     1,    26,
      29,    54,    30,    -1,    53,    21,     1,    29,    54,    30,
      -1,    53,    21,    26,     1,    54,    30,    -1,    53,    21,
      26,    29,    54,     1,    -1,    27,    -1,    28,    -1,    26,
      -1,    20,    -1,     1,    -1,    12,    14,    31,    53,    32,
      -1,     1,    14,    31,    53,    32,    -1,    12,     1,    31,
      53,    32,    -1,    12,    14,     1,    53,    32,    -1,    12,
      14,    31,    53,     1,    -1,    12,    26,    29,    30,    -1,
       1,    26,    29,    30,    -1,    12,     1,    29,    30,    -1,
      12,    26,     1,    30,    -1,    12,    26,    29,     1,    -1,
      35,    53,    -1,     1,    53,    -1,    29,    53,    30,    -1,
       1,    53,    30,    -1,    29,    53,     1,    -1,    53,    55,
      -1,    56,    -1,    23,    53,    55,    -1,     1,    53,    55,
      -1,    56,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    58,    58,    64,    65,    68,    69,    70,    71,    72,
      74,    75,    76,    77,    80,    81,    83,    84,    86,    87,
      89,    90,    91,    93,    94,    96,    97,    98,   100,   101,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   116,
     117,   118,   119,   120,   121,   122,   125,   126,   127,   128,
     129,   130,   131,   134,   135,   136,   137,   138,   139,   140,
     145,   146,   147,   148,   149,   150,   151,   152,   154,   155,
     156,   157,   158,   160,   161,   162,   163,   164,   166,   167,
     168,   169,   171,   172,   173,   174,   175,   176,   179,   180,
     182,   183,   184,   186,   187,   188,   190,   191,   192,   193,
     194,   197,   198,   199,   200,   201,   203,   204,   205,   206,
     207,   209,   210,   211,   212,   213,   215,   216,   218,   219,
     220,   223,   224,   226,   227,   228,   231
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CLASS", "PUBLIC", "STATIC", "VOID",
  "MAIN", "PSVM", "EXTENDS", "RETURN", "PRINT", "NEW", "BOOLEAN", "INT",
  "STRING", "IF", "ELSE", "WHILE", "LENGTH", "THIS", "POINT",
  "POINT_VIRGULE", "VIRGULE", "AFFECTATION", "OPERATOR", "ID", "NUMBER",
  "BOOL", "PARENTHESE_OUVRANTE", "PARENTHESE_FERMANTE", "BRACE_OUVRANTE",
  "BRACE_FERMANTE", "BRACKET_FERMANTE", "BRACKET_OUVRANTE", "NOT",
  "$accept", "program", "ClassDeclarationS", "ClassDeclaration",
  "EXTENDSID", "VarDeclarationS", "MethodDeclarationS", "STATEMENTS",
  "VarDeclaration", "ONEARGG", "ONEARG", "ARGS", "MethodDeclaration",
  "Type", "MainClass", "ARG", "STATEMENT", "EXPRESSION", "EXPAFTEREXP",
  "EXPRESSIONS", "epsilon", 0
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
     285,   286,   287,   288,   289,   290
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    39,    39,    39,
      40,    40,    40,    40,    41,    41,    42,    42,    43,    43,
      44,    44,    44,    45,    45,    46,    46,    46,    47,    47,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    49,
      49,    49,    49,    49,    49,    49,    50,    50,    50,    50,
      50,    50,    50,    51,    51,    51,    51,    51,    51,    51,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    54,    54,    55,    55,    55,    56
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     7,     7,     7,     7,     7,
       2,     1,     2,     2,     2,     1,     2,     1,     2,     1,
       3,     3,     3,     2,     1,     3,     3,     3,     3,     1,
      13,    13,    13,    13,    13,    13,    13,    13,    13,     3,
       3,     3,     1,     1,     1,     1,     9,     9,     9,     9,
       9,     9,     9,     6,     6,     6,     6,     6,     6,     6,
       1,    11,     9,     9,    11,    11,    11,    11,     7,     5,
       7,     7,     7,     5,     5,     5,     5,     5,     4,     4,
       4,     4,     7,     7,     7,     7,     7,     7,     3,     3,
       4,     4,     4,     3,     3,     3,     6,     6,     6,     6,
       6,     1,     1,     1,     1,     1,     5,     5,     5,     5,
       5,     4,     4,     4,     4,     4,     2,     2,     3,     3,
       3,     2,     1,     3,     3,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     2,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     3,     0,     0,     0,     0,     0,     0,     0,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    45,    42,     0,    44,     0,     0,
       0,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    60,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,     0,     0,     0,    40,
      41,    39,     0,     0,     6,    16,    21,    22,    20,     7,
       8,     9,     5,     0,     0,     0,     0,     0,     0,     0,
       0,   104,   103,   101,   102,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
      48,    49,    50,    51,    52,    46,     0,     0,     0,    54,
      55,    56,    57,    58,    59,    53,     0,   103,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,   119,     0,     0,     0,     0,     0,     0,     0,
     118,    94,   103,     0,    95,    93,     0,     0,     0,    74,
       0,     0,    75,    76,    77,    73,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,     0,     0,     0,   112,   113,     0,     0,     0,
     114,   115,   111,     0,    91,     0,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   107,
     108,   109,     0,   106,     0,     0,   122,     0,     0,     0,
      70,    83,     0,     0,     0,     0,    71,    72,    68,    84,
      85,    86,     0,    82,     0,     0,     0,    28,     0,    24,
       0,     0,     0,     0,     0,     0,     0,   121,   125,    97,
      98,    99,   100,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    63,    60,    26,
      27,    25,    60,    60,    60,    60,     0,   124,   123,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    65,    66,    67,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    11,    12,    29,    58,    85,   112,    59,   317,
     318,   248,    86,    60,     4,    35,   113,   223,   295,   327,
      76
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -324
static const yytype_int16 yypact[] =
{
     214,    -8,   116,   100,    62,    78,   119,   105,  -324,   133,
     150,  -324,    62,  -324,   192,   202,   257,   260,   280,   280,
     280,  -324,   140,   140,   140,   140,   139,   205,   261,   271,
    -324,   303,   106,   281,   254,   307,   312,   316,   130,  -324,
    -324,  -324,   820,   820,   820,   820,   258,   315,    11,   811,
     811,   811,   811,   811,  -324,  -324,    46,  -324,    98,   742,
     197,  -324,    98,    98,    98,   364,   365,   370,    16,   308,
     217,   221,   243,    77,  -324,   812,  -324,   831,   840,   844,
     853,   372,    24,  1006,  1006,   374,    98,  -324,  -324,   389,
     198,   386,   392,    47,   399,   406,   410,   413,   253,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   415,  -324,   776,   421,   433,   435,   993,    55,  -324,
    -324,  -324,   414,   277,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,   445,   448,   454,   456,   457,     0,    63,
     349,  -324,  -324,  -324,  -324,   506,   506,    12,   412,   218,
     554,   564,   571,   582,   585,   592,    10,   451,   599,  -324,
    -324,  -324,  -324,  -324,  -324,  -324,   416,   464,   259,  -324,
    -324,  -324,  -324,  -324,  -324,  -324,   465,   469,   215,   345,
     157,   265,   610,   252,   494,   195,  -324,   506,   506,    -3,
     420,   489,   388,   314,   481,   400,   964,   484,   429,   753,
    -324,   493,   128,  -324,   442,   142,   408,   408,   408,   408,
     506,   495,  -324,   497,   506,   506,   506,   498,    73,    93,
    -324,  -324,   490,   515,   502,  -324,   266,   529,   613,  -324,
     811,   506,  -324,  -324,  -324,  -324,   811,   811,   811,   986,
     811,   811,   811,   788,   506,   506,   506,   506,   509,   516,
    -324,   513,   523,    80,   620,  -324,  -324,   628,   636,   642,
    -324,  -324,  -324,    41,  -324,    41,    41,    41,   152,  -324,
     864,   458,   873,   876,   877,   525,   896,   899,   900,   650,
     657,   664,   672,   526,     6,   536,   550,   559,   161,  -324,
    -324,  -324,   332,  -324,   557,   530,  -324,   544,   565,   167,
     507,  -324,   580,   587,   107,   811,  -324,  -324,  -324,  -324,
    -324,  -324,   367,  -324,   975,  1006,  1006,  -324,     6,  -324,
     975,   975,   975,   975,   975,   494,   506,  -324,  -324,  -324,
    -324,  -324,  -324,  -324,   568,   577,   578,   594,   765,   918,
     995,   520,   347,  -324,   995,   995,   995,   995,   995,   543,
     557,   811,   811,   811,   811,   811,   799,  -324,   608,  -324,
    -324,  -324,   617,   618,   626,   629,   998,  -324,  -324,   919,
     922,   941,   942,   945,   506,   506,   506,   506,   506,   506,
     506,  -324,  -324,  -324,  -324,  -324,   679,   686,   694,   701,
     708,   716,   723,   570,   591,   598,   616,   623,   624,   462,
      72,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -324,  -324,   630,  -324,   237,     7,   318,   -47,  -324,   341,
    -324,   301,  -324,   -74,  -324,   546,   -29,   125,   763,  -323,
      -4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -127
static const yytype_int16 yytable[] =
{
      13,   174,    74,    74,    74,    74,    74,   315,    13,   122,
     123,   184,    67,   184,    30,    30,    30,    97,     5,   229,
      75,    77,    78,    79,    80,   120,   367,   368,   230,   316,
     175,   185,   200,   185,   186,   187,  -126,   187,    61,    61,
      61,    61,   139,   201,   188,    68,   188,    81,   131,    98,
      62,    63,    64,   140,    87,    61,   164,   121,    87,    87,
      87,   141,  -126,     9,   139,    10,    88,   142,   143,   144,
     145,  -126,   -43,   408,   261,   140,   146,   176,   108,   132,
      82,   287,    87,   141,  -105,  -105,  -105,   165,  -105,   177,
     143,   144,   145,  -105,   139,  -105,  -105,  -105,   146,    83,
       8,   109,    84,   262,   409,   140,    16,    44,   337,    14,
     288,   110,   221,   141,  -120,  -120,  -120,     6,  -120,   222,
     143,   144,   145,  -120,   338,  -120,  -120,  -120,   146,   139,
    -126,    52,   249,   249,   249,   249,    17,    45,   -81,   -81,
     140,    33,     7,   246,   -81,   -81,   -81,   221,   141,    74,
      15,    19,    74,   139,   222,   143,   144,   145,   215,    18,
     -81,    53,   323,   146,   140,    39,   247,   239,   332,    34,
     243,   221,   141,   -92,   -92,   -92,    20,   -92,   222,   143,
     144,   145,   -92,    74,   -92,   -92,   -92,   146,   216,    74,
      74,    74,   324,    74,    74,    74,   224,   333,    89,   127,
      22,   270,   250,   250,   250,   250,    40,   272,   273,   274,
      23,   276,   277,   278,   225,     1,   184,     2,   102,   184,
     128,   226,   104,    90,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   185,  -117,  -117,   185,
     187,   341,   342,   187,   106,   212,   103,  -117,  -117,   188,
     105,   190,   188,   184,   137,    47,    31,    32,    74,   296,
     208,   296,   296,   296,   178,    24,   217,   266,    25,    48,
     182,   183,   107,   185,  -116,  -116,   339,   187,   167,   138,
     319,    26,  -116,    27,  -116,  -116,   188,    41,   209,    28,
     328,    74,    65,   358,   218,   267,    46,   362,   363,   364,
     365,   366,    42,   168,    74,    74,    74,    74,    74,   356,
      61,  -126,   227,   228,   319,   234,    61,    61,    61,    61,
      61,   340,   369,   370,   371,   372,   373,   344,   345,   346,
     347,   348,    99,   139,    43,   254,   235,   100,    49,   257,
     258,   259,   101,    50,   140,   328,   328,    51,   360,    66,
     179,   221,   141,  -110,  -110,  -110,   271,  -110,   222,   143,
     144,   145,  -110,   180,  -110,  -110,  -110,   146,   139,   279,
     280,   281,   282,   361,   213,   181,   214,   -87,   -87,   140,
      91,    92,    93,   -87,   -87,   -87,   221,   141,   294,   139,
     294,   294,   294,   222,   143,   144,   145,    94,    95,   -87,
     140,   139,   146,    96,   125,   119,   124,   221,   141,    54,
     233,   126,   140,   184,   222,   143,   144,   145,   129,   221,
     141,    55,    56,   146,   130,   133,   222,   143,   144,   145,
     139,   237,   134,   185,    57,   146,   135,   187,  -126,   136,
     166,   140,   189,   139,   231,   206,   188,   159,   221,   141,
     349,   350,   202,   160,   140,   222,   143,   144,   145,   184,
     241,   221,   141,   139,   146,   161,   245,   162,   222,   143,
     144,   145,   185,   203,   140,   169,   187,   146,   170,   185,
     301,   221,   141,   187,   171,   188,   172,   173,   222,   143,
     144,   145,   188,   207,   407,   139,   210,   146,   211,   386,
     387,   388,   389,   390,   391,   392,   140,   139,   251,   252,
     253,   232,   236,   221,   141,   240,   184,   244,   140,   263,
     222,   143,   144,   145,   334,   255,   141,   256,   260,   146,
     184,   265,   142,   143,   144,   145,   185,   -89,   -89,   283,
     187,   146,   284,   285,   325,   -89,   359,   -89,   264,   188,
     185,   -88,   -88,   286,   187,   184,   305,   314,   325,   -88,
     329,   -88,   -88,   188,   185,   192,   326,   320,   187,    36,
      37,    38,   184,   -89,   330,   185,   264,   188,   185,   187,
     326,   321,   187,   195,   191,   185,   184,  -126,   188,   187,
     322,   188,   185,   198,   193,   331,   187,   335,   188,   351,
     204,   194,   401,   185,   336,   188,   185,   187,   352,   353,
     187,   219,   196,   185,   268,   197,   188,   187,   374,   188,
     185,   184,   199,   402,   187,   354,   188,   375,   376,   184,
     403,   185,   205,   188,   185,   187,   377,   184,   187,   378,
     220,   185,    21,   292,   188,   187,   269,   188,   404,   185,
       0,   184,   289,   187,   188,   405,   406,   185,   184,   343,
     290,   187,   188,   185,     0,   184,     0,   187,   291,     0,
     188,   185,   309,   312,   293,   187,   188,     0,   185,   310,
     184,     0,   187,     0,   188,   185,   311,   184,     0,   187,
       0,   188,     0,   185,   313,   184,     0,   187,   188,     0,
     185,   393,   184,     0,   187,     0,   188,   185,   394,   184,
       0,   187,     0,   188,     0,   185,   395,   184,     0,   187,
     188,     0,   185,   396,   399,     0,   187,     0,   188,   185,
     397,     0,     0,   187,     0,   188,     0,   185,   398,     0,
       0,   187,   188,    54,   185,   400,  -126,     0,   187,     0,
     188,     0,  -126,  -126,    69,    55,    56,   188,  -126,     0,
    -126,     0,     0,  -126,    70,     0,    69,     0,    57,    71,
    -126,    72,     0,     0,  -126,  -126,    70,    69,     0,    73,
       0,    71,  -126,    72,   242,  -126,  -126,    70,     0,    69,
       0,    73,    71,  -126,    72,     0,   355,  -126,   -69,    70,
      69,     0,    73,     0,    71,   -69,    72,     0,  -126,   -62,
      70,     0,    69,    69,    73,    71,   -62,    72,     0,     0,
     -69,    54,    70,    70,  -126,    73,     0,    71,    71,    72,
      72,   -62,    69,    55,    56,     0,     0,    73,    73,     0,
       0,    69,    70,  -126,   111,    69,    57,    71,     0,    72,
       0,    70,  -126,     0,   117,    70,    71,    73,    72,     0,
      71,     0,    72,   114,    70,    69,    73,     0,     0,    71,
      73,    72,   115,     0,    69,    70,   116,    69,    69,    73,
      71,     0,    72,     0,    70,   118,     0,    70,    70,    71,
      73,    72,    71,    71,    72,    72,   300,    69,     0,    73,
      69,    69,    73,    73,     0,   302,     0,    70,   303,   304,
      70,    70,    71,     0,    72,    71,    71,    72,    72,    69,
      69,     0,    73,    69,     0,    73,    73,     0,   306,    70,
      70,   307,   308,    70,    71,    71,    72,    72,    71,     0,
      72,     0,    69,    69,    73,    73,    69,     0,    73,     0,
     357,   381,    70,    70,   382,     0,    70,    71,    71,    72,
      72,    71,     0,    72,     0,    69,     0,    73,    73,     0,
       0,    73,     0,   383,   384,    70,    54,   385,     0,     0,
      71,  -126,    72,     0,     0,  -126,  -126,    69,    55,    56,
      73,  -126,     0,  -126,     0,   238,    69,    70,     0,   379,
       0,    57,    71,   275,    72,  -126,    70,    54,   380,   -60,
       0,    71,    73,    72,   -60,     0,   -60,    99,     0,    55,
      56,    73,   100,     0,   -60,   163,     0,   101,   297,   298,
     299,     0,    57
};

static const yytype_int16 yycheck[] =
{
       4,     1,    49,    50,    51,    52,    53,     1,    12,    83,
      84,     1,     1,     1,    18,    19,    20,     1,    26,    22,
      49,    50,    51,    52,    53,     1,   349,   350,    31,    23,
      30,    21,    22,    21,    22,    25,    30,    25,    42,    43,
      44,    45,     1,    33,    34,    34,    34,     1,     1,    33,
      43,    44,    45,    12,    58,    59,     1,    33,    62,    63,
      64,    20,     0,     1,     1,     3,    59,    26,    27,    28,
      29,    30,    26,     1,     1,    12,    35,    14,     1,    32,
      34,     1,    86,    20,    21,    22,    23,    32,    25,    26,
      27,    28,    29,    30,     1,    32,    33,    34,    35,     1,
       0,    24,     4,    30,    32,    12,     1,     1,     1,    31,
      30,    34,    19,    20,    21,    22,    23,     1,    25,    26,
      27,    28,    29,    30,    17,    32,    33,    34,    35,     1,
      32,     1,   206,   207,   208,   209,    31,    31,    10,    11,
      12,     1,    26,     1,    16,    17,    18,    19,    20,   196,
      31,     1,   199,     1,    26,    27,    28,    29,     1,    26,
      32,    31,     1,    35,    12,    26,    24,   196,     1,    29,
     199,    19,    20,    21,    22,    23,    26,    25,    26,    27,
      28,    29,    30,   230,    32,    33,    34,    35,    31,   236,
     237,   238,    31,   240,   241,   242,     1,    30,     1,     1,
       8,   230,   206,   207,   208,   209,     1,   236,   237,   238,
       8,   240,   241,   242,    19,     1,     1,     3,     1,     1,
      22,    26,     1,    26,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,    21,    22,    23,    21,
      25,   315,   316,    25,     1,    30,    29,    32,    33,    34,
      29,    33,    34,     1,     1,     1,    19,    20,   305,   263,
       1,   265,   266,   267,   139,     8,     1,     1,     8,    15,
     145,   146,    29,    21,    22,    23,   305,    25,     1,    26,
     284,     1,    30,     3,    32,    33,    34,    26,    29,     9,
     294,   338,    34,   340,    29,    29,    15,   344,   345,   346,
     347,   348,    31,    26,   351,   352,   353,   354,   355,   338,
     314,    31,   187,   188,   318,     1,   320,   321,   322,   323,
     324,   314,   351,   352,   353,   354,   355,   320,   321,   322,
     323,   324,    24,     1,    31,   210,    22,    29,    31,   214,
     215,   216,    34,    31,    12,   349,   350,    31,     1,    34,
       1,    19,    20,    21,    22,    23,   231,    25,    26,    27,
      28,    29,    30,    14,    32,    33,    34,    35,     1,   244,
     245,   246,   247,    26,    29,    26,    31,    10,    11,    12,
      62,    63,    64,    16,    17,    18,    19,    20,   263,     1,
     265,   266,   267,    26,    27,    28,    29,    33,    33,    32,
      12,     1,    35,    33,    86,    33,    32,    19,    20,     1,
      22,    22,    12,     1,    26,    27,    28,    29,    32,    19,
      20,    13,    14,    35,    32,    26,    26,    27,    28,    29,
       1,    31,    26,    21,    26,    35,    26,    25,    30,    26,
      26,    12,    30,     1,    24,    29,    34,    32,    19,    20,
     325,   326,     1,    32,    12,    26,    27,    28,    29,     1,
      31,    19,    20,     1,    35,    32,    24,    32,    26,    27,
      28,    29,    21,    22,    12,    30,    25,    35,    30,    21,
      22,    19,    20,    25,    30,    34,    30,    30,    26,    27,
      28,    29,    34,    29,    32,     1,    31,    35,    29,   374,
     375,   376,   377,   378,   379,   380,    12,     1,   207,   208,
     209,    22,    31,    19,    20,    31,     1,    24,    12,    29,
      26,    27,    28,    29,    17,    30,    20,    30,    30,    35,
       1,    29,    26,    27,    28,    29,    21,    22,    23,    30,
      25,    35,    26,    30,     1,    30,    26,    32,    33,    34,
      21,    22,    23,    30,    25,     1,    31,    31,     1,    30,
      30,    32,    33,    34,    21,     1,    23,    31,    25,    23,
      24,    25,     1,    30,    30,    21,    33,    34,    21,    25,
      23,    31,    25,     1,    30,    21,     1,    30,    34,    25,
      31,    34,    21,     1,    30,    30,    25,    17,    34,    31,
       1,    30,    32,    21,    17,    34,    21,    25,    31,    31,
      25,     1,    30,    21,     1,    30,    34,    25,    10,    34,
      21,     1,    30,    32,    25,    31,    34,    10,    10,     1,
      32,    21,    33,    34,    21,    25,    10,     1,    25,    10,
      30,    21,    12,     1,    34,    25,    33,    34,    32,    21,
      -1,     1,    32,    25,    34,    32,    32,    21,     1,   318,
      32,    25,    34,    21,    -1,     1,    -1,    25,    32,    -1,
      34,    21,    22,     1,    32,    25,    34,    -1,    21,    22,
       1,    -1,    25,    -1,    34,    21,    22,     1,    -1,    25,
      -1,    34,    -1,    21,    22,     1,    -1,    25,    34,    -1,
      21,    22,     1,    -1,    25,    -1,    34,    21,    22,     1,
      -1,    25,    -1,    34,    -1,    21,    22,     1,    -1,    25,
      34,    -1,    21,    22,     1,    -1,    25,    -1,    34,    21,
      22,    -1,    -1,    25,    -1,    34,    -1,    21,    22,    -1,
      -1,    25,    34,     1,    21,    22,     4,    -1,    25,    -1,
      34,    -1,    10,    11,     1,    13,    14,    34,    16,    -1,
      18,    -1,    -1,    10,    11,    -1,     1,    -1,    26,    16,
      17,    18,    -1,    -1,    32,    10,    11,     1,    -1,    26,
      -1,    16,    17,    18,    31,    32,    10,    11,    -1,     1,
      -1,    26,    16,    17,    18,    -1,    31,    32,    10,    11,
       1,    -1,    26,    -1,    16,    17,    18,    -1,    32,    10,
      11,    -1,     1,     1,    26,    16,    17,    18,    -1,    -1,
      32,     1,    11,    11,     4,    26,    -1,    16,    16,    18,
      18,    32,     1,    13,    14,    -1,    -1,    26,    26,    -1,
      -1,     1,    11,    32,    32,     1,    26,    16,    -1,    18,
      -1,    11,    32,    -1,     1,    11,    16,    26,    18,    -1,
      16,    -1,    18,    32,    11,     1,    26,    -1,    -1,    16,
      26,    18,    32,    -1,     1,    11,    32,     1,     1,    26,
      16,    -1,    18,    -1,    11,    32,    -1,    11,    11,    16,
      26,    18,    16,    16,    18,    18,    32,     1,    -1,    26,
       1,     1,    26,    26,    -1,    32,    -1,    11,    32,    32,
      11,    11,    16,    -1,    18,    16,    16,    18,    18,     1,
       1,    -1,    26,     1,    -1,    26,    26,    -1,    32,    11,
      11,    32,    32,    11,    16,    16,    18,    18,    16,    -1,
      18,    -1,     1,     1,    26,    26,     1,    -1,    26,    -1,
      32,    32,    11,    11,    32,    -1,    11,    16,    16,    18,
      18,    16,    -1,    18,    -1,     1,    -1,    26,    26,    -1,
      -1,    26,    -1,    32,    32,    11,     1,    32,    -1,    -1,
      16,    17,    18,    -1,    -1,    10,    11,     1,    13,    14,
      26,    16,    -1,    18,    -1,    31,     1,    11,    -1,     1,
      -1,    26,    16,    17,    18,    10,    11,     1,    10,    11,
      -1,    16,    26,    18,    16,    -1,    18,    24,    -1,    13,
      14,    26,    29,    -1,    26,    32,    -1,    34,   265,   266,
     267,    -1,    26
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    37,    50,    26,     1,    26,     0,     1,
       3,    38,    39,    56,    31,    31,     1,    31,    26,     1,
      26,    38,     8,     8,     8,     8,     1,     3,     9,    40,
      56,    40,    40,     1,    29,    51,    51,    51,    51,    26,
       1,    26,    31,    31,     1,    31,    15,     1,    15,    31,
      31,    31,     1,    31,     1,    13,    14,    26,    41,    44,
      49,    56,    41,    41,    41,    34,    34,     1,    34,     1,
      11,    16,    18,    26,    43,    52,    56,    52,    52,    52,
      52,     1,    34,     1,     4,    42,    48,    56,    41,     1,
      26,    42,    42,    42,    33,    33,    33,     1,    33,    24,
      29,    34,     1,    29,     1,    29,     1,    29,     1,    24,
      34,    32,    43,    52,    32,    32,    32,     1,    32,    33,
       1,    33,    49,    49,    32,    42,    22,     1,    22,    32,
      32,     1,    32,    26,    26,    26,    26,     1,    26,     1,
      12,    20,    26,    27,    28,    29,    35,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    32,
      32,    32,    32,    32,     1,    32,    26,     1,    26,    30,
      30,    30,    30,    30,     1,    30,    14,    26,    53,     1,
      14,    26,    53,    53,     1,    21,    22,    25,    34,    30,
      33,    30,     1,    30,    30,     1,    30,    30,     1,    30,
      22,    33,     1,    22,     1,    33,    29,    29,     1,    29,
      31,    29,    30,    29,    31,     1,    31,     1,    29,     1,
      30,    19,    26,    53,     1,    19,    26,    53,    53,    22,
      31,    24,    22,    22,     1,    22,    31,    31,    31,    52,
      31,    31,    31,    52,    24,    24,     1,    24,    47,    49,
      56,    47,    47,    47,    53,    30,    30,    53,    53,    53,
      30,     1,    30,    29,    33,    29,     1,    29,     1,    33,
      52,    53,    52,    52,    52,    17,    52,    52,    52,    53,
      53,    53,    53,    30,    26,    30,    30,     1,    30,    32,
      32,    32,     1,    32,    53,    54,    56,    54,    54,    54,
      32,    22,    32,    32,    32,    31,    32,    32,    32,    22,
      22,    22,     1,    22,    31,     1,    23,    45,    46,    56,
      31,    31,    31,     1,    31,     1,    23,    55,    56,    30,
      30,    30,     1,    30,    17,    17,    17,     1,    17,    52,
      41,    49,    49,    45,    41,    41,    41,    41,    41,    53,
      53,    31,    31,    31,    31,    31,    52,    32,    43,    26,
       1,    26,    43,    43,    43,    43,    43,    55,    55,    52,
      52,    52,    52,    52,    10,    10,    10,    10,    10,     1,
      10,    32,    32,    32,    32,    32,    53,    53,    53,    53,
      53,    53,    53,    22,    22,    22,    22,    22,    22,     1,
      22,    32,    32,    32,    32,    32,    32,    32,     1,    32
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
# if YYLTYPE_IS_TRIVIAL
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
        case 6:

/* Line 1455 of yacc.c  */
#line 69 "minijava.y"
    {yyerror ("erreur mot cle class errone "); YYABORT;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 70 "minijava.y"
    {yyerror ("erreur identifier errone "); YYABORT;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 71 "minijava.y"
    {yyerror ("erreur acolade ouvarnte  manquant "); YYABORT;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 72 "minijava.y"
    {yyerror (" erreur acolade fermante  manquant "); YYABORT;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 76 "minijava.y"
    {yyerror (" mot cle EXTENDS manquant ou bien errone "); YYABORT;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 77 "minijava.y"
    {yyerror ("erreur identifier errone "); YYABORT;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 90 "minijava.y"
    {yyerror ("erreur identifier errone "); YYABORT;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 91 "minijava.y"
    {yyerror ("POINT_VIRGULE  manquant "); YYABORT;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 97 "minijava.y"
    {yyerror ("VIRGULE manquant "); YYABORT;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 98 "minijava.y"
    {yyerror ("identifier errone "); YYABORT;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 104 "minijava.y"
    {yyerror ("mot clee class manquant ou errone "); YYABORT;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 105 "minijava.y"
    {yyerror ("erreur identifier errone "); YYABORT;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 106 "minijava.y"
    {yyerror ("erreur parenthese ouvarnte  manquante "); YYABORT;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 107 "minijava.y"
    {yyerror ("erreur parenthese fermante  manquante "); YYABORT;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 108 "minijava.y"
    {yyerror ("acolade ouvrant  manquant "); YYABORT;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 109 "minijava.y"
    {yyerror ("mot clee return manquant ou errone "); YYABORT;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 110 "minijava.y"
    {yyerror ("POINT_VIRGULE manquant  "); YYABORT;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 111 "minijava.y"
    {yyerror ("acolade fermant  manquante "); YYABORT;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 117 "minijava.y"
    {yyerror ("erreur bracket ouvrante manquante "); YYABORT;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 118 "minijava.y"
    {yyerror ("erreur bracket fermante manquante "); YYABORT;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 122 "minijava.y"
    {yyerror ("erreur de type "); YYABORT;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 126 "minijava.y"
    {yyerror ("mot cle CLASS errone ou bien manquant on ligne "); YYABORT;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 127 "minijava.y"
    {yyerror ("erreur identifier errone "); YYABORT;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 128 "minijava.y"
    {yyerror ("acolade ouvrante manquante "); YYABORT;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 129 "minijava.y"
    {yyerror ("acolade ouvrante manquante "); YYABORT;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 130 "minijava.y"
    {yyerror ("acolade fermante  manquante dans la ligne:"); YYABORT;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 131 "minijava.y"
    {yyerror ("acolade fermante  manquante "); YYABORT;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 135 "minijava.y"
    {yyerror ("parenthese ouvrante manquante "); YYABORT;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 136 "minijava.y"
    {yyerror ("erreur mot cle String errone  "); YYABORT;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 137 "minijava.y"
    {yyerror ("bracket ouvrante manquante "); YYABORT;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 138 "minijava.y"
    {yyerror ("bracket fermante manquante "); YYABORT;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 139 "minijava.y"
    {yyerror ("erreur identifier errone "); YYABORT;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 140 "minijava.y"
    {yyerror ("parenthese  fermant manquant "); YYABORT;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 149 "minijava.y"
    {yyerror ("mot cle IF errone ou bien manquant on ligne "); YYABORT;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 150 "minijava.y"
    {yyerror ("parenthese  ouvrante manquant "); YYABORT;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 151 "minijava.y"
    {yyerror ("parenthese  fermante manquant "); YYABORT;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 152 "minijava.y"
    {yyerror ("mot cle ELSE errone ou bien manquant on ligne "); YYABORT;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 156 "minijava.y"
    {yyerror ("mot cle WHILE errone ou bien manquant on ligne "); YYABORT;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 157 "minijava.y"
    {yyerror ("parenthese  ouvrante manquant "); YYABORT;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 158 "minijava.y"
    {yyerror ("parenthese  fermante manquant "); YYABORT;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 161 "minijava.y"
    {yyerror ("system.out.println errone ou bien manquant on ligne "); YYABORT;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 162 "minijava.y"
    {yyerror ("parenthese  ouvrante manquant "); YYABORT;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 163 "minijava.y"
    {yyerror ("parenthese  fermante manquant "); YYABORT;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 164 "minijava.y"
    {yyerror ("POINT_VIRGULE  manquant "); YYABORT;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 167 "minijava.y"
    {yyerror ("erreur identifier errone "); YYABORT;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 168 "minijava.y"
    {yyerror ("AFFECTATION errone "); YYABORT;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 169 "minijava.y"
    {yyerror ("POINT_VIRGULE  manquant "); YYABORT;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 172 "minijava.y"
    {yyerror ("erreur identifier errone "); YYABORT;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 173 "minijava.y"
    {yyerror ("erreur bracket ouvrante manquante "); YYABORT;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 174 "minijava.y"
    {yyerror ("erreur bracket fermante manquante "); YYABORT;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 175 "minijava.y"
    {yyerror ("AFFECTATION errone "); YYABORT;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 176 "minijava.y"
    {yyerror ("POINT_VIRGULE  manquant "); YYABORT;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 180 "minijava.y"
    {yyerror ("operateur manquant "); YYABORT;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 183 "minijava.y"
    {yyerror ("erreur bracket ouvrante manquante "); YYABORT;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 184 "minijava.y"
    {yyerror ("erreur bracket fermante manquante "); YYABORT;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 187 "minijava.y"
    {yyerror ("POINT manquant "); YYABORT;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 188 "minijava.y"
    {yyerror ("mot cle LENGTH manquant "); YYABORT;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 191 "minijava.y"
    {yyerror ("POINT manquant "); YYABORT;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 192 "minijava.y"
    {yyerror ("erreur identifier errone "); YYABORT;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 193 "minijava.y"
    {yyerror ("erreur parenthese ouvarnte  manquante "); YYABORT;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 194 "minijava.y"
    {yyerror ("erreur parenthese fermante  manquante "); YYABORT;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 201 "minijava.y"
    {yyerror ("erreur "); YYABORT;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 204 "minijava.y"
    {yyerror ("mot cle NEW manquant ou bien errone "); YYABORT;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 205 "minijava.y"
    {yyerror ("mot cle int manquant ou bien errone "); YYABORT;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 206 "minijava.y"
    {yyerror ("erreur acolade ouvarnte  manquante "); YYABORT;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 207 "minijava.y"
    {yyerror ("erreur acolade fermante  manquante "); YYABORT;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 210 "minijava.y"
    {yyerror ("mot cle NEW manquant ou bien errone "); YYABORT;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 211 "minijava.y"
    {yyerror ("erreur identifier errone "); YYABORT;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 212 "minijava.y"
    {yyerror ("erreur parenthese ouvarnte  manquante "); YYABORT;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 213 "minijava.y"
    {yyerror ("erreur parenthese fermante  manquante "); YYABORT;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 216 "minijava.y"
    {yyerror ("erreur "); YYABORT;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 219 "minijava.y"
    {yyerror ("erreur parenthese ouvarnte  manquante "); YYABORT;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 220 "minijava.y"
    {yyerror ("erreur parenthese fermante  manquante "); YYABORT;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 227 "minijava.y"
    {yyerror ("erreur VIRGULE manquante "); YYABORT;}
    break;



/* Line 1455 of yacc.c  */
#line 2327 "minijava.tab.c"
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



/* Line 1675 of yacc.c  */
#line 236 "minijava.y"
 

int yyerror(char const *msg) {
	fprintf(stderr, "%s a la ligne %d\n", msg,line);
	return 0;	
}

extern FILE *yyin;

int main()
{
 yyparse();
 
}
