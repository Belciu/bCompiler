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
#line 1 "kotek.y" /* yacc.c:339  */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define  YYDEBUG  0  /* 1 for debugging */

FILE *out;
int  base;

#line 77 "y.tab.c" /* yacc.c:339  */

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
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    DIGIT = 258,
    LETTER = 259,
    ARRAY = 260,
    CLASS = 261,
    DELETE = 262,
    DO = 263,
    DONE = 264,
    ELSE = 265,
    ENDIF = 266,
    EXTENDS = 267,
    FUNCTION = 268,
    IF = 269,
    INT = 270,
    NEW = 271,
    NULL_ = 272,
    OF = 273,
    PROGRAM = 274,
    READ = 275,
    RETURN = 276,
    STRING = 277,
    SUPER = 278,
    THEN = 279,
    THIS = 280,
    TYPE = 281,
    VAR = 282,
    VOID = 283,
    WHILE = 284,
    WRITE = 285,
    OPER_UMINUS = 286,
    OPER_UPLUS = 287,
    OPER_ASSIGN = 288,
    OPER_EQUAL = 289,
    OPER_NEQUAL = 290,
    OPER_AND = 291,
    OPER_OR = 292,
    OPER_ELESSER = 293,
    OPER_EGREATER = 294,
    ID = 295,
    INT_VAL = 296,
    REAL_VAL = 297,
    STRING_VAL = 298
  };
#endif
/* Tokens.  */
#define DIGIT 258
#define LETTER 259
#define ARRAY 260
#define CLASS 261
#define DELETE 262
#define DO 263
#define DONE 264
#define ELSE 265
#define ENDIF 266
#define EXTENDS 267
#define FUNCTION 268
#define IF 269
#define INT 270
#define NEW 271
#define NULL_ 272
#define OF 273
#define PROGRAM 274
#define READ 275
#define RETURN 276
#define STRING 277
#define SUPER 278
#define THEN 279
#define THIS 280
#define TYPE 281
#define VAR 282
#define VOID 283
#define WHILE 284
#define WRITE 285
#define OPER_UMINUS 286
#define OPER_UPLUS 287
#define OPER_ASSIGN 288
#define OPER_EQUAL 289
#define OPER_NEQUAL 290
#define OPER_AND 291
#define OPER_OR 292
#define OPER_ELESSER 293
#define OPER_EGREATER 294
#define ID 295
#define INT_VAL 296
#define REAL_VAL 297
#define STRING_VAL 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 214 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   195

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  153

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    60,     2,     2,     2,    48,     2,     2,
      55,    56,    46,    44,    53,    45,    59,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    54,    49,
      61,    52,    62,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,     2,    58,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    22,    22,    27,    31,    35,    36,    40,    41,    42,
      43,    47,    52,    53,    54,    58,    60,    65,    66,    67,
      68,    72,    77,    82,    83,    87,    88,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   105,   106,   107,
     108,   109,   110,   111,   112,   116,   118,   120,   122,   126,
     127,   131,   132,   136,   138,   143,   144,   145,   149,   151,
     156,   158,   163,   164,   168,   169,   173,   175,   180,   181,
     182,   183,   184,   185,   189,   191,   196,   198,   203,   205,
     207,   212,   214,   216,   220,   224
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DIGIT", "LETTER", "ARRAY", "CLASS",
  "DELETE", "DO", "DONE", "ELSE", "ENDIF", "EXTENDS", "FUNCTION", "IF",
  "INT", "NEW", "NULL_", "OF", "PROGRAM", "READ", "RETURN", "STRING",
  "SUPER", "THEN", "THIS", "TYPE", "VAR", "VOID", "WHILE", "WRITE",
  "OPER_UMINUS", "OPER_UPLUS", "OPER_ASSIGN", "OPER_EQUAL", "OPER_NEQUAL",
  "OPER_AND", "OPER_OR", "OPER_ELESSER", "OPER_EGREATER", "ID", "INT_VAL",
  "REAL_VAL", "STRING_VAL", "'+'", "'-'", "'*'", "'/'", "'%'", "';'",
  "'{'", "'}'", "'='", "','", "':'", "'('", "')'", "'['", "']'", "'.'",
  "'!'", "'<'", "'>'", "$accept", "prog", "Cialo", "Blok",
  "ListaDeklaracji", "Deklaracja", "DeklaracjaTypu", "OpisTypu",
  "ListaDeklaracjiZmiennej", "Typ", "DeklaracjaZmiennej",
  "DeklaracjaFunkcji", "DeklaracjaArgumentow", "ListaInstrukcji",
  "Instrukcja", "WyrazeniePodstawowe", "WyrazeniePostfiksowe", "Parametry",
  "ListaWyrazen", "WyrazenieUnarne", "OperatorUnarny",
  "WyrazenieMultiplikatywne", "WyrazenieAddytywne",
  "OperatorMultiplikatywny", "OperatorAddytywny", "WyrazeniePorownania",
  "OperatorPorownania", "WyrazenieLogiczne", "OperatorLogiczny",
  "Wyrazenie", "ZlozonaInstrukcja", "DeklaracjaKlasy", "Ident", YY_NULLPTR
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
     295,   296,   297,   298,    43,    45,    42,    47,    37,    59,
     123,   125,    61,    44,    58,    40,    41,    91,    93,    46,
      33,    60,    62
};
# endif

