
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
#line 1 "id.y"

	int yylex();
	void yyerror(const char *s);
	#include <stdio.h>
	#include <math.h>	
	#include <string.h>
	#include <stdlib.h>
	extern int yylex();
	extern int yyparse();
	extern FILE *yyin;
	extern FILE *yyout;

	int no_of_var = 0;
	struct variable_struct
		{
			char var_id[30];
			int var_type;
			int ival;
			char cval;
			float fval;
		}variable[500];

	int search_id(char X[30])
	{
		int  i = 0;
		for(i=0; i<no_of_var; i++)
		{
			if(!strcmp(variable[i].var_id , X))
			{
				return 1;
			}
		}
		return 0;
	}
	void set_id_type(int x)
	{
		int  i = 0;
		for(i=0; i<no_of_var; i++)
		{
			if(variable[i].var_type == -1)
			{
				variable[i].var_type = x;
			}
		}
	}
	int get_id_index(char X[30])
	{
		int  i = 0;
		for(i=0; i<no_of_var; i++)
		{
			if(!strcmp(variable[i].var_id , X))
			{
				//puts(variable[i].var_id);
				return i;
			}
		}
		return -1;
	}



/* Line 189 of yacc.c  */
#line 135 "id.tab.c"

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
     POWER = 258,
     INT = 259,
     FLOAT = 260,
     CHAR = 261,
     NUM = 262,
     ID = 263,
     MAIN = 264,
     PLUS = 265,
     MINUS = 266,
     MUL = 267,
     DIV = 268,
     IF = 269,
     ELIF = 270,
     ELSE = 271,
     EQ = 272,
     NOTEQUAL = 273,
     GT = 274,
     GE = 275,
     LT = 276,
     LE = 277,
     FOR = 278,
     CASE = 279,
     SWITCH = 280,
     DEFAULT = 281,
     PRINT = 282
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 62 "id.y"

   long val;
   char* stringValue;



