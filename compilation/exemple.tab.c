
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
#line 1 "exemple.y"

   
    #include <stdio.h>
	#include <stdlib.h>
	int yylex(void);
	void yyerror(char*);

	int outputSyntaxique = 1;	// flag qui permet d'afficher(1)/masquer(0) les messages de l'analyseur syntaxique, par défaut (1)
		/* fonction qui affiche un message passe en parametre */
	void output_syn(const char* msg) {
		if(outputSyntaxique == 1) {
			printf("Analyseur syntaxique: %s\n", msg);
		}
	}



/* Line 189 of yacc.c  */
#line 91 "exemple.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
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
     ID = 258,
     NB = 259,
     OPADD = 260,
     OPAFFECT = 261,
     OPMUL = 262,
     OPREL = 263,
     BEGIN_TOKEN = 264,
     DO = 265,
     ELSE = 266,
     END = 267,
     FUNCTION = 268,
     IF = 269,
     NOT = 270,
     PROCEDURE = 271,
     PROGRAM = 272,
     THEN = 273,
     VAR = 274,
     WHILE = 275,
     INTEGER = 276,
     READ = 277,
     WRITE = 278,
     DEUX_POINTS = 279,
     ARRAY = 280,
     POINT_VIRGULE = 281,
     VIRGULE = 282,
     CHAINE = 283,
     INT = 284,
     PARENTHESE_OUVRANTE = 285,
     PARENTHESE_FERMANTE = 286,
     COMMENTAIRE = 287
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
#line 165 "exemple.tab.c"

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   494

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  136
/* YYNRULES -- Number of states.  */
#define YYNSTATES  249

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    33,     2,    34,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    12,    18,    23,    27,    31,    35,
      38,    45,    46,    47,    55,    56,    64,    65,    73,    74,
      82,    89,    91,    95,    96,   101,   105,   109,   110,   114,
     118,   121,   122,   127,   131,   138,   139,   147,   148,   156,
     157,   165,   166,   174,   181,   186,   187,   193,   198,   202,
     203,   208,   212,   213,   215,   219,   220,   225,   226,   231,
     235,   239,   240,   245,   249,   254,   258,   259,   264,   268,
     270,   273,   277,   280,   284,   286,   288,   295,   296,   304,
     305,   313,   314,   322,   327,   328,   330,   332,   333,   339,
     344,   349,   351,   355,   356,   361,   365,   367,   371,   372,
     377,   378,   383,   387,   389,   392,   393,   397,   401,   402,
     407,   408,   413,   417,   419,   423,   424,   429,   430,   435,
     439,   441,   446,   447,   453,   458,   462,   464,   468,   469,
     473,   477,   478,   483,   486,   488,   490
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      36,     0,    -1,    17,     3,    26,    -1,    17,     3,    26,
      37,    -1,    17,     3,    26,    37,    61,    -1,    17,     3,
      26,    61,    -1,     1,     3,    26,    -1,    17,     1,    26,
      -1,    17,     3,     1,    -1,    38,    45,    -1,    38,    19,
      43,    24,    21,    26,    -1,    -1,    -1,    38,     1,    39,
      43,    24,    21,    26,    -1,    -1,    38,    19,     1,    40,
      24,    21,    26,    -1,    -1,    38,    19,    43,     1,    41,
      21,    26,    -1,    -1,    38,    19,    43,    24,     1,    42,
      26,    -1,    38,    19,    43,    24,    21,     1,    -1,     3,
      -1,    43,    26,     3,    -1,    -1,    43,     1,    44,     3,
      -1,    43,    26,     1,    -1,    45,    46,    26,    -1,    -1,
      45,    46,     1,    -1,    48,    37,    61,    -1,    48,    61,
      -1,    -1,     1,    47,    37,    61,    -1,    48,    37,     1,
      -1,    13,     3,    54,    24,    29,    26,    -1,    -1,     1,
      49,     3,    54,    24,    29,    26,    -1,    -1,    13,     1,
      50,    54,    24,    29,    26,    -1,    -1,    13,     3,    54,
       1,    51,    29,    26,    -1,    -1,    13,     3,    54,    24,
       1,    52,    26,    -1,    13,     3,    54,    24,    29,     1,
      -1,    16,     3,    54,    26,    -1,    -1,    16,     1,    53,
      54,    26,    -1,    16,     3,    54,     1,    -1,    30,    56,
      31,    -1,    -1,     1,    55,    56,    31,    -1,    30,    56,
       1,    -1,    -1,    59,    -1,    56,    26,    59,    -1,    -1,
      56,     1,    57,    59,    -1,    -1,     1,    58,    26,    59,
      -1,    56,    26,     1,    -1,     3,    24,    21,    -1,    -1,
       1,    60,    24,    21,    -1,     3,    24,     1,    -1,    19,
       3,    24,    21,    -1,     9,    63,    12,    -1,    -1,     1,
      62,    63,    12,    -1,     9,    63,     1,    -1,    64,    -1,
      65,    26,    -1,    64,    65,    26,    -1,    65,     1,    -1,
      69,     6,    74,    -1,    70,    -1,    61,    -1,    14,    74,
      18,    65,    11,    65,    -1,    -1,     1,    66,    74,    18,
      65,    11,    65,    -1,    -1,    14,    74,     1,    67,    65,
      11,    65,    -1,    -1,    14,    74,    18,    65,     1,    68,
      65,    -1,    20,    74,    10,    65,    -1,    -1,     3,    -1,
       3,    -1,    -1,     3,     1,    71,    72,    31,    -1,     3,
      30,    72,    31,    -1,     3,    30,    72,     1,    -1,    74,
      -1,    72,    27,    74,    -1,    -1,    72,     1,    73,    74,
      -1,    72,    27,     1,    -1,    77,    -1,    77,     8,    77,
      -1,    -1,     1,    75,     8,    77,    -1,    -1,    77,     1,
      76,    77,    -1,    77,     8,     1,    -1,    81,    -1,    88,
       1,    -1,    -1,     1,    78,    81,    -1,    77,     5,    81,
      -1,    -1,     1,    79,     5,    81,    -1,    -1,    77,     1,
      80,    81,    -1,    77,     5,     1,    -1,    84,    -1,    81,
       7,    84,    -1,    -1,     1,    82,     7,    84,    -1,    -1,
      81,     1,    83,    84,    -1,    81,     7,     1,    -1,     3,
      -1,     3,    30,    72,    31,    -1,    -1,     3,     1,    85,
      72,    31,    -1,     3,    30,    72,     1,    -1,     3,    30,
      31,    -1,     4,    -1,    30,    74,    31,    -1,    -1,     1,
      86,    74,    -1,    30,    74,     1,    -1,    -1,    30,     1,
      87,    31,    -1,    15,    84,    -1,    28,    -1,    33,    -1,
      34,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    60,    60,    63,    67,    73,    78,    79,    80,    83,
      87,    95,    98,    97,   107,   105,   114,   111,   122,   118,
     126,   136,   137,   142,   141,   144,   151,   154,   156,   162,
     166,   169,   169,   173,   182,   191,   191,   200,   199,   209,
     206,   217,   213,   220,   227,   233,   232,   238,   248,   251,
     251,   254,   257,   261,   262,   266,   265,   268,   268,   271,
     276,   279,   279,   282,   285,   292,   295,   295,   298,   304,
     308,   309,   311,   316,   319,   320,   321,   327,   327,   336,
     334,   344,   340,   346,   350,   354,   358,   360,   359,   363,
     367,   375,   376,   380,   379,   382,   388,   389,   392,   392,
     396,   395,   398,   404,   405,   407,   407,   409,   413,   413,
     417,   416,   419,   425,   426,   429,   429,   433,   432,   435,
     441,   442,   447,   446,   450,   455,   459,   461,   464,   464,
     467,   472,   471,   474,   476,   480,   481
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NB", "OPADD", "OPAFFECT", "OPMUL",
  "OPREL", "BEGIN_TOKEN", "DO", "ELSE", "END", "FUNCTION", "IF", "NOT",
  "PROCEDURE", "PROGRAM", "THEN", "VAR", "WHILE", "INTEGER", "READ",
  "WRITE", "DEUX_POINTS", "ARRAY", "POINT_VIRGULE", "VIRGULE", "CHAINE",
  "INT", "PARENTHESE_OUVRANTE", "PARENTHESE_FERMANTE", "COMMENTAIRE",
  "'+'", "'-'", "$accept", "programmes", "declaration", "declaration_var",
  "$@1", "$@2", "$@3", "$@4", "liste_identificateurs", "$@5",
  "declarations_sous_programmes", "declarations_sous_programme", "$@6",
  "entete_sous_programme", "$@7", "$@8", "$@9", "$@10", "$@11",
  "arguments", "$@12", "liste_parametres", "$@13", "$@14", "parametre",
  "$@15", "instruction_composee", "$@16", "instructions_optionnelles",
  "liste_instructions", "instruction", "$@17", "$@18", "$@19", "variable",
  "appel_de_procedure", "$@20", "liste_expressions", "$@21", "expression",
  "$@22", "$@23", "expression_simple", "$@24", "$@25", "$@26", "terme",
  "$@27", "$@28", "facteur", "$@29", "$@30", "$@31", "signe", 0
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
     285,   286,   287,    43,    45
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    36,    36,    36,    36,    36,    36,    37,
      38,    38,    39,    38,    40,    38,    41,    38,    42,    38,
      38,    43,    43,    44,    43,    43,    45,    45,    45,    46,
      46,    47,    46,    46,    48,    49,    48,    50,    48,    51,
      48,    52,    48,    48,    48,    53,    48,    48,    54,    55,
      54,    54,    54,    56,    56,    57,    56,    58,    56,    56,
      59,    60,    59,    59,    59,    61,    62,    61,    61,    63,
      64,    64,    64,    65,    65,    65,    65,    66,    65,    67,
      65,    68,    65,    65,    65,    69,    70,    71,    70,    70,
      70,    72,    72,    73,    72,    72,    74,    74,    75,    74,
      76,    74,    74,    77,    77,    78,    77,    77,    79,    77,
      80,    77,    77,    81,    81,    82,    81,    83,    81,    81,
      84,    84,    85,    84,    84,    84,    84,    84,    86,    84,
      84,    87,    84,    84,    84,    88,    88
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     4,     5,     4,     3,     3,     3,     2,
       6,     0,     0,     7,     0,     7,     0,     7,     0,     7,
       6,     1,     3,     0,     4,     3,     3,     0,     3,     3,
       2,     0,     4,     3,     6,     0,     7,     0,     7,     0,
       7,     0,     7,     6,     4,     0,     5,     4,     3,     0,
       4,     3,     0,     1,     3,     0,     4,     0,     4,     3,
       3,     0,     4,     3,     4,     3,     0,     4,     3,     1,
       2,     3,     2,     3,     1,     1,     6,     0,     7,     0,
       7,     0,     7,     4,     0,     1,     1,     0,     5,     4,
       4,     1,     3,     0,     4,     3,     1,     3,     0,     4,
       0,     4,     3,     1,     2,     0,     3,     3,     0,     4,
       0,     4,     3,     1,     3,     0,     4,     0,     4,     3,
       1,     4,     0,     5,     4,     3,     1,     3,     0,     3,
       3,     0,     4,     2,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     1,     6,     7,
       8,     0,    66,     0,     0,     0,     5,     0,    66,     0,
       0,     0,    75,     0,     0,     0,     0,    74,     4,    12,
       0,     0,     0,     0,    87,     0,   105,     0,   126,     0,
     134,     0,   135,   136,     0,     0,     0,   113,     0,     0,
      68,    65,     0,    72,    70,     0,     0,    14,    21,     0,
      31,     0,     0,     0,     0,    67,     0,     0,     0,    91,
       0,     0,     0,     0,     0,   122,     0,   128,   133,   105,
       0,    79,     0,   100,     0,     0,   117,     0,   104,     0,
      71,    73,     0,     0,    16,     0,     0,    11,     0,    37,
       0,    45,     0,    28,    26,     0,    30,     0,     0,    93,
       0,    89,     0,   128,     0,     0,     0,   129,     0,   125,
       0,     0,   130,   127,     0,     0,     0,     0,   112,     0,
     102,     0,     0,   119,   114,    83,    23,     0,     0,     0,
       0,    18,     0,    25,    22,     0,     0,     0,    49,     0,
       0,     0,     0,    66,    29,     0,    93,    88,     0,   105,
      92,   105,     0,     0,   116,     0,   124,   121,   132,     0,
      81,     0,     0,     0,   110,   118,     0,     0,     0,    24,
       0,    20,    10,    32,     0,     0,     0,    57,     0,     0,
       0,    53,    39,     0,     0,    47,    44,     0,    94,   123,
       0,     0,    76,    13,    15,    17,    19,     0,     0,     0,
       0,     0,     0,     0,    51,     0,    48,     0,    41,     0,
      46,    78,    80,    82,     0,     0,    55,    50,     0,     0,
      63,    60,     0,     0,    59,    54,     0,     0,    43,    34,
      36,    38,    61,    58,    62,    64,    56,    40,    42
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    14,    15,    56,    93,   139,   180,    59,   140,
      31,    63,    97,    64,    98,   147,   217,   237,   151,   150,
     186,   190,   233,   210,   191,   211,    22,    17,    23,    24,
      25,    33,   124,   201,    26,    27,    67,    68,   158,    69,
      70,   126,    45,    71,    72,   127,    46,    73,   132,    47,
     118,    74,   121,    48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -204