#define YYPACT_NINF -52

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-52)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -10,   -31,    20,   137,   -52,    -9,    -9,    -9,    -9,   -52,
      -7,   137,   -52,   -52,   -52,   -52,   -52,    12,   -14,    11,
     -20,    19,   -52,   -52,    -9,    40,     5,    71,   114,   114,
      71,   -52,    -9,    93,   -52,   -52,   114,   114,   -52,   -52,
     -52,   -52,   -52,   -52,   114,   -52,   -52,    29,    19,   -52,
      -3,   -52,   135,   -18,    43,     1,   -52,    21,    35,   -52,
      41,   -52,    39,    44,    77,    40,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,    16,    47,    88,    56,    52,   -52,    65,
     107,    68,    63,   -52,   -52,   114,   114,   114,    -9,   -52,
     -52,   -52,   135,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   135,   135,   -52,   -52,   135,   -52,   -52,   137,    40,
      67,    71,    72,   -52,    19,   114,   -52,   -52,    19,   -52,
     -52,    73,    70,   -52,    74,    80,   -52,   -52,   -18,     2,
     -52,    81,   -52,    71,   -52,   -52,    79,    82,   132,   -52,
     -52,   114,   -52,   -52,   137,    19,   -52,   -52,   -52,   -52,
     -52,   133,   -52
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     5,     1,     0,     0,     0,     0,     2,
       0,     5,     7,     8,     9,    10,    85,     0,     0,     0,
       0,    25,     3,     6,     0,    24,     0,     0,     0,     0,
       0,    44,     0,     0,    43,    42,     0,     0,    55,    56,
      39,    40,    38,    32,     0,    57,    30,     0,    25,    48,
      54,    59,     0,    61,    67,    75,    78,     0,     0,    37,
       0,    23,    15,     0,     0,     0,    11,    12,    19,    18,
      20,    21,    17,    54,     0,     0,    79,     0,    36,     0,
       0,     0,     0,     4,    26,     0,    49,     0,     0,    53,
      62,    63,     0,    72,    73,    70,    71,    64,    65,    68,
      69,     0,     0,    77,    76,     0,    27,    28,     5,     0,
       0,     0,     0,    31,    25,     0,    33,    35,    25,    34,
      41,     0,     0,    50,    51,     0,    47,    58,    60,    66,
      74,     0,    16,     0,    14,    13,     0,     0,     0,    29,
      46,     0,    45,    84,     5,    25,    82,    80,    83,    52,
      22,     0,    81
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -52,   -52,     3,   139,     0,   -52,   -52,   -52,   -51,   -26,
     -12,   -52,   -52,   -42,   -52,   -52,   -16,   -52,    10,   -35,
     -52,    58,    59,   -52,   -52,    57,   -52,   -52,   -52,   -21,
     -52,   -52,    -5
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     9,    46,    10,    11,    12,    66,    61,    71,
      13,    14,    63,    47,    48,    49,    73,   122,   123,    51,
      52,    53,    54,    92,   101,    55,   102,    56,   105,    57,
      58,    15,    59
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      17,    18,    19,    20,    76,    50,    84,    74,    75,     1,
      64,    23,    79,    62,   112,    80,    81,    89,     3,    60,
       4,    67,    72,    82,    24,    72,    28,    77,    90,    91,
      85,    16,    50,    29,    27,    30,    31,   103,   104,    32,
      33,    25,    34,    21,    35,    16,    97,    98,    36,    37,
      38,    39,    86,    62,    87,    65,    88,   127,   132,    16,
      40,    41,    42,    26,   121,   124,   125,     8,    43,    21,
     106,    86,   136,    87,    44,    88,   138,    93,    94,    45,
      83,    95,    96,   126,   107,   134,    68,    97,    98,   145,
     146,   108,   109,    69,   137,   111,   113,    62,    50,    70,
     110,   116,    50,   151,    99,   100,    72,   144,   131,    30,
      31,    16,   114,   115,   117,   118,    34,   119,    35,   120,
     124,   133,   139,   135,    38,    39,   140,   141,    72,    50,
      30,    31,   143,    16,    40,    41,    42,    34,   142,    35,
     147,   148,    78,     5,   152,    38,    39,   150,    44,    22,
       6,   149,    31,    45,    16,    40,    41,    42,    34,   128,
      35,   129,   130,     7,     8,     0,    38,    39,     0,    44,
       0,     0,     0,     0,    45,    16,    40,    41,    42,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      44,     0,     0,     0,     0,    45
};