/* Line 214 of yacc.c  */
#line 205 "id.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 217 "id.tab.c"

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   105

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNRULES -- Number of states.  */
#define YYNSTATES  125

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   282

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      30,    32,     2,     2,    31,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    33,     2,
       2,    35,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    28,     2,    29,    34,     2,     2,     2,
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
      25,    26,    27
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,    12,    15,    18,    21,    24,
      27,    30,    33,    34,    42,    48,    50,    52,    60,    63,
      69,    70,    74,    84,    94,   103,   104,   109,   110,   114,
     118,   122,   126,   130,   134,   138,   140,   142,   144,   148,
     150,   155,   157,   161,   165,   167,   171,   175,   177,   181,
     183
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      37,     0,    -1,    -1,    37,    38,    -1,     9,    28,    39,
      29,    -1,    52,    39,    -1,    55,    39,    -1,    48,    39,
      -1,    47,    39,    -1,    43,    39,    -1,    41,    39,    -1,
      40,    39,    -1,    -1,     3,    30,     7,    31,     7,    32,
      33,    -1,    27,    30,    42,    32,    33,    -1,     8,    -1,
       7,    -1,    25,    30,     8,    32,    28,    44,    29,    -1,
      45,    46,    -1,    24,     7,    34,    39,    45,    -1,    -1,
      26,    34,    39,    -1,    23,    30,    55,    55,    55,    32,
      28,    39,    29,    -1,    14,    30,    51,    32,    28,    39,
      29,    49,    50,    -1,    15,    30,    51,    32,    28,    39,
      29,    49,    -1,    -1,    16,    28,    39,    29,    -1,    -1,
      56,    17,    56,    -1,    56,    18,    56,    -1,    56,    19,
      56,    -1,    56,    20,    56,    -1,    56,    21,    56,    -1,
      56,    22,    56,    -1,    53,    54,    33,    -1,     4,    -1,
       5,    -1,     6,    -1,    54,    31,     8,    -1,     8,    -1,
       8,    35,    56,    33,    -1,    57,    -1,    57,    10,    58,
      -1,    57,    11,    58,    -1,    58,    -1,    58,    12,    59,
      -1,    58,    13,    59,    -1,    59,    -1,    30,    57,    32,
      -1,     8,    -1,     7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    80,    80,    81,    83,   106,   107,   108,   109,   110,
     111,   112,   113,   115,   119,   138,   154,   159,   163,   165,
     166,   168,   170,   182,   194,   207,   209,   212,   214,   224,
     234,   244,   254,   264,   275,   281,   283,   285,   288,   304,
     323,   357,   361,   364,   365,   367,   368,   373,   375,   376,
     398
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "POWER", "INT", "FLOAT", "CHAR", "NUM",
  "ID", "MAIN", "PLUS", "MINUS", "MUL", "DIV", "IF", "ELIF", "ELSE", "EQ",
  "NOTEQUAL", "GT", "GE", "LT", "LE", "FOR", "CASE", "SWITCH", "DEFAULT",
  "PRINT", "'{'", "'}'", "'('", "','", "')'", "':'", "'~'", "'='",
  "$accept", "program", "mainfunc", "code", "power_code", "print_code",
  "something", "switch_case", "case_code", "case1_code", "default_code",
  "for_loop", "condition", "else_if", "else", "bool_expression",
  "declaration", "TYPE", "ID1", "assignment", "expression", "e", "f", "t", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   123,   125,
      40,    44,    41,    58,   126,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    37,    38,    39,    39,    39,    39,    39,
      39,    39,    39,    40,    41,    42,    42,    43,    44,    45,
      45,    46,    47,    48,    49,    49,    50,    50,    51,    51,
      51,    51,    51,    51,    52,    53,    53,    53,    54,    54,
      55,    56,    57,    57,    57,    58,    58,    58,    59,    59,
      59
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     4,     2,     2,     2,     2,     2,
       2,     2,     0,     7,     5,     1,     1,     7,     2,     5,
       0,     3,     9,     9,     8,     0,     4,     0,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     3,     1,
       4,     1,     3,     3,     1,     3,     3,     1,     3,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     3,    12,     0,    35,    36,    37,
       0,     0,     0,     0,     0,     0,    12,    12,    12,    12,
      12,    12,     0,    12,     0,     0,     0,     0,     0,     0,
       4,    11,    10,     9,     8,     7,     5,    39,     0,     6,
       0,    50,    49,     0,     0,    41,    44,    47,     0,     0,
       0,     0,    16,    15,     0,     0,    34,     0,     0,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,    48,    42,    43,    45,
      46,    12,    28,    29,    30,    31,    32,    33,     0,    20,
      14,     0,     0,     0,     0,     0,     0,    13,    25,    12,
       0,    17,     0,    18,     0,    27,     0,    12,    12,     0,
       0,    23,    22,    20,    21,     0,    12,    19,     0,     0,
      12,    26,     0,    25,    24
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     4,    15,    16,    17,    54,    18,    95,    96,
     103,    19,    20,   105,   111,    48,    21,    22,    38,    23,
      49,    45,    46,    47
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -35
static const yytype_int8 yypact[] =
{
     -35,    15,   -35,    -7,   -35,     8,     4,   -35,   -35,   -35,
     -12,    12,    13,    14,    22,    16,     8,     8,     8,     8,
       8,     8,    52,     8,    54,    10,    10,    55,    56,    18,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -23,   -35,
      31,   -35,   -35,    10,    33,    17,    24,   -35,    35,    37,
      55,    36,   -35,   -35,    38,    61,   -35,    64,     9,   -35,
      10,    10,    10,    10,    44,    10,    10,    10,    10,    10,
      10,    55,    45,    41,   -35,    43,   -35,    24,    24,   -35,
     -35,     8,   -35,   -35,   -35,   -35,   -35,   -35,    46,    53,
     -35,    47,    50,    48,    74,    57,    58,   -35,    67,     8,
      51,   -35,    59,   -35,    60,    71,    65,     8,     8,    10,
      68,   -35,   -35,    53,   -35,    63,     8,   -35,    69,    70,
       8,   -35,    72,    67,   -35
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -35,   -35,   -35,   -16,   -35,   -35,   -35,   -35,   -35,   -25,
     -35,   -35,   -35,   -34,   -35,   -11,   -35,   -35,   -35,   -18,
     -19,    62,   -31,   -24
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      31,    32,    33,    34,    35,    36,    44,    39,    55,    50,
      56,     6,     7,     8,     9,     2,    10,    41,    42,    60,
      61,     5,    11,    25,     3,    52,    53,    60,    61,    77,
      78,    12,    71,    13,    24,    14,    62,    63,    79,    80,
      43,    76,    26,    27,    28,    30,    82,    83,    84,    85,
      86,    87,    29,    88,    65,    66,    67,    68,    69,    70,
      37,    40,    57,    10,    51,    92,    59,    64,    72,    74,
      73,    75,    81,    89,    90,    91,    99,    94,    93,    98,
      97,   100,   104,   106,   102,   107,   101,   110,   117,   124,
     109,   113,   114,   108,   112,   118,   116,   120,   115,   121,
     119,   123,     0,     0,   122,    58
};