static const yytype_int16 yypact[] =
{
     213,    67,    25,   130,    -3,   117,    31,  -204,  -204,  -204,
    -204,   444,  -204,   429,   371,   458,  -204,   429,   116,   173,
      71,    71,  -204,    19,   408,    92,   160,  -204,  -204,  -204,
     210,   478,   163,    71,  -204,    71,   127,   231,  -204,   375,
    -204,    91,  -204,  -204,   147,   245,   259,  -204,   177,   196,
    -204,  -204,   192,  -204,  -204,    71,   237,  -204,  -204,   184,
     241,   244,   272,   126,   388,  -204,   230,    71,     6,  -204,
     243,   391,   249,   252,    71,  -204,    12,  -204,  -204,    82,
      28,  -204,   461,  -204,   395,   108,  -204,   411,  -204,   426,
    -204,  -204,   199,   255,   262,   150,   286,  -204,   265,  -204,
      72,  -204,    84,  -204,  -204,    68,  -204,   461,    20,    77,
     125,  -204,   153,   275,   273,   391,   375,  -204,    71,  -204,
      23,   270,  -204,  -204,   461,   232,   153,   391,   194,   287,
     201,   301,   375,   194,  -204,  -204,  -204,   282,   289,   294,
     290,  -204,   181,  -204,  -204,    75,    72,    72,  -204,   161,
     121,    84,   193,   200,  -204,   285,  -204,  -204,    71,   162,
    -204,    74,   315,   329,  -204,    37,   187,  -204,  -204,   296,
    -204,   426,   343,   357,  -204,  -204,   291,   295,   298,  -204,
     303,  -204,  -204,  -204,   307,   311,   161,   314,   319,   342,
       8,  -204,  -204,    51,   323,  -204,  -204,   426,  -204,  -204,
     426,   426,  -204,  -204,  -204,  -204,  -204,   328,   330,    40,
     326,   339,   171,   349,   114,   399,  -204,   337,  -204,   211,
    -204,  -204,  -204,  -204,   351,   355,  -204,  -204,   447,   361,
    -204,  -204,   364,   447,   314,  -204,   360,   365,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -204,  -204,   -53,  -204,  -204,  -204,  -204,  -204,   331,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,   -84,
    -204,   207,  -204,  -204,  -203,  -204,    -8,  -204,   396,  -204,
     -24,  -204,  -204,  -204,  -204,  -204,  -204,   -57,  -204,   -19,
    -204,  -204,   -77,  -204,  -204,  -204,   -67,  -204,  -204,   -34,
    -204,  -204,  -204,  -204
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -132
static const yytype_int16 yytable[] =
{
      52,    44,    49,    16,   114,    78,    28,   109,   131,   214,
     108,   105,   235,    36,    66,    37,    38,   129,   152,   120,
      50,   156,    80,     8,   166,   243,     5,    39,     6,   122,
     246,    51,    10,   110,   215,   162,    91,   111,   156,   216,
      40,   226,    41,   119,   145,    42,    43,   110,   163,   172,
     110,   157,   218,   134,   167,   117,   106,    11,   125,   123,
     173,   165,   184,   185,   110,   135,   215,   194,   199,   153,
       4,   227,    36,   148,    37,    38,    12,    13,   -90,  -108,
     219,  -115,   164,   155,    13,   148,    39,  -108,   -90,  -115,
     -98,   160,    79,    53,    37,    38,   -52,   154,   175,    40,
     169,    41,   149,   -90,    42,    43,    39,  -128,  -128,   130,
     -52,    37,    38,  -131,   149,  -128,  -128,   -55,    54,    40,
     -77,    41,   192,    39,    42,    43,   159,   103,    37,    38,
       7,   -77,  -108,   -55,  -115,   -98,    40,   183,    41,   198,
      39,    42,    43,     9,   -77,   193,   -77,   202,    81,   -77,
     -77,   141,   104,    40,   161,    41,    37,    38,    42,    43,
    -128,  -128,   187,   -95,   188,    82,    55,  -108,    39,  -115,
     -98,   142,   230,   221,    34,    65,   222,   223,    88,   -85,
     189,    40,   181,    41,   -86,    94,    42,    43,   -93,   -95,
     -93,   -93,   231,   -95,   195,  -128,  -128,  -128,  -128,   -86,
     136,   -33,   -93,    35,  -105,  -105,    89,   182,    95,  -128,
      96,    57,   238,    58,     1,   -93,  -105,   -93,    90,   196,
     -93,   -93,  -128,   137,  -128,    96,   -33,  -128,  -128,  -105,
       2,  -105,    75,   170,  -128,  -128,  -120,   239,  -120,  -120,
      58,  -120,  -120,   171,   -35,    99,    83,   100,   107,  -120,
      84,   112,   -96,    85,   115,   -96,   -96,  -120,  -120,   116,
      86,    76,  -120,   -96,  -103,   -23,    87,  -103,   146,  -103,
    -103,   -96,   -96,   101,    86,   102,   -96,  -103,  -106,   138,
      87,  -106,  -115,  -106,  -106,  -103,  -103,   143,    86,   144,
    -103,  -106,  -107,   179,    87,  -107,   197,  -107,  -107,  -106,
    -106,   168,   174,   176,  -106,  -107,    84,   200,   -97,   -97,
     177,   -97,   -97,  -107,  -107,   178,   174,   203,  -107,   -97,
      84,   204,   -99,   -99,   205,   -99,   -99,   -97,   -97,   206,
      86,   207,   -97,   -99,  -109,   208,    87,  -109,   -61,  -109,
    -109,   -99,   -99,   212,   174,   213,   -99,  -109,    84,   220,
    -101,  -101,   228,  -101,  -101,  -109,  -109,   224,    86,   225,
    -109,  -101,  -111,   229,    87,  -111,   236,  -111,  -111,  -101,
    -101,    -3,    12,   232,  -101,  -111,    77,   240,    37,    38,
      13,   241,   244,  -111,  -111,   245,   247,    92,  -111,    12,
      39,   248,   113,   209,    37,    38,   128,    13,    37,    38,
     234,   -11,   188,    40,   -11,    41,    39,   -11,     0,    18,
      39,    19,   133,    32,    37,    38,     0,    13,   189,    40,
     -69,    41,    20,    40,     0,    41,    39,    18,    21,    19,
      18,     0,    19,     0,   -84,    13,     0,   -84,    13,    40,
      20,    41,     0,    20,    -2,    12,    21,     0,   242,    21,
     188,     0,   -84,    13,     0,   -84,     0,   -11,   -27,    29,
     -11,     0,    18,   -11,    19,     0,   189,   -27,     0,     0,
      13,   -27,   -84,     0,   -27,    20,     0,    30,    -9,    60,
       0,    21,     0,     0,     0,     0,     0,    -9,     0,     0,
       0,    61,     0,     0,    62
};

static const yytype_int16 yycheck[] =
{
      24,    20,    21,    11,    71,    39,    14,     1,    85,     1,
      67,    64,   215,     1,    33,     3,     4,    84,   102,    76,
       1,     1,    41,    26,     1,   228,     1,    15,     3,     1,
     233,    12,     1,    27,    26,   112,    55,    31,     1,    31,
      28,     1,    30,    31,    97,    33,    34,    27,   115,   126,
      27,    31,     1,    87,    31,    74,    64,    26,    82,    31,
     127,   118,   146,   147,    27,    89,    26,   151,    31,     1,
       3,    31,     1,     1,     3,     4,     1,     9,     1,     5,
      29,     7,   116,   107,     9,     1,    15,     5,    11,     7,
       8,   110,     1,     1,     3,     4,    24,   105,   132,    28,
     124,    30,    30,    26,    33,    34,    15,    33,    34,     1,
      26,     3,     4,    31,    30,    33,    34,     3,    26,    28,
       4,    30,     1,    15,    33,    34,     1,     1,     3,     4,
       0,    15,     5,    19,     7,     8,    28,   145,    30,   158,
      15,    33,    34,    26,    28,    24,    30,   171,     1,    33,
      34,     1,    26,    28,     1,    30,     3,     4,    33,    34,
      33,    34,     1,     1,     3,    18,     6,     5,    15,     7,
       8,    21,     1,   197,     1,    12,   200,   201,     1,     6,
      19,    28,     1,    30,    11,     1,    33,    34,     1,    27,
       3,     4,    21,    31,     1,    33,    34,     3,     4,    26,
       1,     1,    15,    30,     3,     4,    10,    26,    24,    15,
      26,     1,     1,     3,     1,    28,    15,    30,    26,    26,
      33,    34,    28,    24,    30,    26,    26,    33,    34,    28,
      17,    30,     1,     1,    33,    34,     5,    26,     7,     8,
       3,    10,    11,    11,     3,     1,     1,     3,    18,    18,
       5,     8,     7,     8,     5,    10,    11,    26,    27,     7,
       1,    30,    31,    18,     5,     3,     7,     8,     3,    10,
      11,    26,    27,     1,     1,     3,    31,    18,     5,    24,
       7,     8,     7,    10,    11,    26,    27,     1,     1,     3,
      31,    18,     5,     3,     7,     8,    11,    10,    11,    26,
      27,    31,     1,    21,    31,    18,     5,    11,     7,     8,
      21,    10,    11,    26,    27,    21,     1,    26,    31,    18,
       5,    26,     7,     8,    26,    10,    11,    26,    27,    26,
       1,    24,    31,    18,     5,    24,     7,     8,    24,    10,
      11,    26,    27,    24,     1,     3,    31,    18,     5,    26,
       7,     8,    26,    10,    11,    26,    27,    29,     1,    29,
      31,    18,     5,    24,     7,     8,    29,    10,    11,    26,
      27,     0,     1,    24,    31,    18,     1,    26,     3,     4,
       9,    26,    21,    26,    27,    21,    26,    56,    31,     1,
      15,    26,     1,   186,     3,     4,     1,     9,     3,     4,
       1,    13,     3,    28,    16,    30,    15,    19,    -1,     1,
      15,     3,     1,    17,     3,     4,    -1,     9,    19,    28,
      12,    30,    14,    28,    -1,    30,    15,     1,    20,     3,
       1,    -1,     3,    -1,    26,     9,    -1,    11,     9,    28,
      14,    30,    -1,    14,     0,     1,    20,    -1,     1,    20,
       3,    -1,    26,     9,    -1,    26,    -1,    13,     0,     1,
      16,    -1,     1,    19,     3,    -1,    19,     9,    -1,    -1,
       9,    13,    11,    -1,    16,    14,    -1,    19,     0,     1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    13,    -1,    -1,    16
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    17,    36,     3,     1,     3,     0,    26,    26,
       1,    26,     1,     9,    37,    38,    61,    62,     1,     3,
      14,    20,    61,    63,    64,    65,    69,    70,    61,     1,
      19,    45,    63,    66,     1,    30,     1,     3,     4,    15,
      28,    30,    33,    34,    74,    77,    81,    84,    88,    74,
       1,    12,    65,     1,    26,     6,    39,     1,     3,    43,
       1,    13,    16,    46,    48,    12,    74,    71,    72,    74,
      75,    78,    79,    82,    86,     1,    30,     1,    84,     1,
      74,     1,    18,     1,     5,     8,     1,     7,     1,    10,
      26,    74,    43,    40,     1,    24,    26,    47,    49,     1,
       3,     1,     3,     1,    26,    37,    61,    18,    72,     1,
      27,    31,     8,     1,    81,     5,     7,    74,    85,    31,
      72,    87,     1,    31,    67,    65,    76,    80,     1,    81,
       1,    77,    83,     1,    84,    65,     1,    24,    24,    41,
      44,     1,    21,     1,     3,    37,     3,    50,     1,    30,
      54,    53,    54,     1,    61,    65,     1,    31,    73,     1,
      74,     1,    77,    81,    84,    72,     1,    31,    31,    65,
       1,    11,    77,    81,     1,    84,    21,    21,    21,     3,
      42,     1,    26,    61,    54,    54,    55,     1,     3,    19,
      56,    59,     1,    24,    54,     1,    26,    11,    74,    31,
      11,    68,    65,    26,    26,    26,    26,    24,    24,    56,
      58,    60,    24,     3,     1,    26,    31,    51,     1,    29,
      26,    65,    65,    65,    29,    29,     1,    31,    26,    24,
       1,    21,    24,    57,     1,    59,    29,    52,     1,    26,
      26,    26,     1,    59,    21,    21,    59,    26,    26
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
#line 78 "exemple.y"
    {yyerror (" program attendu on line : ");  yyerrok;;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 79 "exemple.y"
    {yyerror (" nom du programme invalide on line : "); yyerrok; ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 80 "exemple.y"
    {yyerror (" point virgule attendu on line : "); yyerrok; ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 98 "exemple.y"
    { yyerror("mot cle var introuvable !");  yyerrok;;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 107 "exemple.y"
    { yyerror("liste_identificateurs manquante "); yyerrok;;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 114 "exemple.y"
    { yyerror(":  manquante !"); yyerrok; ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 122 "exemple.y"
    { yyerror("mot cle 'int' introuvable !");  yyerrok;;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 131 "exemple.y"
    { yyerror(" ; manquante !"); yyerrok; ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 142 "exemple.y"
    {yyerror(" ; manquante !"); yyerrok;;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 146 "exemple.y"
    {yyerror(" id introuvable!"); yyerrok;;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 158 "exemple.y"
    {yyerror(" ; manquante!"); yyerrok;;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 169 "exemple.y"
    {yyerror(" entete de programme  manquante!"); yyerrok;;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 175 "exemple.y"
    {yyerror(" corps de fonction / procedure  manquant  manquante!"); yyerrok;;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 191 "exemple.y"
    {yyerror("  mot cle function manquant !"); yyerrok;;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 200 "exemple.y"
    {yyerror("  nom  de fonction manquant !"); yyerrok;;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 209 "exemple.y"
    {yyerror("  : manquant !"); yyerrok;;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 217 "exemple.y"
    {yyerror("  return type de fonction manquant !"); yyerrok;;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 225 "exemple.y"
    {yyerror("  ;manquante!"); yyerrok;;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 233 "exemple.y"
    {yyerror("nom  e procedure manquant !"); yyerrok;;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 241 "exemple.y"
    {yyerror(";manquante!"); yyerrok;;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 251 "exemple.y"
    { yyerror("parenthese ouvrante manquante");  yyerrok;;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 256 "exemple.y"
    { yyerror("parenthese fermante manquante");  yyerrok;;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 266 "exemple.y"
    { yyerror("point virgule manquante");  yyerrok;;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 268 "exemple.y"
    { yyerror("parametre manquante");  yyerrok;;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 273 "exemple.y"
    { yyerror("parametre manquante");  yyerrok;;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 279 "exemple.y"
    { yyerror("identifiant manquant"); yyerrok; ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 284 "exemple.y"
    { yyerror("integer manquant");  yyerrok;;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 295 "exemple.y"
    { yyerror("Begin manquante"); yyerrok; ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 300 "exemple.y"
    { yyerror("End manquante");  yyerrok;;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 312 "exemple.y"
    { yyerror("point virgule d'instruction omis"); yyerrok; ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 327 "exemple.y"
    { yyerror("IF manquante"); yyerrok; ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 336 "exemple.y"
    { yyerror("THEN manquante"); yyerrok; ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 344 "exemple.y"
    { yyerror("ELSE manquante");  yyerrok;;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 360 "exemple.y"
    { yyerror("PARENTHESE OUVRANTE manquante");  yyerrok;;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 370 "exemple.y"
    { yyerror("PARENTHESE_FERMANTE manquante"); yyerrok; ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 380 "exemple.y"
    { yyerror("virgule manquante");  yyerrok;;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 384 "exemple.y"
    { yyerror("expression manquante"); yyerrok; ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 392 "exemple.y"
    { yyerror("expression simple manquante"); yyerrok; ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 396 "exemple.y"
    { yyerror("OPREL manquant"); yyerrok; ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 400 "exemple.y"
    { yyerror("expression simple manquante");  yyerrok;;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 406 "exemple.y"
    { yyerror("terme manquant"); yyerrok; ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 407 "exemple.y"
    { yyerror("signe manquant"); yyerrok; ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 413 "exemple.y"
    { yyerror("expression simple manquante"); yyerrok; ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 417 "exemple.y"
    { yyerror("OPADD manquante"); yyerrok; ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 421 "exemple.y"
    { yyerror("terme manquante");  yyerrok;;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 429 "exemple.y"
    { yyerror("terme manquant"); yyerrok; ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 433 "exemple.y"
    { yyerror("OPMUL manquant");  yyerrok;;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 437 "exemple.y"
    { yyerror("facteur manquant");  yyerrok;;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 447 "exemple.y"
    { yyerror("parenthese ouvrante manquante");  yyerrok;;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 453 "exemple.y"
    { yyerror("parenthese fermante manquante");  yyerrok;;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 464 "exemple.y"
    { yyerror("parenthese ouvrante manquante"); yyerrok; ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 469 "exemple.y"
    { yyerror("parenthese fermante manquante"); yyerrok; ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 472 "exemple.y"
    { yyerror("expression manquante"); yyerrok; ;}
    break;



/* Line 1455 of yacc.c  */
#line 2013 "exemple.tab.c"
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
#line 485 "exemple.y"
 

#include "lex.yy.c"
void yyerror(char *s) {
	extern int yylineno;
	char str[100];
	sprintf(str,"Erreur (ligne n %d): %s\n", yylineno, s);
	printf(str);
}

int main(int argc, char *argv[]) {
	yydebug = 0;

	yyparse();
	return 0;
}