static const yytype_int16 yycheck[] =
{
       5,     6,     7,     8,    30,    21,    48,    28,    29,    19,
       5,    11,    33,    25,    65,    36,    37,    52,    49,    24,
       0,    26,    27,    44,    12,    30,     7,    32,    46,    47,
      33,    40,    48,    14,    54,    16,    17,    36,    37,    20,
      21,    55,    23,    50,    25,    40,    44,    45,    29,    30,
      31,    32,    55,    65,    57,    50,    59,    92,   109,    40,
      41,    42,    43,    52,    85,    86,    87,    27,    49,    50,
      49,    55,   114,    57,    55,    59,   118,    34,    35,    60,
      51,    38,    39,    88,    49,   111,    15,    44,    45,    10,
      11,    50,    53,    22,   115,    18,    49,   109,   114,    28,
      56,    49,   118,   145,    61,    62,   111,   133,   108,    16,
      17,    40,    24,    57,    49,     8,    23,    49,    25,    56,
     141,    54,    49,    51,    31,    32,    56,    53,   133,   145,
      16,    17,    51,    40,    41,    42,    43,    23,    58,    25,
      58,     9,    49,     6,    11,    31,    32,   144,    55,    10,
      13,   141,    17,    60,    40,    41,    42,    43,    23,   101,
      25,   102,   105,    26,    27,    -1,    31,    32,    -1,    55,
      -1,    -1,    -1,    -1,    60,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    19,    64,    49,     0,     6,    13,    26,    27,    65,
      67,    68,    69,    73,    74,    94,    40,    95,    95,    95,
      95,    50,    66,    67,    12,    55,    52,    54,     7,    14,
      16,    17,    20,    21,    23,    25,    29,    30,    31,    32,
      41,    42,    43,    49,    55,    60,    66,    76,    77,    78,
      79,    82,    83,    84,    85,    88,    90,    92,    93,    95,
      95,    71,    73,    75,     5,    50,    70,    95,    15,    22,
      28,    72,    95,    79,    92,    92,    72,    95,    49,    92,
      92,    92,    92,    51,    76,    33,    55,    57,    59,    82,
      46,    47,    86,    34,    35,    38,    39,    44,    45,    61,
      62,    87,    89,    36,    37,    91,    49,    49,    50,    53,
      56,    18,    71,    49,    24,    57,    49,    49,     8,    49,
      56,    92,    80,    81,    92,    92,    95,    82,    84,    85,
      88,    67,    71,    54,    72,    51,    76,    92,    76,    49,
      56,    53,    58,    51,    72,    10,    11,    58,     9,    81,
      65,    76,    11
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    66,    67,    67,    68,    68,    68,
      68,    69,    70,    70,    70,    71,    71,    72,    72,    72,
      72,    73,    74,    75,    75,    76,    76,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    78,    78,    78,
      78,    78,    78,    78,    78,    79,    79,    79,    79,    80,
      80,    81,    81,    82,    82,    83,    83,    83,    84,    84,
      85,    85,    86,    86,    87,    87,    88,    88,    89,    89,
      89,    89,    89,    89,    90,    90,    91,    91,    92,    92,
      92,    93,    93,    93,    94,    95
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     3,     0,     2,     1,     1,     1,
       1,     4,     1,     3,     3,     1,     3,     1,     1,     1,
       1,     4,     8,     1,     0,     0,     2,     2,     2,     4,
       1,     3,     1,     3,     3,     3,     2,     1,     1,     1,
       1,     3,     1,     1,     1,     4,     4,     3,     1,     0,
       1,     1,     3,     2,     1,     1,     1,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     2,
       5,     7,     5,     5,     7,     1
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
#line 23 "kotek.y" /* yacc.c:1646  */
    { printf("prog -> program ; Cialo \n");}
#line 1418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 27 "kotek.y" /* yacc.c:1646  */
    { printf("Cialo -> ListaDeklaracji Blok \n");}
#line 1424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 31 "kotek.y" /* yacc.c:1646  */
    { printf("Blok -> { ListaInstrukcji } \n");}
#line 1430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 35 "kotek.y" /* yacc.c:1646  */
    { printf("ListaDeklaracji -> slowo puste \n");}
#line 1436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 36 "kotek.y" /* yacc.c:1646  */
    { printf("ListaDeklaracji -> Deklaracja ListaDeklaracji \n");}
#line 1442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 40 "kotek.y" /* yacc.c:1646  */
    { printf("Deklaracja -> DeklaracjaTypu \n");}
#line 1448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 41 "kotek.y" /* yacc.c:1646  */
    { printf("Deklaracja -> DeklaracjaZmiennej \n");}
#line 1454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 42 "kotek.y" /* yacc.c:1646  */
    { printf("Deklaracja -> DeklaracjaFunkcji \n");}
#line 1460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 43 "kotek.y" /* yacc.c:1646  */
    { printf("Deklaracja -> DeklaracjaKlasy \n");}
#line 1466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 48 "kotek.y" /* yacc.c:1646  */
    { printf("DeklaracjaTypu -> Type Ident = OpisTypu \n");}
#line 1472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 52 "kotek.y" /* yacc.c:1646  */
    { printf("OpisTypu-> Ident \n");}
#line 1478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 53 "kotek.y" /* yacc.c:1646  */
    { printf("OpisTypu -> { ListaDeklaracjiZmiennej } \n");}
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 54 "kotek.y" /* yacc.c:1646  */
    { printf("OpisTypu -> array of Typ \n");}
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 59 "kotek.y" /* yacc.c:1646  */
    { printf("ListaDeklaracjiZmiennej -> DeklaracjaZmiennej \n");}
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 61 "kotek.y" /* yacc.c:1646  */
    { printf("ListaDeklaracjiZmiennej -> DeklaracjaZmiennej , ListaDeklaracjiZmiennej \n");}
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 65 "kotek.y" /* yacc.c:1646  */
    { printf("Typ -> Ident \n");}
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 66 "kotek.y" /* yacc.c:1646  */
    { printf("Typ -> string \n");}
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 67 "kotek.y" /* yacc.c:1646  */
    { printf("Typ -> int \n");}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 68 "kotek.y" /* yacc.c:1646  */
    { printf("Typ -> void \n");}
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 73 "kotek.y" /* yacc.c:1646  */
    { printf("DeklaracjaZmiennej -> var Ident : Typ \n");}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 78 "kotek.y" /* yacc.c:1646  */
    { printf("DeklaracjaFunkcji -> function Ident ( DeklaracjaArgumentow ) : Typ Cialo \n");}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 82 "kotek.y" /* yacc.c:1646  */
    { printf("DeklaracjaArgumentow -> ListaDeklaracjiZmiennej \n");}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 83 "kotek.y" /* yacc.c:1646  */
    { printf("DeklaracjaArgumentow -> Slowo puste \n");}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 87 "kotek.y" /* yacc.c:1646  */
    { printf("ListaInstrukcji -> Slowo puste \n");}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 88 "kotek.y" /* yacc.c:1646  */
    { printf("ListaInstrukcji -> Instrukcja ListaInstrukcji \n");}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 92 "kotek.y" /* yacc.c:1646  */
    { printf("Instrukcja ->  Wyrazenie ; \n");}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 93 "kotek.y" /* yacc.c:1646  */
    { printf("Instrukcja -> ZlozonaInstrukcja ; \n");}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 94 "kotek.y" /* yacc.c:1646  */
    { printf("Instrukcja -> WyrazeniePostfiksowe := Wyrazenie ; \n");}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 95 "kotek.y" /* yacc.c:1646  */
    { printf("Instrukcja -> Blok \n");}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 96 "kotek.y" /* yacc.c:1646  */
    { printf("Instrukcja -> delete Wyrazenie ; \n");}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 97 "kotek.y" /* yacc.c:1646  */
    { printf("Instrukcja -> ; \n");}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 98 "kotek.y" /* yacc.c:1646  */
    { printf("Instrukcja -> read Ident  ; \n");}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 99 "kotek.y" /* yacc.c:1646  */
    { printf("Instrukcja -> write Wyrazenie ; \n");}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 100 "kotek.y" /* yacc.c:1646  */
    { printf("Instrukcja -> return Wyrazenie ; \n");}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 101 "kotek.y" /* yacc.c:1646  */
    { printf("Instrukcja -> return ; \n");}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 105 "kotek.y" /* yacc.c:1646  */
    { printf("WyrazeniePodstawowe -> Ident \n");}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 106 "kotek.y" /* yacc.c:1646  */
    { printf("WyrazeniePodstawowe -> STRING_VAL \n");}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 107 "kotek.y" /* yacc.c:1646  */
    { printf("WyrazeniePodstawowe -> INT_VAL \n");}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 108 "kotek.y" /* yacc.c:1646  */
    { printf("WyrazeniePodstawowe -> REAL_VAL \n");}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 109 "kotek.y" /* yacc.c:1646  */
    { printf("WyrazeniePodstawowe -> (Wyrazenie) \n");}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 110 "kotek.y" /* yacc.c:1646  */
    { printf("WyrazeniePodstawowe -> this \n");}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 111 "kotek.y" /* yacc.c:1646  */
    { printf("WyrazeniePodstawowe -> super \n");}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 112 "kotek.y" /* yacc.c:1646  */
    { printf("WyrazeniePodstawowe -> null \n");}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 117 "kotek.y" /* yacc.c:1646  */
    { printf("WyrazeniePostfiksowe -> WyrazeniePostfiksowe [Wyrazenie] \n");}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 119 "kotek.y" /* yacc.c:1646  */
    { printf("WyrazeniePostfiksowe -> WyrazeniePostfiksowe (Parametry) \n");}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 121 "kotek.y" /* yacc.c:1646  */
    { printf("WyrazeniePostfiksowe -> WyrazeniePostfiksowe . Ident \n");}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 123 "kotek.y" /* yacc.c:1646  */
    { printf("WyrazeniePostfiksowe -> WyrazeniePodstawowe \n");}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 127 "kotek.y" /* yacc.c:1646  */
    { printf("Parametry -> ListaWyrazen \n");}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 131 "kotek.y" /* yacc.c:1646  */
    { printf("ListaWyrazen -> Wyrazenie \n");}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 132 "kotek.y" /* yacc.c:1646  */
    { printf("ListaWyrazen -> Wyrazenie , ListaWyrazen \n");}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 137 "kotek.y" /* yacc.c:1646  */
    { printf("WyrazenieUnarne -> OperatorUnarny WyrazenieUnarne \n");}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 139 "kotek.y" /* yacc.c:1646  */
    { printf("WyrazenieUnarne -> WyrazeniePostfiksowe \n");}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 143 "kotek.y" /* yacc.c:1646  */
    { printf("OperatorUnarny -> - \n");}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 144 "kotek.y" /* yacc.c:1646  */
    { printf("OperatorUnarny -> + \n");}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 145 "kotek.y" /* yacc.c:1646  */
    { printf("OperatorUnarny -> ! \n");}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 150 "kotek.y" /* yacc.c:1646  */
    { printf("WyrazenieMultiplikatywne -> WyrazenieMultiplikatywne OperatorMultiplikatywny WyrazenieUnarne \n");}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 152 "kotek.y" /* yacc.c:1646  */
    { printf(" WyrazenieMultiplikatywne -> WyrazenieUnarne \n");}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 157 "kotek.y" /* yacc.c:1646  */
    { printf("WyrazenieAddytywne -> WyrazenieAddytywne OperatorAddytywny WyrazenieMultiplikatywne \n");}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 159 "kotek.y" /* yacc.c:1646  */
    { printf("WyrazenieAddytywne -> WyrazenieMultiplikatywne \n");}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 163 "kotek.y" /* yacc.c:1646  */
    { printf("OperatorMultiplikatywny -> * \n");}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 164 "kotek.y" /* yacc.c:1646  */
    { printf("OperatorMultiplikatywny -> '\' \n");}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 168 "kotek.y" /* yacc.c:1646  */
    { printf("OperatorAddytywny -> + \n");}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 169 "kotek.y" /* yacc.c:1646  */
    { printf("OperatorAddytywny -> - \n");}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 174 "kotek.y" /* yacc.c:1646  */
    { printf("WyrazeniePorownania -> Wyrazenieaddytywne OperatorPorownania WyrazenieAddytywne \n");}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 176 "kotek.y" /* yacc.c:1646  */
    { printf("WyrazeniePorownania -> WyrazenieAddytywne \n");}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 180 "kotek.y" /* yacc.c:1646  */
    { printf("OperatorPorownania -> < \n");}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 181 "kotek.y" /* yacc.c:1646  */
    { printf("OperatorPorownania -> > \n");}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 182 "kotek.y" /* yacc.c:1646  */
    { printf("OperatorPorownania -> <= \n");}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 183 "kotek.y" /* yacc.c:1646  */
    { printf("OperatorPorownania -> >= \n");}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 184 "kotek.y" /* yacc.c:1646  */
    { printf("OperatorPorownania -> == \n");}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 185 "kotek.y" /* yacc.c:1646  */
    { printf("OperatorPorownania -> != \n");}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 190 "kotek.y" /* yacc.c:1646  */
    { printf("Wyrazenielogiczne -> WyrazeniePorownania OperatorLogiczny WyrazeniePorownania \n");}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 192 "kotek.y" /* yacc.c:1646  */
    { printf("Wyrazenielogiczne -> WyrazeniePorownania \n");}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 197 "kotek.y" /* yacc.c:1646  */
    { printf("OperatorLogiczny -> || \n");}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 199 "kotek.y" /* yacc.c:1646  */
    { printf("OperatorLogiczny -> && \n");}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 204 "kotek.y" /* yacc.c:1646  */
    { printf("Wyrazenie -> Wyrazenielogiczne \n");}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 206 "kotek.y" /* yacc.c:1646  */
    { printf("Wyrazenie -> new Typ \n");}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 208 "kotek.y" /* yacc.c:1646  */
    { printf("Wyrazenie -> new Typ [Wyrazenie] \n");}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 213 "kotek.y" /* yacc.c:1646  */
    { printf("ZlozonaInstrukcja -> if Wyrazenie then ListaInstrukcji else ListaInstrukcji endif \n");}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 215 "kotek.y" /* yacc.c:1646  */
    { printf("ZlozonaInstrukcja -> if Wyrazenie then ListaInstrukcji endif \n");}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 217 "kotek.y" /* yacc.c:1646  */
    { printf("ZlozonaInstrukcja -> while Wyrazenie do ListaInstrukcji done \n");}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 221 "kotek.y" /* yacc.c:1646  */
    { printf("DeklaracjaKlasy -> class Ident extends Ident { ListaDeklaracji } \n");}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 224 "kotek.y" /* yacc.c:1646  */
    { printf("Ident -> Identyfikator \n");}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1914 "y.tab.c" /* yacc.c:1646  */
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
#line 227 "kotek.y" /* yacc.c:1906  */

int yyerror(char *p)
{
	fprintf(stderr,"yyerror: %s yychar: %d \n", p, yychar);
	return 1;
}

int endofcomp(void)
{
        return (1);
}

#include "lex.yy.c"

int yywrap(void)
{
  printf("***EOF\n");
  return (1);
}

int main(int argc, char *argv[])
{
	if( argc != 2 )
	{
	 printf("usage: Kotek code< input > output \n");
	 exit (1);
	}

        out=fopen(argv[1],"w");
	yyparse();

        endofcomp();
	fclose(out);
	return 1;
}