static const yytype_int8 yycheck[] =
{
      16,    17,    18,    19,    20,    21,    25,    23,    31,    27,
      33,     3,     4,     5,     6,     0,     8,     7,     8,    10,
      11,    28,    14,    35,     9,     7,     8,    10,    11,    60,
      61,    23,    50,    25,    30,    27,    12,    13,    62,    63,
      30,    32,    30,    30,    30,    29,    65,    66,    67,    68,
      69,    70,    30,    71,    17,    18,    19,    20,    21,    22,
       8,     7,    31,     8,     8,    81,    33,    32,    32,     8,
      32,     7,    28,    28,    33,    32,    28,    24,    32,    29,
      33,     7,    15,    99,    26,    34,    29,    16,   113,   123,
      30,   107,   108,    34,    29,    32,    28,    28,   109,    29,
     116,    29,    -1,    -1,   120,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,     0,     9,    38,    28,     3,     4,     5,     6,
       8,    14,    23,    25,    27,    39,    40,    41,    43,    47,
      48,    52,    53,    55,    30,    35,    30,    30,    30,    30,
      29,    39,    39,    39,    39,    39,    39,     8,    54,    39,
       7,     7,     8,    30,    56,    57,    58,    59,    51,    56,
      55,     8,     7,     8,    42,    31,    33,    31,    57,    33,
      10,    11,    12,    13,    32,    17,    18,    19,    20,    21,
      22,    55,    32,    32,     8,     7,    32,    58,    58,    59,
      59,    28,    56,    56,    56,    56,    56,    56,    55,    28,
      33,    32,    39,    32,    24,    44,    45,    33,    29,    28,
       7,    29,    26,    46,    15,    49,    39,    34,    34,    30,
      16,    50,    29,    39,    39,    51,    28,    45,    32,    39,
      28,    29,    39,    29,    49
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
        case 4:

/* Line 1455 of yacc.c  */
#line 83 "id.y"
    {
	printf("\n Valid code\n");
	printf("\nnumber of variables = %d\n", no_of_var);
	int i = 0;
	for(;i<no_of_var; i=i+1)
	{
		printf("%s  : type --> ", variable[i].var_id);
		if(variable[i].var_type == 0)
		{
			printf("char   value --> %c", variable[i].cval);
		}
		else if(variable[i].var_type == 1)
		{
			printf("integer   value --> %d", variable[i].ival);
		}
		else if(variable[i].var_type == 2)
		{
			printf("float   value --> %f", variable[i].fval);
		}
		printf("\n");
	}
;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 106 "id.y"
    { ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 107 "id.y"
    { ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 108 "id.y"
    { ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 109 "id.y"
    { ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 110 "id.y"
    { ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 111 "id.y"
    { ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 112 "id.y"
    { ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 115 "id.y"
    {
	(yyval.val) = pow((yyvsp[(3) - (7)].val),(yyvsp[(5) - (7)].val));
	printf("power func value: %d\n", (yyval.val)) ;
;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 119 "id.y"
    {
											int i = get_id_index((yyvsp[(3) - (5)].stringValue));
											printf("\nprint: %s value: %d\n", variable[i].var_id, variable[i].ival);
											if(variable[i].var_type == 0)
											{
												(yyval.val) =  variable[i].cval;
											}
											else if(variable[i].var_type == 1)
											{
												(yyval.val) =  variable[i].ival;
											}
											else
											{
												(yyval.val) = variable[i].fval;
											}
																		//printf("\nprint pawa gese\n");

										;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 138 "id.y"
    {(yyval.stringValue) = (yyvsp[(1) - (1)].stringValue);
				int i = get_id_index((yyvsp[(1) - (1)].stringValue));
				//printf("\nprint pawa gese  er moddhe variable er naam : %s ar value: %d\n", variable[i].var_id, variable[i].ival);
				if(variable[i].var_type == 0)
				{
					//printf("%c", variable[i].cval);
				}
				else if(variable[i].var_type == 1)
				{
					//printf("%d\n", variable[i].ival);
				}
				else
				{
					//printf("%f\n", variable[i].fval);
				}
				;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 154 "id.y"
    {
		(yyval.stringValue) = (char *)(yyvsp[(1) - (1)].val); 
		printf("%d\n", (yyvsp[(1) - (1)].val));
		;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 159 "id.y"
    { 
										printf("Switch case found\n");
												;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 163 "id.y"
    {;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 165 "id.y"
    {;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 168 "id.y"
    {;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 170 "id.y"
    {
												//printf("\nfor loop found\n");
												int j = (yyvsp[(3) - (9)].val);
												int diff = abs((yyvsp[(3) - (9)].val)-(yyvsp[(4) - (9)].val));
												int incc = abs((yyvsp[(5) - (9)].val));
												for(j = 1; j<diff; j=j+incc)
												{
													printf("loop running: %d\n", (yyvsp[(8) - (9)].val));
												}
												
											  ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 182 "id.y"
    {
	                                                  printf("IF condition found\n");
													  if( (yyvsp[(3) - (9)].val) == 1)
													  {
														  printf("if condition is TRUE\n");
													  }
													  else
													  {
														  printf("if condition is FALSE\n");
													  }
													;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 194 "id.y"
    {
	                                                       	printf("ELIF condition found\n");
													  if( (yyvsp[(3) - (8)].val) == 1)
													  {
														 printf("elif condition is TRUE\n");
													  }
													  else
													  {
														 printf("elif condition is false\n");
													
													  }	

                                                           ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 209 "id.y"
    {
                            printf("\nelse condition is found\n");
                          ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 214 "id.y"
    {
                             if ((yyvsp[(1) - (3)].val) == (yyvsp[(3) - (3)].val))
							 {
								 (yyval.val) = 1;
							 }
							 else
							 {
								 (yyval.val) = 0;
							 }
							;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 224 "id.y"
    {
                             if ((yyvsp[(1) - (3)].val) == (yyvsp[(3) - (3)].val))
							 {
								 (yyval.val) = 0;
							 }
							 else
							 {
								 (yyval.val) = 1;
							 }
							;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 234 "id.y"
    {
                             if ((yyvsp[(1) - (3)].val) > (yyvsp[(3) - (3)].val))
							 {
								 (yyval.val) = 1;
							 }
							 else
							 {
								 (yyval.val) = 0;
							 }
							;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 244 "id.y"
    {
                             if ((yyvsp[(1) - (3)].val) >= (yyvsp[(3) - (3)].val))
							 {
								 (yyval.val) = 1;
							 }
							 else
							 {
								 (yyval.val) = 0;
							 }
							;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 254 "id.y"
    {
                             if ((yyvsp[(1) - (3)].val) < (yyvsp[(3) - (3)].val))
							 {
								 (yyval.val) = 1;
							 }
							 else
							 {
								 (yyval.val) = 0;
							 }
							;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 264 "id.y"
    {
                             if ((yyvsp[(1) - (3)].val) <= (yyvsp[(3) - (3)].val))
							 {
								 (yyval.val) = 1;
							 }
							 else
							 {
								 (yyval.val) = 0;
							 }
							;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 275 "id.y"
    { 
					
					set_id_type((yyvsp[(1) - (3)].val));
				;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 281 "id.y"
    { (yyval.val) = 1; printf("variable type: integer  ");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 283 "id.y"
    { (yyval.val) = 2;printf("variable type: float  ");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 285 "id.y"
    { (yyval.val) = 0; printf("variable type: char  ");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 288 "id.y"
    { if(search_id((yyvsp[(3) - (3)].stringValue)) == 0 )
					 {
						 printf("Valid Declaration\n");
						strcpy(variable[no_of_var].var_id,(yyvsp[(3) - (3)].stringValue));
						printf("variable name: %s  ", (yyvsp[(3) - (3)].stringValue));
						variable[no_of_var].var_type = -1;
						no_of_var = no_of_var + 1;

					 }
					 else
					 {
						 printf("\nvariable is already declared\n");
					 }
					//printf("\n%s\n",$3);
				;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 304 "id.y"
    {
		 			if(search_id((yyvsp[(1) - (1)].stringValue)) == 0 )
					 {
						 printf("Valid Declaration\n");
						strcpy(variable[no_of_var].var_id,(yyvsp[(1) - (1)].stringValue));
						printf("variable name: %s  ", (yyvsp[(1) - (1)].stringValue));
						variable[no_of_var].var_type = -1;
						no_of_var = no_of_var + 1;

					 }
					 else
					 {
						printf("\nvariable is already declared\n");
					 }

		 			//printf("\n%s\n",$1);
		 			strcpy((yyval.stringValue),(yyvsp[(1) - (1)].stringValue)) ;
	 			;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 323 "id.y"
    { 
									(yyval.val) = (yyvsp[(3) - (4)].val);
									//printf("assign val: %d\n", $$);
									if(search_id((yyvsp[(1) - (4)].stringValue)) == 1)
									{
										int i = get_id_index((yyvsp[(1) - (4)].stringValue));
	                                printf("Assign in %s: ", variable[i].var_id);
									if(variable[i].var_type == 0)
									{
										variable[i].cval =(char)(yyvsp[(3) - (4)].val);
										printf("var value %c\n", variable[i].cval);
									}
									if(variable[i].var_type == 1)
									{
										//printf("\ninteger e ashse\n");
										variable[i].ival = (yyvsp[(3) - (4)].val);
										printf("var value %d \n", variable[i].ival);
									}
									if(variable[i].var_type == 2)
									{
										variable[i].fval = (float)(yyvsp[(3) - (4)].val);
										printf("var value %f \n",variable[i].fval);
									}


									}
									else
									{
										printf("Variable is not declared\n");
									}
									
									//printf("\nValid assignment\n");
									;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 357 "id.y"
    {(yyval.val) = (yyvsp[(1) - (1)].val); 
				//printf("\nvalue in exp: %d\n", $$);
			  ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 361 "id.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) + (yyvsp[(3) - (3)].val); 
				 //printf("\nvalue in exp: %d\n", $1); 
				;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 364 "id.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) - (yyvsp[(3) - (3)].val);;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 365 "id.y"
    {(yyval.val) = (yyvsp[(1) - (1)].val);;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 367 "id.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) * (yyvsp[(3) - (3)].val);;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 368 "id.y"
    {if((yyvsp[(3) - (3)].val) != 0)
				{
					(yyval.val) = (yyvsp[(1) - (3)].val) / (yyvsp[(3) - (3)].val);
	            }
	;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 373 "id.y"
    {(yyval.val) = (yyvsp[(1) - (1)].val);;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 375 "id.y"
    {(yyval.val) = (yyvsp[(2) - (3)].val);;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 376 "id.y"
    {
		      int id_index = get_id_index((yyvsp[(1) - (1)].stringValue));
			  if(id_index == -1)
			  {
				  yyerror("VARIABLE DOESN'T EXIST");
			  }
			  else
			  {
				  if(variable[id_index].var_type == 0)
				  {
					  (yyval.val) = variable[id_index].cval;
				  }
				  if(variable[id_index].var_type == 1)
				  {
					  (yyval.val) = variable[id_index].ival;
				  }
				  if(variable[id_index].var_type == 2)
				  {
					  (yyval.val) = variable[id_index].fval;
				  }
			  }
				;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 398 "id.y"
    {(yyval.val) = (yyvsp[(1) - (1)].val); 
	//printf("ekhane num --> %d", $1);
	;}
    break;



/* Line 1455 of yacc.c  */
#line 2051 "id.tab.c"
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
#line 402 "id.y"



int main()
{
    yyin = fopen("input.txt","r");
	yyout = freopen("out.txt","w",stdout);
	yyparse();
	fclose(yyin);
	fclose(yyout);
	return 0;
}

void yyerror (char const *s)
{
	//fprintf (stderr, "%s\n", s);
}

int yywrap()
{
	return 0;
}

