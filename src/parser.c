/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/parser.y"

#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "compile.h"
#include "jv_alloc.h"
#include "builtin.h"
#define YYMALLOC jv_mem_alloc
#define YYFREE jv_mem_free

#line 83 "src/parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_SRC_PARSER_H_INCLUDED
# define YY_YY_SRC_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 12 "src/parser.y"

#include "locfile.h"
struct lexer_param;

#define YYLTYPE location
#define YYLLOC_DEFAULT(Loc, Rhs, N)             \
  do {                                          \
    if (N) {                                    \
      (Loc).start = YYRHSLOC(Rhs, 1).start;     \
      (Loc).end = YYRHSLOC(Rhs, N).end;         \
    } else {                                    \
      (Loc).start = YYRHSLOC(Rhs, 0).end;       \
      (Loc).end = YYRHSLOC(Rhs, 0).end;         \
    }                                           \
  } while (0)

#line 135 "src/parser.c"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INVALID_CHARACTER = 258,       /* INVALID_CHARACTER  */
    IDENT = 259,                   /* IDENT  */
    FIELD = 260,                   /* FIELD  */
    BINDING = 261,                 /* BINDING  */
    LITERAL = 262,                 /* LITERAL  */
    FORMAT = 263,                  /* FORMAT  */
    REC = 264,                     /* ".."  */
    SETMOD = 265,                  /* "%="  */
    EQ = 266,                      /* "=="  */
    NEQ = 267,                     /* "!="  */
    DEFINEDOR = 268,               /* "//"  */
    AS = 269,                      /* "as"  */
    DEF = 270,                     /* "def"  */
    MODULE = 271,                  /* "module"  */
    IMPORT = 272,                  /* "import"  */
    INCLUDE = 273,                 /* "include"  */
    IF = 274,                      /* "if"  */
    THEN = 275,                    /* "then"  */
    ELSE = 276,                    /* "else"  */
    ELSE_IF = 277,                 /* "elif"  */
    REDUCE = 278,                  /* "reduce"  */
    FOREACH = 279,                 /* "foreach"  */
    END = 280,                     /* "end"  */
    AND = 281,                     /* "and"  */
    OR = 282,                      /* "or"  */
    TRY = 283,                     /* "try"  */
    CATCH = 284,                   /* "catch"  */
    LABEL = 285,                   /* "label"  */
    BREAK = 286,                   /* "break"  */
    LOC = 287,                     /* "$__loc__"  */
    SETPIPE = 288,                 /* "|="  */
    SETPLUS = 289,                 /* "+="  */
    SETMINUS = 290,                /* "-="  */
    SETMULT = 291,                 /* "*="  */
    SETDIV = 292,                  /* "/="  */
    SETDEFINEDOR = 293,            /* "//="  */
    LESSEQ = 294,                  /* "<="  */
    GREATEREQ = 295,               /* ">="  */
    QQSTRING_START = 296,          /* QQSTRING_START  */
    QQSTRING_TEXT = 297,           /* QQSTRING_TEXT  */
    QQSTRING_INTERP_START = 298,   /* QQSTRING_INTERP_START  */
    QQSTRING_INTERP_END = 299,     /* QQSTRING_INTERP_END  */
    QQSTRING_END = 300,            /* QQSTRING_END  */
    FUNCDEF = 301,                 /* FUNCDEF  */
    NONOPT = 302                   /* NONOPT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INVALID_CHARACTER 258
#define IDENT 259
#define FIELD 260
#define BINDING 261
#define LITERAL 262
#define FORMAT 263
#define REC 264
#define SETMOD 265
#define EQ 266
#define NEQ 267
#define DEFINEDOR 268
#define AS 269
#define DEF 270
#define MODULE 271
#define IMPORT 272
#define INCLUDE 273
#define IF 274
#define THEN 275
#define ELSE 276
#define ELSE_IF 277
#define REDUCE 278
#define FOREACH 279
#define END 280
#define AND 281
#define OR 282
#define TRY 283
#define CATCH 284
#define LABEL 285
#define BREAK 286
#define LOC 287
#define SETPIPE 288
#define SETPLUS 289
#define SETMINUS 290
#define SETMULT 291
#define SETDIV 292
#define SETDEFINEDOR 293
#define LESSEQ 294
#define GREATEREQ 295
#define QQSTRING_START 296
#define QQSTRING_TEXT 297
#define QQSTRING_INTERP_START 298
#define QQSTRING_INTERP_END 299
#define QQSTRING_END 300
#define FUNCDEF 301
#define NONOPT 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 32 "src/parser.y"

  jv literal;
  block blk;

#line 254 "src/parser.c"

};
typedef union YYSTYPE YYSTYPE;
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




int yyparse (block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr);


#endif /* !YY_YY_SRC_PARSER_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INVALID_CHARACTER = 3,          /* INVALID_CHARACTER  */
  YYSYMBOL_IDENT = 4,                      /* IDENT  */
  YYSYMBOL_FIELD = 5,                      /* FIELD  */
  YYSYMBOL_BINDING = 6,                    /* BINDING  */
  YYSYMBOL_LITERAL = 7,                    /* LITERAL  */
  YYSYMBOL_FORMAT = 8,                     /* FORMAT  */
  YYSYMBOL_REC = 9,                        /* ".."  */
  YYSYMBOL_SETMOD = 10,                    /* "%="  */
  YYSYMBOL_EQ = 11,                        /* "=="  */
  YYSYMBOL_NEQ = 12,                       /* "!="  */
  YYSYMBOL_DEFINEDOR = 13,                 /* "//"  */
  YYSYMBOL_AS = 14,                        /* "as"  */
  YYSYMBOL_DEF = 15,                       /* "def"  */
  YYSYMBOL_MODULE = 16,                    /* "module"  */
  YYSYMBOL_IMPORT = 17,                    /* "import"  */
  YYSYMBOL_INCLUDE = 18,                   /* "include"  */
  YYSYMBOL_IF = 19,                        /* "if"  */
  YYSYMBOL_THEN = 20,                      /* "then"  */
  YYSYMBOL_ELSE = 21,                      /* "else"  */
  YYSYMBOL_ELSE_IF = 22,                   /* "elif"  */
  YYSYMBOL_REDUCE = 23,                    /* "reduce"  */
  YYSYMBOL_FOREACH = 24,                   /* "foreach"  */
  YYSYMBOL_END = 25,                       /* "end"  */
  YYSYMBOL_AND = 26,                       /* "and"  */
  YYSYMBOL_OR = 27,                        /* "or"  */
  YYSYMBOL_TRY = 28,                       /* "try"  */
  YYSYMBOL_CATCH = 29,                     /* "catch"  */
  YYSYMBOL_LABEL = 30,                     /* "label"  */
  YYSYMBOL_BREAK = 31,                     /* "break"  */
  YYSYMBOL_LOC = 32,                       /* "$__loc__"  */
  YYSYMBOL_SETPIPE = 33,                   /* "|="  */
  YYSYMBOL_SETPLUS = 34,                   /* "+="  */
  YYSYMBOL_SETMINUS = 35,                  /* "-="  */
  YYSYMBOL_SETMULT = 36,                   /* "*="  */
  YYSYMBOL_SETDIV = 37,                    /* "/="  */
  YYSYMBOL_SETDEFINEDOR = 38,              /* "//="  */
  YYSYMBOL_LESSEQ = 39,                    /* "<="  */
  YYSYMBOL_GREATEREQ = 40,                 /* ">="  */
  YYSYMBOL_QQSTRING_START = 41,            /* QQSTRING_START  */
  YYSYMBOL_QQSTRING_TEXT = 42,             /* QQSTRING_TEXT  */
  YYSYMBOL_QQSTRING_INTERP_START = 43,     /* QQSTRING_INTERP_START  */
  YYSYMBOL_QQSTRING_INTERP_END = 44,       /* QQSTRING_INTERP_END  */
  YYSYMBOL_QQSTRING_END = 45,              /* QQSTRING_END  */
  YYSYMBOL_FUNCDEF = 46,                   /* FUNCDEF  */
  YYSYMBOL_47_ = 47,                       /* '|'  */
  YYSYMBOL_48_ = 48,                       /* ','  */
  YYSYMBOL_49_ = 49,                       /* '<'  */
  YYSYMBOL_50_ = 50,                       /* '>'  */
  YYSYMBOL_51_ = 51,                       /* '+'  */
  YYSYMBOL_52_ = 52,                       /* '-'  */
  YYSYMBOL_53_ = 53,                       /* '*'  */
  YYSYMBOL_54_ = 54,                       /* '/'  */
  YYSYMBOL_55_ = 55,                       /* '%'  */
  YYSYMBOL_NONOPT = 56,                    /* NONOPT  */
  YYSYMBOL_57_ = 57,                       /* '?'  */
  YYSYMBOL_58_ = 58,                       /* '.'  */
  YYSYMBOL_59_ = 59,                       /* '['  */
  YYSYMBOL_60_ = 60,                       /* ';'  */
  YYSYMBOL_61_ = 61,                       /* '='  */
  YYSYMBOL_62_ = 62,                       /* ':'  */
  YYSYMBOL_63_ = 63,                       /* '('  */
  YYSYMBOL_64_ = 64,                       /* ')'  */
  YYSYMBOL_65_ = 65,                       /* ']'  */
  YYSYMBOL_66_ = 66,                       /* '{'  */
  YYSYMBOL_67_ = 67,                       /* '}'  */
  YYSYMBOL_68_ = 68,                       /* '$'  */
  YYSYMBOL_YYACCEPT = 69,                  /* $accept  */
  YYSYMBOL_TopLevel = 70,                  /* TopLevel  */
  YYSYMBOL_Module = 71,                    /* Module  */
  YYSYMBOL_Imports = 72,                   /* Imports  */
  YYSYMBOL_FuncDefs = 73,                  /* FuncDefs  */
  YYSYMBOL_Query = 74,                     /* Query  */
  YYSYMBOL_Expr = 75,                      /* Expr  */
  YYSYMBOL_DefinedOrExpr = 76,             /* DefinedOrExpr  */
  YYSYMBOL_BinExpr = 77,                   /* BinExpr  */
  YYSYMBOL_Import = 78,                    /* Import  */
  YYSYMBOL_ImportWhat = 79,                /* ImportWhat  */
  YYSYMBOL_ImportFrom = 80,                /* ImportFrom  */
  YYSYMBOL_FuncDef = 81,                   /* FuncDef  */
  YYSYMBOL_Params = 82,                    /* Params  */
  YYSYMBOL_Param = 83,                     /* Param  */
  YYSYMBOL_StringStart = 84,               /* StringStart  */
  YYSYMBOL_String = 85,                    /* String  */
  YYSYMBOL_QQString = 86,                  /* QQString  */
  YYSYMBOL_ElseBody = 87,                  /* ElseBody  */
  YYSYMBOL_Term = 88,                      /* Term  */
  YYSYMBOL_Args = 89,                      /* Args  */
  YYSYMBOL_Arg = 90,                       /* Arg  */
  YYSYMBOL_RepPatterns = 91,               /* RepPatterns  */
  YYSYMBOL_Patterns = 92,                  /* Patterns  */
  YYSYMBOL_Pattern = 93,                   /* Pattern  */
  YYSYMBOL_ArrayPats = 94,                 /* ArrayPats  */
  YYSYMBOL_ObjPats = 95,                   /* ObjPats  */
  YYSYMBOL_ObjPat = 96,                    /* ObjPat  */
  YYSYMBOL_Keyword = 97,                   /* Keyword  */
  YYSYMBOL_DictPairs = 98,                 /* DictPairs  */
  YYSYMBOL_DictPair = 99,                  /* DictPair  */
  YYSYMBOL_DictExpr = 100                  /* DictExpr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 124 "src/parser.y"

#include "lexer.h"
struct lexer_param {
  yyscan_t lexer;
};
#define FAIL(loc, msg)                                             \
  do {                                                             \
    location l = loc;                                              \
    yyerror(&l, answer, errors, locations, lexer_param_ptr, msg);  \
    /*YYERROR*/;                                                   \
  } while (0)

void yyerror(YYLTYPE* loc, block* answer, int* errors,
             struct locfile* locations, struct lexer_param* lexer_param_ptr, const char *s){
  (*errors)++;
  locfile_locate(locations, *loc, "jq: error: %s", s);
}

int yylex(YYSTYPE* yylval, YYLTYPE* yylloc, block* answer, int* errors,
          struct locfile* locations, struct lexer_param* lexer_param_ptr) {
  yyscan_t lexer = lexer_param_ptr->lexer;
  int tok = jq_yylex(yylval, yylloc, lexer);
  if ((tok == LITERAL || tok == QQSTRING_TEXT) && !jv_is_valid(yylval->literal)) {
    jv msg = jv_invalid_get_msg(jv_copy(yylval->literal));
    if (jv_get_kind(msg) == JV_KIND_STRING) {
      FAIL(*yylloc, jv_string_value(msg));
    } else {
      FAIL(*yylloc, "Invalid literal");
    }
    jv_free(msg);
    jv_free(yylval->literal);
    yylval->literal = jv_null();
  }
  return tok;
}

/* Returns string message if the block is a constant that is not valid as an
 * object key. */
static jv check_object_key(block k) {
  if (block_is_const(k) && block_const_kind(k) != JV_KIND_STRING) {
    char errbuf[30];
    return jv_string_fmt("Cannot use %s (%s) as object key",
        jv_kind_name(block_const_kind(k)),
        jv_dump_string_trunc(block_const(k), errbuf, sizeof(errbuf)));
  }
  return jv_invalid();
}

static block gen_index(block obj, block key) {
  return BLOCK(gen_subexp(key), obj, gen_op_simple(INDEX));
}

static block gen_index_opt(block obj, block key) {
  return BLOCK(gen_subexp(key), obj, gen_op_simple(INDEX_OPT));
}

static block gen_slice_index(block obj, block start, block end, opcode idx_op) {
  block key = BLOCK(gen_subexp(gen_const(jv_object())),
                    gen_subexp(gen_const(jv_string("start"))),
                    gen_subexp(start),
                    gen_op_simple(INSERT),
                    gen_subexp(gen_const(jv_string("end"))),
                    gen_subexp(end),
                    gen_op_simple(INSERT));
  return BLOCK(key, obj, gen_op_simple(idx_op));
}

static block constant_fold(block a, block b, int op) {
  if (!block_is_single(a) || !block_is_const(a) ||
      !block_is_single(b) || !block_is_const(b))
    return gen_noop();

  jv jv_a = block_const(a);
  block_free(a);
  jv jv_b = block_const(b);
  block_free(b);

  jv res = jv_invalid();
  switch (op) {
  case '+': res = binop_plus(jv_a, jv_b); break;
  case '-': res = binop_minus(jv_a, jv_b); break;
  case '*': res = binop_multiply(jv_a, jv_b); break;
  case '/': res = binop_divide(jv_a, jv_b); break;
  case '%': res = binop_mod(jv_a, jv_b); break;
  case EQ: res = binop_equal(jv_a, jv_b); break;
  case NEQ: res = binop_notequal(jv_a, jv_b); break;
  case '<': res = binop_less(jv_a, jv_b); break;
  case '>': res = binop_greater(jv_a, jv_b); break;
  case LESSEQ: res = binop_lesseq(jv_a, jv_b); break;
  case GREATEREQ: res = binop_greatereq(jv_a, jv_b); break;
  }

  if (jv_is_valid(res))
    return gen_const(res);

  return gen_error(jv_invalid_get_msg(res));
}

static block gen_binop(block a, block b, int op) {
  block folded = constant_fold(a, b, op);
  if (!block_is_noop(folded))
    return folded;

  const char* funcname = 0;
  switch (op) {
  case '+': funcname = "_plus"; break;
  case '-': funcname = "_minus"; break;
  case '*': funcname = "_multiply"; break;
  case '/': funcname = "_divide"; break;
  case '%': funcname = "_mod"; break;
  case EQ: funcname = "_equal"; break;
  case NEQ: funcname = "_notequal"; break;
  case '<': funcname = "_less"; break;
  case '>': funcname = "_greater"; break;
  case LESSEQ: funcname = "_lesseq"; break;
  case GREATEREQ: funcname = "_greatereq"; break;
  }
  assert(funcname);

  return gen_call(funcname, BLOCK(gen_lambda(a), gen_lambda(b)));
}

static block gen_format(block a, jv fmt) {
  return BLOCK(a, gen_call("format", gen_lambda(gen_const(fmt))));
}

static block gen_definedor_assign(block object, block val) {
  block tmp = gen_op_var_fresh(STOREV, "tmp");
  return BLOCK(gen_op_simple(DUP),
               val, tmp,
               gen_call("_modify", BLOCK(gen_lambda(object),
                                         gen_lambda(gen_definedor(gen_noop(),
                                                                  gen_op_bound(LOADV, tmp))))));
}

static block gen_update(block object, block val, int optype) {
  block tmp = gen_op_var_fresh(STOREV, "tmp");
  return BLOCK(gen_op_simple(DUP),
               val,
               tmp,
               gen_call("_modify", BLOCK(gen_lambda(object),
                                         gen_lambda(gen_binop(gen_noop(),
                                                              gen_op_bound(LOADV, tmp),
                                                              optype)))));
}

static block gen_loc_object(location *loc, struct locfile *locations) {
  return gen_const(JV_OBJECT(jv_string("file"), jv_copy(locations->fname),
                             jv_string("line"), jv_number(locfile_get_line(locations, loc->start) + 1)));
}


#line 546 "src/parser.c"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1026

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  170
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  316

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    68,    55,     2,     2,
      63,    64,    53,    51,    48,    52,    58,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    62,    60,
      49,    61,    50,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    59,     2,    65,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    66,    47,    67,     2,     2,     2,     2,
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
      45,    46,    56
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   279,   279,   282,   287,   290,   305,   308,   313,   316,
     322,   325,   328,   334,   337,   340,   346,   349,   352,   355,
     358,   361,   364,   367,   370,   375,   378,   383,   386,   389,
     392,   395,   398,   401,   404,   407,   410,   413,   416,   419,
     422,   428,   431,   448,   452,   456,   462,   473,   478,   484,
     487,   492,   496,   503,   506,   512,   519,   522,   525,   531,
     534,   537,   543,   546,   549,   557,   561,   564,   567,   570,
     573,   576,   579,   582,   585,   589,   595,   598,   601,   604,
     607,   610,   613,   616,   619,   622,   625,   628,   631,   634,
     637,   640,   643,   646,   649,   652,   655,   658,   661,   668,
     671,   674,   677,   680,   684,   687,   691,   709,   713,   717,
     720,   732,   737,   738,   739,   740,   743,   746,   751,   756,
     759,   764,   767,   772,   776,   779,   784,   787,   792,   795,
     800,   803,   806,   809,   812,   815,   823,   829,   832,   835,
     838,   841,   844,   847,   850,   853,   856,   859,   862,   865,
     868,   871,   874,   877,   880,   886,   889,   892,   897,   900,
     903,   906,   910,   915,   919,   923,   927,   931,   939,   945,
     948
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INVALID_CHARACTER",
  "IDENT", "FIELD", "BINDING", "LITERAL", "FORMAT", "\"..\"", "\"%=\"",
  "\"==\"", "\"!=\"", "\"//\"", "\"as\"", "\"def\"", "\"module\"",
  "\"import\"", "\"include\"", "\"if\"", "\"then\"", "\"else\"",
  "\"elif\"", "\"reduce\"", "\"foreach\"", "\"end\"", "\"and\"", "\"or\"",
  "\"try\"", "\"catch\"", "\"label\"", "\"break\"", "\"$__loc__\"",
  "\"|=\"", "\"+=\"", "\"-=\"", "\"*=\"", "\"/=\"", "\"//=\"", "\"<=\"",
  "\">=\"", "QQSTRING_START", "QQSTRING_TEXT", "QQSTRING_INTERP_START",
  "QQSTRING_INTERP_END", "QQSTRING_END", "FUNCDEF", "'|'", "','", "'<'",
  "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "NONOPT", "'?'", "'.'", "'['",
  "';'", "'='", "':'", "'('", "')'", "']'", "'{'", "'}'", "'$'", "$accept",
  "TopLevel", "Module", "Imports", "FuncDefs", "Query", "Expr",
  "DefinedOrExpr", "BinExpr", "Import", "ImportWhat", "ImportFrom",
  "FuncDef", "Params", "Param", "StringStart", "String", "QQString",
  "ElseBody", "Term", "Args", "Arg", "RepPatterns", "Patterns", "Pattern",
  "ArrayPats", "ObjPats", "ObjPat", "Keyword", "DictPairs", "DictPair",
  "DictExpr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-159)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-156)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,   801,    31,   132,    15,    11,  -159,  -159,    41,  -159,
      82,   801,   842,   842,   842,   115,    18,  -159,  -159,   842,
     283,   414,   176,    28,    56,    25,   113,  -159,   920,   801,
    -159,  -159,     8,  -159,    22,    22,   801,   132,   606,   801,
    -159,  -159,   -46,    42,   121,   162,   167,   156,  -159,  -159,
       8,  -159,   210,    41,   164,   175,  -159,    29,   173,   -25,
      13,   181,   193,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,   801,   194,   198,   214,   234,   239,   801,   801,
    -159,     5,   842,   842,   842,   842,   842,   842,   842,   842,
     842,   842,   842,   842,   842,   842,   842,   842,   842,   842,
     842,   842,   842,   842,   131,   233,   249,  -159,    20,   348,
     311,  -159,  -159,  -159,   131,   801,  -159,  -159,    72,   131,
      84,  -159,   801,   184,   480,     5,     5,   521,   801,  -159,
    -159,  -159,  -159,  -159,  -159,   842,  -159,   842,   842,    45,
     842,   842,  -159,   577,   323,   131,  -159,  -159,     5,   898,
     282,   299,   294,   937,   954,   954,  -159,   219,   971,   212,
     937,   937,   937,   937,   937,   937,   954,   954,   954,   954,
     260,   260,  -159,  -159,  -159,   937,  -159,   801,  -159,  -159,
     671,   301,   295,   801,   302,    81,   322,  -159,  -159,   801,
    -159,   127,  -159,  -159,   145,  -159,  -159,    78,   298,   303,
    -159,  -159,   131,  -159,   315,   315,   315,   306,   315,   315,
     307,  -159,  -159,  -159,    65,   308,   312,   313,   801,   319,
     -34,  -159,   320,   351,   801,   178,   316,    36,  -159,  -159,
      69,  -159,   736,   326,  -159,  -159,  -159,  -159,   184,   324,
     801,   801,  -159,  -159,   801,   801,   842,   842,     5,  -159,
       5,     5,     5,   146,     5,   898,  -159,     5,     5,   131,
    -159,  -159,   327,   328,   330,    75,  -159,  -159,   801,    -7,
      50,   232,   238,   315,   315,  -159,  -159,  -159,  -159,   329,
    -159,  -159,  -159,   331,  -159,  -159,  -159,   333,   242,  -159,
     801,   801,   801,     5,  -159,  -159,    78,   165,   154,  -159,
    -159,  -159,   801,  -159,   172,  -159
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     6,   110,    71,   108,    91,    93,    63,
       0,     0,     0,     0,     0,     0,     0,   109,    54,     0,
       0,     0,     0,     0,     0,     0,    15,    16,    26,     0,
      56,    92,    40,     1,     0,     0,     8,     6,     0,     0,
      67,    53,     0,     0,     0,     0,   106,     0,    65,    64,
      94,    74,     0,     0,    73,     0,    97,     0,     0,     0,
       0,   164,   163,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   165,     0,   161,   166,     0,   156,     0,     0,     0,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,     0,    70,    90,     0,     0,
       0,    46,    45,     3,     2,     8,     7,    41,     0,   118,
       0,   116,     0,     0,     0,     0,     0,     0,     0,    75,
      69,   113,    96,   112,    95,     0,   115,     0,     0,     0,
       0,     0,    98,     0,     0,    13,    14,   123,     0,     0,
       0,     0,   122,    24,    34,    35,    25,    26,    28,    27,
      19,    20,    21,    22,    23,    18,    38,    39,    36,    37,
      29,    30,    31,    32,    33,    17,    57,     0,    55,    66,
       0,    72,     0,     0,    81,     0,     0,     9,    42,     0,
     111,     0,    52,    51,     0,    49,   103,     0,     0,     0,
     105,   104,    12,   170,   168,   158,   162,     0,   160,   159,
       0,   157,   107,   126,     0,     0,     0,   130,     0,     0,
       0,   128,     0,     0,     0,     0,    83,     0,    68,   114,
       0,    80,     0,    77,    44,    43,   117,    47,     0,     0,
       0,     0,    61,   102,     0,     0,     0,     0,     0,   124,
       0,     0,     0,     0,     0,     0,   125,     0,     0,    11,
      58,    82,    79,    89,    88,     0,    76,    50,     0,     0,
       0,     0,     0,   169,   167,   127,   136,   132,   131,     0,
     134,   129,   133,   121,    78,    86,    85,    87,     0,    60,
       0,     0,     0,     0,    84,    48,     0,     0,     0,   135,
      59,    99,     0,   101,     0,   100
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -159,  -159,  -159,   340,   240,    -1,    -9,   297,    60,  -159,
    -159,   358,   -29,  -159,   147,  -159,    -8,  -159,    88,   377,
    -159,   199,  -159,    80,  -156,  -159,  -159,   134,  -158,   244,
    -159,  -142
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,    36,   123,   114,    26,    27,    28,    37,
      38,   120,    29,   204,   205,    30,    31,   115,   253,    32,
     130,   131,   160,   161,   162,   224,   230,   231,    84,    85,
      86,   214
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,   232,   223,    44,    45,   215,   216,   125,   218,   219,
      43,   157,    54,   116,   265,    83,   132,   133,   299,    48,
      57,    59,    88,    89,    49,     1,   121,   121,    53,    60,
      53,    33,    61,   266,    62,   124,    53,   128,   129,   144,
      88,    89,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    18,   134,    18,   158,   117,   118,   119,    40,    18,
     300,   159,    88,    89,    46,   145,    88,    89,    39,   190,
     146,   149,    41,    88,    89,    90,    42,   155,   156,    88,
      89,    82,    88,    89,   142,  -155,   125,    88,    89,   250,
     251,   272,   285,   252,   286,   287,   288,   232,   290,   217,
     191,   292,   293,   258,   283,   284,    88,    89,   195,    88,
      89,    47,    88,    89,    87,    88,    89,    91,    88,    89,
     259,   201,   198,   207,   273,   135,   213,   212,   213,   213,
     297,   213,   213,   242,   199,    83,   243,   309,   200,    34,
      35,   229,   163,   164,   165,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    88,    89,   136,    58,    88,    89,
       4,     5,     6,     7,     8,     9,   235,   247,   202,   237,
     203,    10,   240,    88,    89,    11,   137,   211,   129,    12,
      13,    88,    89,   138,    14,   248,    15,    16,    17,   249,
     289,   139,    88,    89,   312,   208,   209,    18,   313,    88,
      89,   140,   270,    93,    94,    88,    89,   263,    19,   311,
      93,    94,    95,   269,    20,    21,   315,   143,    96,    22,
     141,   275,    23,   147,    24,    96,    97,   213,   213,   279,
     280,   104,   105,   281,   282,   148,   150,   229,   104,   105,
     151,   106,   107,   108,   109,   110,   111,   112,   106,   107,
     108,   109,   110,   111,   112,   186,   187,   298,   188,    88,
      89,   152,   153,   -62,    51,    88,    89,    52,   -62,    88,
      89,    53,   301,   -62,   -62,   -62,   -62,   -62,   302,   306,
     307,   308,   305,   -62,   -62,   -62,   189,   154,   -62,   -62,
     -62,   314,   -62,   110,   111,   112,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,    18,   196,   244,   -62,   245,   222,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   233,
     -62,   -62,   -62,   -62,   -62,   -62,   234,   -62,   -62,   192,
     -62,  -120,     4,     5,     6,     7,     8,     9,   238,   241,
     239,   254,   256,    10,   268,   197,   255,    11,   257,   145,
     260,    12,    13,   271,   261,   262,    14,   126,    15,    16,
      17,   264,   267,   276,   294,   295,   278,   296,  -119,    18,
     304,   303,   166,   122,   310,   277,    50,   221,   246,   291,
      19,     0,     0,     0,     0,     0,    20,    21,     0,     0,
     193,    22,     0,   194,    23,    55,    24,     0,     4,     5,
       6,     7,     8,     9,     0,     0,     0,     0,     0,    10,
       0,     0,     0,    11,     0,     0,     0,    12,    13,     0,
       0,     0,    14,     0,    15,    16,    17,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,     0,     0,
       0,     0,    20,    21,     0,     0,     0,    22,     0,    56,
      23,   206,    24,     0,     4,     5,     6,     7,     8,     9,
       0,     0,     0,     0,     0,    10,     0,     0,     0,    11,
       0,     0,     0,    12,    13,     0,     0,     0,    14,     0,
      15,    16,    17,     0,     0,     0,     0,     0,     0,     0,
       0,    18,   210,     0,     0,     4,     5,     6,     7,     8,
       9,     0,    19,     0,     0,     0,     0,     0,    20,    21,
      11,     0,     0,    22,    12,    13,    23,     0,    24,    14,
       0,     0,    16,    17,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,     0,     0,     0,   220,    20,
      21,    61,     0,    62,    22,    53,     0,    23,     0,    24,
       0,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
       4,     5,     6,     7,     8,     9,     0,     0,    18,     0,
       0,    10,     0,     0,     0,    11,     0,     0,     0,    12,
      13,     0,     0,     0,    14,     0,    15,    16,    17,     0,
      82,     0,     0,     0,  -155,     0,     0,    18,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,     0,     0,    20,    21,   127,     0,     0,    22,
       0,     0,    23,     0,    24,     4,     5,     6,     7,     8,
       9,     0,     0,     0,     0,     0,    10,     0,     0,     0,
      11,     0,     0,     0,    12,    13,     0,     0,     0,    14,
       0,    15,    16,    17,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,     0,     0,     0,     0,    20,
      21,     0,     0,     0,    22,     0,   236,    23,     0,    24,
       4,     5,     6,     7,     8,     9,     0,     0,     0,     0,
       0,    10,     0,     0,     0,    11,     0,     0,     0,    12,
      13,     0,     0,     0,    14,     0,    15,    16,    17,     0,
       0,     0,     0,     0,     0,     0,     0,    18,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,     0,     0,    20,    21,     0,     0,     0,    22,
       0,   274,    23,     0,    24,     4,     5,     6,     7,     8,
       9,     0,     0,     0,     0,     0,    10,     0,     0,     0,
      11,     0,     0,     0,    12,    13,     0,     0,     0,    14,
       0,    15,    16,    17,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,     4,     5,     6,     7,
       8,     9,     0,    19,     0,     0,     0,     0,     0,    20,
      21,    11,     0,     0,    22,    12,    13,    23,     0,    24,
      14,     0,     0,    16,    17,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,     0,     0,     0,   225,
      20,    21,   226,     0,   227,    22,    53,     0,    23,     0,
      24,     0,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      92,    93,    94,    95,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,     0,     0,    96,    97,    93,    94,
       0,     0,     0,    98,    99,   100,   101,   102,   103,   104,
     105,   228,     0,    96,    97,  -156,  -156,     0,     0,   106,
     107,   108,   109,   110,   111,   112,   104,   105,     0,     0,
       0,   113,    93,    94,     0,     0,   106,   107,   108,   109,
     110,   111,   112,  -156,  -156,     0,     0,     0,     0,     0,
       0,     0,     0,  -156,  -156,   108,   109,   110,   111,   112,
     104,   105,     0,     0,     0,     0,     0,     0,     0,     0,
     106,   107,   108,   109,   110,   111,   112
};

static const yytype_int16 yycheck[] =
{
       1,   159,   158,    12,    13,   147,   148,    36,   150,   151,
      11,     6,    20,     5,    48,    23,    62,    63,    25,     1,
      21,    22,    47,    48,     6,    16,    34,    35,     8,     1,
       8,     0,     4,    67,     6,    36,     8,    38,    39,    64,
      47,    48,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    41,    20,    41,    59,    57,    58,    59,    57,    41,
      20,    66,    47,    48,    14,    62,    47,    48,    63,    59,
      67,    82,    41,    47,    48,    60,     4,    88,    89,    47,
      48,    63,    47,    48,    65,    67,   125,    47,    48,    21,
      22,    65,   258,    25,   260,   261,   262,   265,   264,    64,
     118,   267,   268,    48,   256,   257,    47,    48,   119,    47,
      48,     6,    47,    48,    68,    47,    48,    14,    47,    48,
      65,   132,    60,   134,    65,    14,   145,   138,   147,   148,
      65,   150,   151,    62,    60,   153,    65,   303,    64,    17,
      18,   159,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    47,    48,    14,     1,    47,    48,
       4,     5,     6,     7,     8,     9,   187,    60,     4,   190,
       6,    15,   193,    47,    48,    19,    29,   137,   199,    23,
      24,    47,    48,    47,    28,    60,    30,    31,    32,    64,
      64,     1,    47,    48,    60,   135,   136,    41,    64,    47,
      48,    57,    44,    11,    12,    47,    48,   228,    52,    64,
      11,    12,    13,   234,    58,    59,    64,    64,    26,    63,
      65,   242,    66,    62,    68,    26,    27,   256,   257,   250,
     251,    39,    40,   254,   255,    62,    62,   265,    39,    40,
      62,    49,    50,    51,    52,    53,    54,    55,    49,    50,
      51,    52,    53,    54,    55,    42,    43,   278,    45,    47,
      48,    67,    48,     0,     1,    47,    48,     4,     5,    47,
      48,     8,    60,    10,    11,    12,    13,    14,    60,   300,
     301,   302,    60,    20,    21,    22,    57,    68,    25,    26,
      27,   312,    29,    53,    54,    55,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    14,     4,    44,     6,     6,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    57,
      57,    58,    59,    60,    61,    62,    47,    64,    65,     1,
      67,    57,     4,     5,     6,     7,     8,     9,    57,    57,
      65,    63,    47,    15,    13,   125,    63,    19,    62,    62,
      62,    23,    24,    57,    62,    62,    28,    37,    30,    31,
      32,    62,    62,    57,    57,    57,    62,    57,    57,    41,
      57,    62,    95,    35,   306,   248,    19,   153,   199,   265,
      52,    -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,
      62,    63,    -1,    65,    66,     1,    68,    -1,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    23,    24,    -1,
      -1,    -1,    28,    -1,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    58,    59,    -1,    -1,    -1,    63,    -1,    65,
      66,     1,    68,    -1,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,    -1,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,     1,    -1,    -1,     4,     5,     6,     7,     8,
       9,    -1,    52,    -1,    -1,    -1,    -1,    -1,    58,    59,
      19,    -1,    -1,    63,    23,    24,    66,    -1,    68,    28,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,     1,    58,
      59,     4,    -1,     6,    63,     8,    -1,    66,    -1,    68,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
       4,     5,     6,     7,     8,     9,    -1,    -1,    41,    -1,
      -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    23,
      24,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    -1,
      63,    -1,    -1,    -1,    67,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,    63,
      -1,    -1,    66,    -1,    68,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    58,
      59,    -1,    -1,    -1,    63,    -1,    65,    66,    -1,    68,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    23,
      24,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    63,
      -1,    65,    66,    -1,    68,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,     4,     5,     6,     7,
       8,     9,    -1,    52,    -1,    -1,    -1,    -1,    -1,    58,
      59,    19,    -1,    -1,    63,    23,    24,    66,    -1,    68,
      28,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,     1,
      58,    59,     4,    -1,     6,    63,     8,    -1,    66,    -1,
      68,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    11,    12,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    63,    -1,    26,    27,    11,    12,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    39,    40,    -1,    -1,
      -1,    61,    11,    12,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    16,    70,    71,     4,     5,     6,     7,     8,     9,
      15,    19,    23,    24,    28,    30,    31,    32,    41,    52,
      58,    59,    63,    66,    68,    74,    75,    76,    77,    81,
      84,    85,    88,     0,    17,    18,    72,    78,    79,    63,
      57,    41,     4,    74,    75,    75,    77,     6,     1,     6,
      88,     1,     4,     8,    85,     1,    65,    74,     1,    74,
       1,     4,     6,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    63,    85,    97,    98,    99,    68,    47,    48,
      60,    14,    10,    11,    12,    13,    26,    27,    33,    34,
      35,    36,    37,    38,    39,    40,    49,    50,    51,    52,
      53,    54,    55,    61,    74,    86,     5,    57,    58,    59,
      80,    85,    80,    73,    74,    81,    72,    60,    74,    74,
      89,    90,    62,    63,    20,    14,    14,    29,    47,     1,
      57,    65,    65,    64,    64,    62,    67,    62,    62,    74,
      62,    62,    67,    48,    68,    74,    74,     6,    59,    66,
      91,    92,    93,    77,    77,    77,    76,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    42,    43,    45,    57,
      59,    85,     1,    62,    65,    74,    14,    73,    60,    60,
      64,    74,     4,     6,    82,    83,     1,    74,    92,    92,
       1,    77,    74,    75,   100,   100,   100,    64,   100,   100,
       1,    98,     6,    93,    94,     1,     4,     6,    63,    85,
      95,    96,    97,    57,    47,    74,    65,    74,    57,    65,
      74,    57,    62,    65,     4,     6,    90,    60,    60,    64,
      21,    22,    25,    87,    63,    63,    47,    62,    48,    65,
      62,    62,    62,    74,    62,    48,    67,    62,    13,    74,
      44,    57,    65,    65,    65,    74,    57,    83,    62,    74,
      74,    74,    74,   100,   100,    93,    93,    93,    93,    64,
      93,    96,    93,    93,    57,    57,    57,    65,    74,    25,
      20,    60,    60,    62,    57,    60,    74,    74,    74,    93,
      87,    64,    60,    64,    74,    64
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    69,    70,    70,    71,    71,    72,    72,    73,    73,
      74,    74,    74,    74,    74,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    76,    76,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    78,    78,    79,    79,    79,    80,    81,    81,    82,
      82,    83,    83,    84,    84,    85,    86,    86,    86,    87,
      87,    87,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    89,    89,    90,    91,
      91,    92,    92,    93,    93,    93,    94,    94,    95,    95,
      96,    96,    96,    96,    96,    96,    96,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    98,    98,    98,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,   100,
     100
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     0,     3,     0,     2,     0,     2,
       2,     5,     4,     3,     3,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     2,     3,     4,     4,     2,     1,     5,     8,     1,
       3,     1,     1,     2,     1,     3,     0,     2,     4,     5,
       3,     1,     1,     1,     2,     2,     3,     2,     4,     3,
       2,     1,     3,     2,     2,     3,     5,     4,     6,     5,
       4,     3,     5,     4,     7,     6,     6,     6,     5,     5,
       2,     1,     1,     1,     2,     3,     3,     2,     3,     9,
      11,     9,     5,     4,     4,     4,     2,     4,     1,     1,
       1,     4,     3,     3,     4,     3,     1,     3,     1,     4,
       1,     4,     1,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     3,     3,     3,     5,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     3,     3,     3,
       3,     1,     3,     1,     1,     1,     1,     5,     3,     3,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (&yylloc, answer, errors, locations, lexer_param_ptr, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
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

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, answer, errors, locations, lexer_param_ptr); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (answer);
  YY_USE (errors);
  YY_USE (locations);
  YY_USE (lexer_param_ptr);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, answer, errors, locations, lexer_param_ptr);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), answer, errors, locations, lexer_param_ptr);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, answer, errors, locations, lexer_param_ptr); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (answer);
  YY_USE (errors);
  YY_USE (locations);
  YY_USE (lexer_param_ptr);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_IDENT: /* IDENT  */
#line 37 "src/parser.y"
            { jv_free(((*yyvaluep).literal)); }
#line 1968 "src/parser.c"
        break;

    case YYSYMBOL_FIELD: /* FIELD  */
#line 37 "src/parser.y"
            { jv_free(((*yyvaluep).literal)); }
#line 1974 "src/parser.c"
        break;

    case YYSYMBOL_BINDING: /* BINDING  */
#line 37 "src/parser.y"
            { jv_free(((*yyvaluep).literal)); }
#line 1980 "src/parser.c"
        break;

    case YYSYMBOL_LITERAL: /* LITERAL  */
#line 37 "src/parser.y"
            { jv_free(((*yyvaluep).literal)); }
#line 1986 "src/parser.c"
        break;

    case YYSYMBOL_FORMAT: /* FORMAT  */
#line 37 "src/parser.y"
            { jv_free(((*yyvaluep).literal)); }
#line 1992 "src/parser.c"
        break;

    case YYSYMBOL_QQSTRING_TEXT: /* QQSTRING_TEXT  */
#line 37 "src/parser.y"
            { jv_free(((*yyvaluep).literal)); }
#line 1998 "src/parser.c"
        break;

    case YYSYMBOL_Module: /* Module  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2004 "src/parser.c"
        break;

    case YYSYMBOL_Imports: /* Imports  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2010 "src/parser.c"
        break;

    case YYSYMBOL_FuncDefs: /* FuncDefs  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2016 "src/parser.c"
        break;

    case YYSYMBOL_Query: /* Query  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2022 "src/parser.c"
        break;

    case YYSYMBOL_Expr: /* Expr  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2028 "src/parser.c"
        break;

    case YYSYMBOL_DefinedOrExpr: /* DefinedOrExpr  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2034 "src/parser.c"
        break;

    case YYSYMBOL_BinExpr: /* BinExpr  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2040 "src/parser.c"
        break;

    case YYSYMBOL_Import: /* Import  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2046 "src/parser.c"
        break;

    case YYSYMBOL_ImportWhat: /* ImportWhat  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2052 "src/parser.c"
        break;

    case YYSYMBOL_ImportFrom: /* ImportFrom  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2058 "src/parser.c"
        break;

    case YYSYMBOL_FuncDef: /* FuncDef  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2064 "src/parser.c"
        break;

    case YYSYMBOL_Params: /* Params  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2070 "src/parser.c"
        break;

    case YYSYMBOL_Param: /* Param  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2076 "src/parser.c"
        break;

    case YYSYMBOL_StringStart: /* StringStart  */
#line 37 "src/parser.y"
            { jv_free(((*yyvaluep).literal)); }
#line 2082 "src/parser.c"
        break;

    case YYSYMBOL_String: /* String  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2088 "src/parser.c"
        break;

    case YYSYMBOL_QQString: /* QQString  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2094 "src/parser.c"
        break;

    case YYSYMBOL_ElseBody: /* ElseBody  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2100 "src/parser.c"
        break;

    case YYSYMBOL_Term: /* Term  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2106 "src/parser.c"
        break;

    case YYSYMBOL_Args: /* Args  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2112 "src/parser.c"
        break;

    case YYSYMBOL_Arg: /* Arg  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2118 "src/parser.c"
        break;

    case YYSYMBOL_RepPatterns: /* RepPatterns  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2124 "src/parser.c"
        break;

    case YYSYMBOL_Patterns: /* Patterns  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2130 "src/parser.c"
        break;

    case YYSYMBOL_Pattern: /* Pattern  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2136 "src/parser.c"
        break;

    case YYSYMBOL_ArrayPats: /* ArrayPats  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2142 "src/parser.c"
        break;

    case YYSYMBOL_ObjPats: /* ObjPats  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2148 "src/parser.c"
        break;

    case YYSYMBOL_ObjPat: /* ObjPat  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2154 "src/parser.c"
        break;

    case YYSYMBOL_Keyword: /* Keyword  */
#line 37 "src/parser.y"
            { jv_free(((*yyvaluep).literal)); }
#line 2160 "src/parser.c"
        break;

    case YYSYMBOL_DictPairs: /* DictPairs  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2166 "src/parser.c"
        break;

    case YYSYMBOL_DictPair: /* DictPair  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2172 "src/parser.c"
        break;

    case YYSYMBOL_DictExpr: /* DictExpr  */
#line 38 "src/parser.y"
            { block_free(((*yyvaluep).blk)); }
#line 2178 "src/parser.c"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, answer, errors, locations, lexer_param_ptr);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* TopLevel: Module Imports Query  */
#line 279 "src/parser.y"
                     {
  *answer = BLOCK((yyvsp[-2].blk), (yyvsp[-1].blk), gen_op_simple(TOP), (yyvsp[0].blk));
}
#line 2486 "src/parser.c"
    break;

  case 3: /* TopLevel: Module Imports FuncDefs  */
#line 282 "src/parser.y"
                        {
  *answer = BLOCK((yyvsp[-2].blk), (yyvsp[-1].blk), (yyvsp[0].blk));
}
#line 2494 "src/parser.c"
    break;

  case 4: /* Module: %empty  */
#line 287 "src/parser.y"
       {
  (yyval.blk) = gen_noop();
}
#line 2502 "src/parser.c"
    break;

  case 5: /* Module: "module" Query ';'  */
#line 290 "src/parser.y"
                   {
  if (!block_is_const((yyvsp[-1].blk))) {
    FAIL((yylsp[-1]), "Module metadata must be constant");
    (yyval.blk) = gen_noop();
    block_free((yyvsp[-1].blk));
  } else if (block_const_kind((yyvsp[-1].blk)) != JV_KIND_OBJECT) {
    FAIL((yylsp[-1]), "Module metadata must be an object");
    (yyval.blk) = gen_noop();
    block_free((yyvsp[-1].blk));
  } else {
    (yyval.blk) = gen_module((yyvsp[-1].blk));
  }
}
#line 2520 "src/parser.c"
    break;

  case 6: /* Imports: %empty  */
#line 305 "src/parser.y"
       {
  (yyval.blk) = gen_noop();
}
#line 2528 "src/parser.c"
    break;

  case 7: /* Imports: Import Imports  */
#line 308 "src/parser.y"
               {
  (yyval.blk) = BLOCK((yyvsp[-1].blk), (yyvsp[0].blk));
}
#line 2536 "src/parser.c"
    break;

  case 8: /* FuncDefs: %empty  */
#line 313 "src/parser.y"
       {
  (yyval.blk) = gen_noop();
}
#line 2544 "src/parser.c"
    break;

  case 9: /* FuncDefs: FuncDef FuncDefs  */
#line 316 "src/parser.y"
                 {
  (yyval.blk) = block_join((yyvsp[-1].blk), (yyvsp[0].blk));
}
#line 2552 "src/parser.c"
    break;

  case 10: /* Query: FuncDef Query  */
#line 322 "src/parser.y"
                            {
  (yyval.blk) = block_bind_referenced((yyvsp[-1].blk), (yyvsp[0].blk), OP_IS_CALL_PSEUDO);
}
#line 2560 "src/parser.c"
    break;

  case 11: /* Query: Expr "as" Patterns '|' Query  */
#line 325 "src/parser.y"
                             {
  (yyval.blk) = gen_destructure((yyvsp[-4].blk), (yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2568 "src/parser.c"
    break;

  case 12: /* Query: "label" BINDING '|' Query  */
#line 328 "src/parser.y"
                          {
  jv v = jv_string_fmt("*label-%s", jv_string_value((yyvsp[-2].literal)));
  (yyval.blk) = gen_location((yyloc), locations, gen_label(jv_string_value(v), (yyvsp[0].blk)));
  jv_free((yyvsp[-2].literal));
  jv_free(v);
}
#line 2579 "src/parser.c"
    break;

  case 13: /* Query: Query '|' Query  */
#line 334 "src/parser.y"
                {
  (yyval.blk) = block_join((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2587 "src/parser.c"
    break;

  case 14: /* Query: Query ',' Query  */
#line 337 "src/parser.y"
                {
  (yyval.blk) = gen_both((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2595 "src/parser.c"
    break;

  case 15: /* Query: Expr  */
#line 340 "src/parser.y"
     {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 2603 "src/parser.c"
    break;

  case 16: /* Expr: DefinedOrExpr  */
#line 346 "src/parser.y"
              {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 2611 "src/parser.c"
    break;

  case 17: /* Expr: BinExpr '=' BinExpr  */
#line 349 "src/parser.y"
                    {
  (yyval.blk) = gen_call("_assign", BLOCK(gen_lambda((yyvsp[-2].blk)), gen_lambda((yyvsp[0].blk))));
}
#line 2619 "src/parser.c"
    break;

  case 18: /* Expr: BinExpr "//=" BinExpr  */
#line 352 "src/parser.y"
                      {
  (yyval.blk) = gen_definedor_assign((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2627 "src/parser.c"
    break;

  case 19: /* Expr: BinExpr "|=" BinExpr  */
#line 355 "src/parser.y"
                     {
  (yyval.blk) = gen_call("_modify", BLOCK(gen_lambda((yyvsp[-2].blk)), gen_lambda((yyvsp[0].blk))));
}
#line 2635 "src/parser.c"
    break;

  case 20: /* Expr: BinExpr "+=" BinExpr  */
#line 358 "src/parser.y"
                     {
  (yyval.blk) = gen_update((yyvsp[-2].blk), (yyvsp[0].blk), '+');
}
#line 2643 "src/parser.c"
    break;

  case 21: /* Expr: BinExpr "-=" BinExpr  */
#line 361 "src/parser.y"
                     {
  (yyval.blk) = gen_update((yyvsp[-2].blk), (yyvsp[0].blk), '-');
}
#line 2651 "src/parser.c"
    break;

  case 22: /* Expr: BinExpr "*=" BinExpr  */
#line 364 "src/parser.y"
                     {
  (yyval.blk) = gen_update((yyvsp[-2].blk), (yyvsp[0].blk), '*');
}
#line 2659 "src/parser.c"
    break;

  case 23: /* Expr: BinExpr "/=" BinExpr  */
#line 367 "src/parser.y"
                     {
  (yyval.blk) = gen_update((yyvsp[-2].blk), (yyvsp[0].blk), '/');
}
#line 2667 "src/parser.c"
    break;

  case 24: /* Expr: BinExpr "%=" BinExpr  */
#line 370 "src/parser.y"
                       {
  (yyval.blk) = gen_update((yyvsp[-2].blk), (yyvsp[0].blk), '%');
}
#line 2675 "src/parser.c"
    break;

  case 25: /* DefinedOrExpr: BinExpr "//" DefinedOrExpr  */
#line 375 "src/parser.y"
                           {
  (yyval.blk) = gen_definedor((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2683 "src/parser.c"
    break;

  case 26: /* DefinedOrExpr: BinExpr  */
#line 378 "src/parser.y"
        {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 2691 "src/parser.c"
    break;

  case 27: /* BinExpr: BinExpr "or" BinExpr  */
#line 383 "src/parser.y"
                     {
  (yyval.blk) = gen_or((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2699 "src/parser.c"
    break;

  case 28: /* BinExpr: BinExpr "and" BinExpr  */
#line 386 "src/parser.y"
                      {
  (yyval.blk) = gen_and((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2707 "src/parser.c"
    break;

  case 29: /* BinExpr: BinExpr '+' BinExpr  */
#line 389 "src/parser.y"
                    {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), '+');
}
#line 2715 "src/parser.c"
    break;

  case 30: /* BinExpr: BinExpr '-' BinExpr  */
#line 392 "src/parser.y"
                    {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), '-');
}
#line 2723 "src/parser.c"
    break;

  case 31: /* BinExpr: BinExpr '*' BinExpr  */
#line 395 "src/parser.y"
                    {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), '*');
}
#line 2731 "src/parser.c"
    break;

  case 32: /* BinExpr: BinExpr '/' BinExpr  */
#line 398 "src/parser.y"
                    {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), '/');
}
#line 2739 "src/parser.c"
    break;

  case 33: /* BinExpr: BinExpr '%' BinExpr  */
#line 401 "src/parser.y"
                    {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), '%');
}
#line 2747 "src/parser.c"
    break;

  case 34: /* BinExpr: BinExpr "==" BinExpr  */
#line 404 "src/parser.y"
                     {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), EQ);
}
#line 2755 "src/parser.c"
    break;

  case 35: /* BinExpr: BinExpr "!=" BinExpr  */
#line 407 "src/parser.y"
                     {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), NEQ);
}
#line 2763 "src/parser.c"
    break;

  case 36: /* BinExpr: BinExpr '<' BinExpr  */
#line 410 "src/parser.y"
                    {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), '<');
}
#line 2771 "src/parser.c"
    break;

  case 37: /* BinExpr: BinExpr '>' BinExpr  */
#line 413 "src/parser.y"
                    {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), '>');
}
#line 2779 "src/parser.c"
    break;

  case 38: /* BinExpr: BinExpr "<=" BinExpr  */
#line 416 "src/parser.y"
                     {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), LESSEQ);
}
#line 2787 "src/parser.c"
    break;

  case 39: /* BinExpr: BinExpr ">=" BinExpr  */
#line 419 "src/parser.y"
                     {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), GREATEREQ);
}
#line 2795 "src/parser.c"
    break;

  case 40: /* BinExpr: Term  */
#line 422 "src/parser.y"
                  {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 2803 "src/parser.c"
    break;

  case 41: /* Import: ImportWhat ';'  */
#line 428 "src/parser.y"
               {
  (yyval.blk) = (yyvsp[-1].blk);
}
#line 2811 "src/parser.c"
    break;

  case 42: /* Import: ImportWhat Query ';'  */
#line 431 "src/parser.y"
                     {
  if (!block_is_const((yyvsp[-1].blk))) {
    FAIL((yylsp[-1]), "Module metadata must be constant");
    (yyval.blk) = gen_noop();
    block_free((yyvsp[-2].blk));
    block_free((yyvsp[-1].blk));
  } else if (block_const_kind((yyvsp[-1].blk)) != JV_KIND_OBJECT) {
    FAIL((yylsp[-1]), "Module metadata must be an object");
    (yyval.blk) = gen_noop();
    block_free((yyvsp[-2].blk));
    block_free((yyvsp[-1].blk));
  } else {
    (yyval.blk) = gen_import_meta((yyvsp[-2].blk), (yyvsp[-1].blk));
  }
}
#line 2831 "src/parser.c"
    break;

  case 43: /* ImportWhat: "import" ImportFrom "as" BINDING  */
#line 448 "src/parser.y"
                                 {
  (yyval.blk) = gen_import(block_const((yyvsp[-2].blk)), (yyvsp[0].literal), 1);
  block_free((yyvsp[-2].blk));
}
#line 2840 "src/parser.c"
    break;

  case 44: /* ImportWhat: "import" ImportFrom "as" IDENT  */
#line 452 "src/parser.y"
                               {
  (yyval.blk) = gen_import(block_const((yyvsp[-2].blk)), (yyvsp[0].literal), 0);
  block_free((yyvsp[-2].blk));
}
#line 2849 "src/parser.c"
    break;

  case 45: /* ImportWhat: "include" ImportFrom  */
#line 456 "src/parser.y"
                     {
  (yyval.blk) = gen_import(block_const((yyvsp[0].blk)), jv_invalid(), 0);
  block_free((yyvsp[0].blk));
}
#line 2858 "src/parser.c"
    break;

  case 46: /* ImportFrom: String  */
#line 462 "src/parser.y"
       {
  if (!block_is_const((yyvsp[0].blk))) {
    FAIL((yylsp[0]), "Import path must be constant");
    (yyval.blk) = gen_const(jv_string(""));
    block_free((yyvsp[0].blk));
  } else {
    (yyval.blk) = (yyvsp[0].blk);
  }
}
#line 2872 "src/parser.c"
    break;

  case 47: /* FuncDef: "def" IDENT ':' Query ';'  */
#line 473 "src/parser.y"
                          {
  (yyval.blk) = gen_function(jv_string_value((yyvsp[-3].literal)), gen_noop(), (yyvsp[-1].blk));
  jv_free((yyvsp[-3].literal));
}
#line 2881 "src/parser.c"
    break;

  case 48: /* FuncDef: "def" IDENT '(' Params ')' ':' Query ';'  */
#line 478 "src/parser.y"
                                         {
  (yyval.blk) = gen_function(jv_string_value((yyvsp[-6].literal)), (yyvsp[-4].blk), (yyvsp[-1].blk));
  jv_free((yyvsp[-6].literal));
}
#line 2890 "src/parser.c"
    break;

  case 49: /* Params: Param  */
#line 484 "src/parser.y"
      {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 2898 "src/parser.c"
    break;

  case 50: /* Params: Params ';' Param  */
#line 487 "src/parser.y"
                 {
  (yyval.blk) = BLOCK((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2906 "src/parser.c"
    break;

  case 51: /* Param: BINDING  */
#line 492 "src/parser.y"
        {
  (yyval.blk) = gen_param_regular(jv_string_value((yyvsp[0].literal)));
  jv_free((yyvsp[0].literal));
}
#line 2915 "src/parser.c"
    break;

  case 52: /* Param: IDENT  */
#line 496 "src/parser.y"
      {
  (yyval.blk) = gen_param(jv_string_value((yyvsp[0].literal)));
  jv_free((yyvsp[0].literal));
}
#line 2924 "src/parser.c"
    break;

  case 53: /* StringStart: FORMAT QQSTRING_START  */
#line 503 "src/parser.y"
                      {
  (yyval.literal) = (yyvsp[-1].literal);
}
#line 2932 "src/parser.c"
    break;

  case 54: /* StringStart: QQSTRING_START  */
#line 506 "src/parser.y"
               {
  (yyval.literal) = jv_string("text");
}
#line 2940 "src/parser.c"
    break;

  case 55: /* String: StringStart QQString QQSTRING_END  */
#line 512 "src/parser.y"
                                  {
  (yyval.blk) = (yyvsp[-1].blk);
  jv_free((yyvsp[-2].literal));
}
#line 2949 "src/parser.c"
    break;

  case 56: /* QQString: %empty  */
#line 519 "src/parser.y"
       {
  (yyval.blk) = gen_const(jv_string(""));
}
#line 2957 "src/parser.c"
    break;

  case 57: /* QQString: QQString QQSTRING_TEXT  */
#line 522 "src/parser.y"
                       {
  (yyval.blk) = gen_binop((yyvsp[-1].blk), gen_const((yyvsp[0].literal)), '+');
}
#line 2965 "src/parser.c"
    break;

  case 58: /* QQString: QQString QQSTRING_INTERP_START Query QQSTRING_INTERP_END  */
#line 525 "src/parser.y"
                                                         {
  (yyval.blk) = gen_binop((yyvsp[-3].blk), gen_format((yyvsp[-1].blk), jv_copy((yyvsp[-4].literal))), '+');
}
#line 2973 "src/parser.c"
    break;

  case 59: /* ElseBody: "elif" Query "then" Query ElseBody  */
#line 531 "src/parser.y"
                                   {
  (yyval.blk) = gen_cond((yyvsp[-3].blk), (yyvsp[-1].blk), (yyvsp[0].blk));
}
#line 2981 "src/parser.c"
    break;

  case 60: /* ElseBody: "else" Query "end"  */
#line 534 "src/parser.y"
                   {
  (yyval.blk) = (yyvsp[-1].blk);
}
#line 2989 "src/parser.c"
    break;

  case 61: /* ElseBody: "end"  */
#line 537 "src/parser.y"
      {
  (yyval.blk) = gen_noop();
}
#line 2997 "src/parser.c"
    break;

  case 62: /* Term: '.'  */
#line 543 "src/parser.y"
    {
  (yyval.blk) = gen_noop();
}
#line 3005 "src/parser.c"
    break;

  case 63: /* Term: ".."  */
#line 546 "src/parser.y"
    {
  (yyval.blk) = gen_call("recurse", gen_noop());
}
#line 3013 "src/parser.c"
    break;

  case 64: /* Term: "break" BINDING  */
#line 549 "src/parser.y"
              {
  jv v = jv_string_fmt("*label-%s", jv_string_value((yyvsp[0].literal)));     // impossible symbol
  (yyval.blk) = gen_location((yyloc), locations,
                    BLOCK(gen_op_unbound(LOADV, jv_string_value(v)),
                    gen_call("error", gen_noop())));
  jv_free(v);
  jv_free((yyvsp[0].literal));
}
#line 3026 "src/parser.c"
    break;

  case 65: /* Term: "break" error  */
#line 557 "src/parser.y"
            {
  FAIL((yyloc), "break requires a label to break to");
  (yyval.blk) = gen_noop();
}
#line 3035 "src/parser.c"
    break;

  case 66: /* Term: Term FIELD '?'  */
#line 561 "src/parser.y"
               {
  (yyval.blk) = gen_index_opt((yyvsp[-2].blk), gen_const((yyvsp[-1].literal)));
}
#line 3043 "src/parser.c"
    break;

  case 67: /* Term: FIELD '?'  */
#line 564 "src/parser.y"
          {
  (yyval.blk) = gen_index_opt(gen_noop(), gen_const((yyvsp[-1].literal)));
}
#line 3051 "src/parser.c"
    break;

  case 68: /* Term: Term '.' String '?'  */
#line 567 "src/parser.y"
                    {
  (yyval.blk) = gen_index_opt((yyvsp[-3].blk), (yyvsp[-1].blk));
}
#line 3059 "src/parser.c"
    break;

  case 69: /* Term: '.' String '?'  */
#line 570 "src/parser.y"
               {
  (yyval.blk) = gen_index_opt(gen_noop(), (yyvsp[-1].blk));
}
#line 3067 "src/parser.c"
    break;

  case 70: /* Term: Term FIELD  */
#line 573 "src/parser.y"
                        {
  (yyval.blk) = gen_index((yyvsp[-1].blk), gen_const((yyvsp[0].literal)));
}
#line 3075 "src/parser.c"
    break;

  case 71: /* Term: FIELD  */
#line 576 "src/parser.y"
                   {
  (yyval.blk) = gen_index(gen_noop(), gen_const((yyvsp[0].literal)));
}
#line 3083 "src/parser.c"
    break;

  case 72: /* Term: Term '.' String  */
#line 579 "src/parser.y"
                             {
  (yyval.blk) = gen_index((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 3091 "src/parser.c"
    break;

  case 73: /* Term: '.' String  */
#line 582 "src/parser.y"
                        {
  (yyval.blk) = gen_index(gen_noop(), (yyvsp[0].blk));
}
#line 3099 "src/parser.c"
    break;

  case 74: /* Term: '.' error  */
#line 585 "src/parser.y"
          {
  FAIL((yyloc), "try .[\"field\"] instead of .field for unusually named fields");
  (yyval.blk) = gen_noop();
}
#line 3108 "src/parser.c"
    break;

  case 75: /* Term: '.' IDENT error  */
#line 589 "src/parser.y"
                {
  jv_free((yyvsp[-1].literal));
  FAIL((yyloc), "try .[\"field\"] instead of .field for unusually named fields");
  (yyval.blk) = gen_noop();
}
#line 3118 "src/parser.c"
    break;

  case 76: /* Term: Term '[' Query ']' '?'  */
#line 595 "src/parser.y"
                       {
  (yyval.blk) = gen_index_opt((yyvsp[-4].blk), (yyvsp[-2].blk));
}
#line 3126 "src/parser.c"
    break;

  case 77: /* Term: Term '[' Query ']'  */
#line 598 "src/parser.y"
                                {
  (yyval.blk) = gen_index((yyvsp[-3].blk), (yyvsp[-1].blk));
}
#line 3134 "src/parser.c"
    break;

  case 78: /* Term: Term '.' '[' Query ']' '?'  */
#line 601 "src/parser.y"
                           {
  (yyval.blk) = gen_index_opt((yyvsp[-5].blk), (yyvsp[-2].blk));
}
#line 3142 "src/parser.c"
    break;

  case 79: /* Term: Term '.' '[' Query ']'  */
#line 604 "src/parser.y"
                                    {
  (yyval.blk) = gen_index((yyvsp[-4].blk), (yyvsp[-1].blk));
}
#line 3150 "src/parser.c"
    break;

  case 80: /* Term: Term '[' ']' '?'  */
#line 607 "src/parser.y"
                 {
  (yyval.blk) = block_join((yyvsp[-3].blk), gen_op_simple(EACH_OPT));
}
#line 3158 "src/parser.c"
    break;

  case 81: /* Term: Term '[' ']'  */
#line 610 "src/parser.y"
                          {
  (yyval.blk) = block_join((yyvsp[-2].blk), gen_op_simple(EACH));
}
#line 3166 "src/parser.c"
    break;

  case 82: /* Term: Term '.' '[' ']' '?'  */
#line 613 "src/parser.y"
                     {
  (yyval.blk) = block_join((yyvsp[-4].blk), gen_op_simple(EACH_OPT));
}
#line 3174 "src/parser.c"
    break;

  case 83: /* Term: Term '.' '[' ']'  */
#line 616 "src/parser.y"
                              {
  (yyval.blk) = block_join((yyvsp[-3].blk), gen_op_simple(EACH));
}
#line 3182 "src/parser.c"
    break;

  case 84: /* Term: Term '[' Query ':' Query ']' '?'  */
#line 619 "src/parser.y"
                                 {
  (yyval.blk) = gen_slice_index((yyvsp[-6].blk), (yyvsp[-4].blk), (yyvsp[-2].blk), INDEX_OPT);
}
#line 3190 "src/parser.c"
    break;

  case 85: /* Term: Term '[' Query ':' ']' '?'  */
#line 622 "src/parser.y"
                           {
  (yyval.blk) = gen_slice_index((yyvsp[-5].blk), (yyvsp[-3].blk), gen_const(jv_null()), INDEX_OPT);
}
#line 3198 "src/parser.c"
    break;

  case 86: /* Term: Term '[' ':' Query ']' '?'  */
#line 625 "src/parser.y"
                           {
  (yyval.blk) = gen_slice_index((yyvsp[-5].blk), gen_const(jv_null()), (yyvsp[-2].blk), INDEX_OPT);
}
#line 3206 "src/parser.c"
    break;

  case 87: /* Term: Term '[' Query ':' Query ']'  */
#line 628 "src/parser.y"
                                          {
  (yyval.blk) = gen_slice_index((yyvsp[-5].blk), (yyvsp[-3].blk), (yyvsp[-1].blk), INDEX);
}
#line 3214 "src/parser.c"
    break;

  case 88: /* Term: Term '[' Query ':' ']'  */
#line 631 "src/parser.y"
                                    {
  (yyval.blk) = gen_slice_index((yyvsp[-4].blk), (yyvsp[-2].blk), gen_const(jv_null()), INDEX);
}
#line 3222 "src/parser.c"
    break;

  case 89: /* Term: Term '[' ':' Query ']'  */
#line 634 "src/parser.y"
                                    {
  (yyval.blk) = gen_slice_index((yyvsp[-4].blk), gen_const(jv_null()), (yyvsp[-1].blk), INDEX);
}
#line 3230 "src/parser.c"
    break;

  case 90: /* Term: Term '?'  */
#line 637 "src/parser.y"
         {
  (yyval.blk) = gen_try((yyvsp[-1].blk), gen_op_simple(BACKTRACK));
}
#line 3238 "src/parser.c"
    break;

  case 91: /* Term: LITERAL  */
#line 640 "src/parser.y"
        {
  (yyval.blk) = gen_const((yyvsp[0].literal));
}
#line 3246 "src/parser.c"
    break;

  case 92: /* Term: String  */
#line 643 "src/parser.y"
       {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 3254 "src/parser.c"
    break;

  case 93: /* Term: FORMAT  */
#line 646 "src/parser.y"
       {
  (yyval.blk) = gen_format(gen_noop(), (yyvsp[0].literal));
}
#line 3262 "src/parser.c"
    break;

  case 94: /* Term: '-' Term  */
#line 649 "src/parser.y"
         {
  (yyval.blk) = BLOCK((yyvsp[0].blk), gen_call("_negate", gen_noop()));
}
#line 3270 "src/parser.c"
    break;

  case 95: /* Term: '(' Query ')'  */
#line 652 "src/parser.y"
              {
  (yyval.blk) = (yyvsp[-1].blk);
}
#line 3278 "src/parser.c"
    break;

  case 96: /* Term: '[' Query ']'  */
#line 655 "src/parser.y"
              {
  (yyval.blk) = gen_collect((yyvsp[-1].blk));
}
#line 3286 "src/parser.c"
    break;

  case 97: /* Term: '[' ']'  */
#line 658 "src/parser.y"
        {
  (yyval.blk) = gen_const(jv_array());
}
#line 3294 "src/parser.c"
    break;

  case 98: /* Term: '{' DictPairs '}'  */
#line 661 "src/parser.y"
                  {
  block o = gen_const_object((yyvsp[-1].blk));
  if (o.first != NULL)
    (yyval.blk) = o;
  else
    (yyval.blk) = BLOCK(gen_subexp(gen_const(jv_object())), (yyvsp[-1].blk), gen_op_simple(POP));
}
#line 3306 "src/parser.c"
    break;

  case 99: /* Term: "reduce" Expr "as" Patterns '(' Query ';' Query ')'  */
#line 668 "src/parser.y"
                                                    {
  (yyval.blk) = gen_reduce((yyvsp[-7].blk), (yyvsp[-5].blk), (yyvsp[-3].blk), (yyvsp[-1].blk));
}
#line 3314 "src/parser.c"
    break;

  case 100: /* Term: "foreach" Expr "as" Patterns '(' Query ';' Query ';' Query ')'  */
#line 671 "src/parser.y"
                                                               {
  (yyval.blk) = gen_foreach((yyvsp[-9].blk), (yyvsp[-7].blk), (yyvsp[-5].blk), (yyvsp[-3].blk), (yyvsp[-1].blk));
}
#line 3322 "src/parser.c"
    break;

  case 101: /* Term: "foreach" Expr "as" Patterns '(' Query ';' Query ')'  */
#line 674 "src/parser.y"
                                                     {
  (yyval.blk) = gen_foreach((yyvsp[-7].blk), (yyvsp[-5].blk), (yyvsp[-3].blk), (yyvsp[-1].blk), gen_noop());
}
#line 3330 "src/parser.c"
    break;

  case 102: /* Term: "if" Query "then" Query ElseBody  */
#line 677 "src/parser.y"
                                 {
  (yyval.blk) = gen_cond((yyvsp[-3].blk), (yyvsp[-1].blk), (yyvsp[0].blk));
}
#line 3338 "src/parser.c"
    break;

  case 103: /* Term: "if" Query "then" error  */
#line 680 "src/parser.y"
                        {
  FAIL((yyloc), "Possibly unterminated 'if' statement");
  (yyval.blk) = (yyvsp[-2].blk);
}
#line 3347 "src/parser.c"
    break;

  case 104: /* Term: "try" BinExpr "catch" BinExpr  */
#line 684 "src/parser.y"
                              {
  (yyval.blk) = gen_try((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 3355 "src/parser.c"
    break;

  case 105: /* Term: "try" BinExpr "catch" error  */
#line 687 "src/parser.y"
                            {
  FAIL((yyloc), "Possibly unterminated 'try' statement");
  (yyval.blk) = (yyvsp[-2].blk);
}
#line 3364 "src/parser.c"
    break;

  case 106: /* Term: "try" BinExpr  */
#line 691 "src/parser.y"
              {
  (yyval.blk) = gen_try((yyvsp[0].blk), gen_op_simple(BACKTRACK));
}
#line 3372 "src/parser.c"
    break;

  case 107: /* Term: '$' '$' '$' BINDING  */
#line 709 "src/parser.y"
                    {
  (yyval.blk) = gen_location((yyloc), locations, gen_op_unbound(LOADVN, jv_string_value((yyvsp[0].literal))));
  jv_free((yyvsp[0].literal));
}
#line 3381 "src/parser.c"
    break;

  case 108: /* Term: BINDING  */
#line 713 "src/parser.y"
        {
  (yyval.blk) = gen_location((yyloc), locations, gen_op_unbound(LOADV, jv_string_value((yyvsp[0].literal))));
  jv_free((yyvsp[0].literal));
}
#line 3390 "src/parser.c"
    break;

  case 109: /* Term: "$__loc__"  */
#line 717 "src/parser.y"
           {
  (yyval.blk) = gen_loc_object(&(yyloc), locations);
}
#line 3398 "src/parser.c"
    break;

  case 110: /* Term: IDENT  */
#line 720 "src/parser.y"
      {
  const char *s = jv_string_value((yyvsp[0].literal));
  if (strcmp(s, "false") == 0)
    (yyval.blk) = gen_const(jv_false());
  else if (strcmp(s, "true") == 0)
    (yyval.blk) = gen_const(jv_true());
  else if (strcmp(s, "null") == 0)
    (yyval.blk) = gen_const(jv_null());
  else
    (yyval.blk) = gen_location((yyloc), locations, gen_call(s, gen_noop()));
  jv_free((yyvsp[0].literal));
}
#line 3415 "src/parser.c"
    break;

  case 111: /* Term: IDENT '(' Args ')'  */
#line 732 "src/parser.y"
                   {
  (yyval.blk) = gen_call(jv_string_value((yyvsp[-3].literal)), (yyvsp[-1].blk));
  (yyval.blk) = gen_location((yylsp[-3]), locations, (yyval.blk));
  jv_free((yyvsp[-3].literal));
}
#line 3425 "src/parser.c"
    break;

  case 112: /* Term: '(' error ')'  */
#line 737 "src/parser.y"
              { (yyval.blk) = gen_noop(); }
#line 3431 "src/parser.c"
    break;

  case 113: /* Term: '[' error ']'  */
#line 738 "src/parser.y"
              { (yyval.blk) = gen_noop(); }
#line 3437 "src/parser.c"
    break;

  case 114: /* Term: Term '[' error ']'  */
#line 739 "src/parser.y"
                   { (yyval.blk) = (yyvsp[-3].blk); }
#line 3443 "src/parser.c"
    break;

  case 115: /* Term: '{' error '}'  */
#line 740 "src/parser.y"
              { (yyval.blk) = gen_noop(); }
#line 3449 "src/parser.c"
    break;

  case 116: /* Args: Arg  */
#line 743 "src/parser.y"
    {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 3457 "src/parser.c"
    break;

  case 117: /* Args: Args ';' Arg  */
#line 746 "src/parser.y"
             {
  (yyval.blk) = BLOCK((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 3465 "src/parser.c"
    break;

  case 118: /* Arg: Query  */
#line 751 "src/parser.y"
      {
  (yyval.blk) = gen_lambda((yyvsp[0].blk));
}
#line 3473 "src/parser.c"
    break;

  case 119: /* RepPatterns: RepPatterns '?' "//" Pattern  */
#line 756 "src/parser.y"
                             {
  (yyval.blk) = BLOCK((yyvsp[-3].blk), gen_destructure_alt((yyvsp[0].blk)));
}
#line 3481 "src/parser.c"
    break;

  case 120: /* RepPatterns: Pattern  */
#line 759 "src/parser.y"
        {
  (yyval.blk) = gen_destructure_alt((yyvsp[0].blk));
}
#line 3489 "src/parser.c"
    break;

  case 121: /* Patterns: RepPatterns '?' "//" Pattern  */
#line 764 "src/parser.y"
                             {
  (yyval.blk) = BLOCK((yyvsp[-3].blk), (yyvsp[0].blk));
}
#line 3497 "src/parser.c"
    break;

  case 122: /* Patterns: Pattern  */
#line 767 "src/parser.y"
        {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 3505 "src/parser.c"
    break;

  case 123: /* Pattern: BINDING  */
#line 772 "src/parser.y"
        {
  (yyval.blk) = gen_op_unbound(STOREV, jv_string_value((yyvsp[0].literal)));
  jv_free((yyvsp[0].literal));
}
#line 3514 "src/parser.c"
    break;

  case 124: /* Pattern: '[' ArrayPats ']'  */
#line 776 "src/parser.y"
                  {
  (yyval.blk) = BLOCK((yyvsp[-1].blk), gen_op_simple(POP));
}
#line 3522 "src/parser.c"
    break;

  case 125: /* Pattern: '{' ObjPats '}'  */
#line 779 "src/parser.y"
                {
  (yyval.blk) = BLOCK((yyvsp[-1].blk), gen_op_simple(POP));
}
#line 3530 "src/parser.c"
    break;

  case 126: /* ArrayPats: Pattern  */
#line 784 "src/parser.y"
        {
  (yyval.blk) = gen_array_matcher(gen_noop(), (yyvsp[0].blk));
}
#line 3538 "src/parser.c"
    break;

  case 127: /* ArrayPats: ArrayPats ',' Pattern  */
#line 787 "src/parser.y"
                      {
  (yyval.blk) = gen_array_matcher((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 3546 "src/parser.c"
    break;

  case 128: /* ObjPats: ObjPat  */
#line 792 "src/parser.y"
       {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 3554 "src/parser.c"
    break;

  case 129: /* ObjPats: ObjPats ',' ObjPat  */
#line 795 "src/parser.y"
                   {
  (yyval.blk) = BLOCK((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 3562 "src/parser.c"
    break;

  case 130: /* ObjPat: BINDING  */
#line 800 "src/parser.y"
        {
  (yyval.blk) = gen_object_matcher(gen_const((yyvsp[0].literal)), gen_op_unbound(STOREV, jv_string_value((yyvsp[0].literal))));
}
#line 3570 "src/parser.c"
    break;

  case 131: /* ObjPat: BINDING ':' Pattern  */
#line 803 "src/parser.y"
                    {
  (yyval.blk) = gen_object_matcher(gen_const((yyvsp[-2].literal)), BLOCK(gen_op_simple(DUP), gen_op_unbound(STOREV, jv_string_value((yyvsp[-2].literal))), (yyvsp[0].blk)));
}
#line 3578 "src/parser.c"
    break;

  case 132: /* ObjPat: IDENT ':' Pattern  */
#line 806 "src/parser.y"
                  {
  (yyval.blk) = gen_object_matcher(gen_const((yyvsp[-2].literal)), (yyvsp[0].blk));
}
#line 3586 "src/parser.c"
    break;

  case 133: /* ObjPat: Keyword ':' Pattern  */
#line 809 "src/parser.y"
                    {
  (yyval.blk) = gen_object_matcher(gen_const((yyvsp[-2].literal)), (yyvsp[0].blk));
}
#line 3594 "src/parser.c"
    break;

  case 134: /* ObjPat: String ':' Pattern  */
#line 812 "src/parser.y"
                   {
  (yyval.blk) = gen_object_matcher((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 3602 "src/parser.c"
    break;

  case 135: /* ObjPat: '(' Query ')' ':' Pattern  */
#line 815 "src/parser.y"
                          {
  jv msg = check_object_key((yyvsp[-3].blk));
  if (jv_is_valid(msg)) {
    FAIL((yylsp[-3]), jv_string_value(msg));
  }
  jv_free(msg);
  (yyval.blk) = gen_object_matcher((yyvsp[-3].blk), (yyvsp[0].blk));
}
#line 3615 "src/parser.c"
    break;

  case 136: /* ObjPat: error ':' Pattern  */
#line 823 "src/parser.y"
                  {
  FAIL((yyloc), "May need parentheses around object key expression");
  (yyval.blk) = (yyvsp[0].blk);
}
#line 3624 "src/parser.c"
    break;

  case 137: /* Keyword: "as"  */
#line 829 "src/parser.y"
     {
  (yyval.literal) = jv_string("as");
}
#line 3632 "src/parser.c"
    break;

  case 138: /* Keyword: "def"  */
#line 832 "src/parser.y"
      {
  (yyval.literal) = jv_string("def");
}
#line 3640 "src/parser.c"
    break;

  case 139: /* Keyword: "module"  */
#line 835 "src/parser.y"
         {
  (yyval.literal) = jv_string("module");
}
#line 3648 "src/parser.c"
    break;

  case 140: /* Keyword: "import"  */
#line 838 "src/parser.y"
         {
  (yyval.literal) = jv_string("import");
}
#line 3656 "src/parser.c"
    break;

  case 141: /* Keyword: "include"  */
#line 841 "src/parser.y"
          {
  (yyval.literal) = jv_string("include");
}
#line 3664 "src/parser.c"
    break;

  case 142: /* Keyword: "if"  */
#line 844 "src/parser.y"
     {
  (yyval.literal) = jv_string("if");
}
#line 3672 "src/parser.c"
    break;

  case 143: /* Keyword: "then"  */
#line 847 "src/parser.y"
       {
  (yyval.literal) = jv_string("then");
}
#line 3680 "src/parser.c"
    break;

  case 144: /* Keyword: "else"  */
#line 850 "src/parser.y"
       {
  (yyval.literal) = jv_string("else");
}
#line 3688 "src/parser.c"
    break;

  case 145: /* Keyword: "elif"  */
#line 853 "src/parser.y"
       {
  (yyval.literal) = jv_string("elif");
}
#line 3696 "src/parser.c"
    break;

  case 146: /* Keyword: "reduce"  */
#line 856 "src/parser.y"
         {
  (yyval.literal) = jv_string("reduce");
}
#line 3704 "src/parser.c"
    break;

  case 147: /* Keyword: "foreach"  */
#line 859 "src/parser.y"
          {
  (yyval.literal) = jv_string("foreach");
}
#line 3712 "src/parser.c"
    break;

  case 148: /* Keyword: "end"  */
#line 862 "src/parser.y"
      {
  (yyval.literal) = jv_string("end");
}
#line 3720 "src/parser.c"
    break;

  case 149: /* Keyword: "and"  */
#line 865 "src/parser.y"
      {
  (yyval.literal) = jv_string("and");
}
#line 3728 "src/parser.c"
    break;

  case 150: /* Keyword: "or"  */
#line 868 "src/parser.y"
     {
  (yyval.literal) = jv_string("or");
}
#line 3736 "src/parser.c"
    break;

  case 151: /* Keyword: "try"  */
#line 871 "src/parser.y"
      {
  (yyval.literal) = jv_string("try");
}
#line 3744 "src/parser.c"
    break;

  case 152: /* Keyword: "catch"  */
#line 874 "src/parser.y"
        {
  (yyval.literal) = jv_string("catch");
}
#line 3752 "src/parser.c"
    break;

  case 153: /* Keyword: "label"  */
#line 877 "src/parser.y"
        {
  (yyval.literal) = jv_string("label");
}
#line 3760 "src/parser.c"
    break;

  case 154: /* Keyword: "break"  */
#line 880 "src/parser.y"
        {
  (yyval.literal) = jv_string("break");
}
#line 3768 "src/parser.c"
    break;

  case 155: /* DictPairs: %empty  */
#line 886 "src/parser.y"
       {
  (yyval.blk) = gen_noop();
}
#line 3776 "src/parser.c"
    break;

  case 156: /* DictPairs: DictPair  */
#line 889 "src/parser.y"
         {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 3784 "src/parser.c"
    break;

  case 157: /* DictPairs: DictPair ',' DictPairs  */
#line 892 "src/parser.y"
                       {
  (yyval.blk) = block_join((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 3792 "src/parser.c"
    break;

  case 158: /* DictPair: IDENT ':' DictExpr  */
#line 897 "src/parser.y"
                   {
  (yyval.blk) = gen_dictpair(gen_const((yyvsp[-2].literal)), (yyvsp[0].blk));
}
#line 3800 "src/parser.c"
    break;

  case 159: /* DictPair: Keyword ':' DictExpr  */
#line 900 "src/parser.y"
                     {
  (yyval.blk) = gen_dictpair(gen_const((yyvsp[-2].literal)), (yyvsp[0].blk));
}
#line 3808 "src/parser.c"
    break;

  case 160: /* DictPair: String ':' DictExpr  */
#line 903 "src/parser.y"
                    {
  (yyval.blk) = gen_dictpair((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 3816 "src/parser.c"
    break;

  case 161: /* DictPair: String  */
#line 906 "src/parser.y"
       {
  (yyval.blk) = gen_dictpair((yyvsp[0].blk), BLOCK(gen_op_simple(POP), gen_op_simple(DUP2),
                              gen_op_simple(DUP2), gen_op_simple(INDEX)));
}
#line 3825 "src/parser.c"
    break;

  case 162: /* DictPair: BINDING ':' DictExpr  */
#line 910 "src/parser.y"
                     {
  (yyval.blk) = gen_dictpair(gen_location((yyloc), locations, gen_op_unbound(LOADV, jv_string_value((yyvsp[-2].literal)))),
                    (yyvsp[0].blk));
  jv_free((yyvsp[-2].literal));
}
#line 3835 "src/parser.c"
    break;

  case 163: /* DictPair: BINDING  */
#line 915 "src/parser.y"
        {
  (yyval.blk) = gen_dictpair(gen_const((yyvsp[0].literal)),
                    gen_location((yyloc), locations, gen_op_unbound(LOADV, jv_string_value((yyvsp[0].literal)))));
}
#line 3844 "src/parser.c"
    break;

  case 164: /* DictPair: IDENT  */
#line 919 "src/parser.y"
      {
  (yyval.blk) = gen_dictpair(gen_const(jv_copy((yyvsp[0].literal))),
                    gen_index(gen_noop(), gen_const((yyvsp[0].literal))));
}
#line 3853 "src/parser.c"
    break;

  case 165: /* DictPair: "$__loc__"  */
#line 923 "src/parser.y"
           {
  (yyval.blk) = gen_dictpair(gen_const(jv_string("__loc__")),
                    gen_loc_object(&(yyloc), locations));
}
#line 3862 "src/parser.c"
    break;

  case 166: /* DictPair: Keyword  */
#line 927 "src/parser.y"
        {
  (yyval.blk) = gen_dictpair(gen_const(jv_copy((yyvsp[0].literal))),
                    gen_index(gen_noop(), gen_const((yyvsp[0].literal))));
}
#line 3871 "src/parser.c"
    break;

  case 167: /* DictPair: '(' Query ')' ':' DictExpr  */
#line 931 "src/parser.y"
                           {
  jv msg = check_object_key((yyvsp[-3].blk));
  if (jv_is_valid(msg)) {
    FAIL((yylsp[-3]), jv_string_value(msg));
  }
  jv_free(msg);
  (yyval.blk) = gen_dictpair((yyvsp[-3].blk), (yyvsp[0].blk));
}
#line 3884 "src/parser.c"
    break;

  case 168: /* DictPair: error ':' DictExpr  */
#line 939 "src/parser.y"
                   {
  FAIL((yylsp[-2]), "May need parentheses around object key expression");
  (yyval.blk) = (yyvsp[0].blk);
}
#line 3893 "src/parser.c"
    break;

  case 169: /* DictExpr: DictExpr '|' DictExpr  */
#line 945 "src/parser.y"
                      {
  (yyval.blk) = block_join((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 3901 "src/parser.c"
    break;

  case 170: /* DictExpr: Expr  */
#line 948 "src/parser.y"
     {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 3909 "src/parser.c"
    break;


#line 3913 "src/parser.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, answer, errors, locations, lexer_param_ptr, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
                      yytoken, &yylval, &yylloc, answer, errors, locations, lexer_param_ptr);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, answer, errors, locations, lexer_param_ptr);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, answer, errors, locations, lexer_param_ptr, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, answer, errors, locations, lexer_param_ptr);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, answer, errors, locations, lexer_param_ptr);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 951 "src/parser.y"


int jq_parse(struct locfile* locations, block* answer) {
  struct lexer_param scanner;
  YY_BUFFER_STATE buf;
  jq_yylex_init_extra(0, &scanner.lexer);
  buf = jq_yy_scan_bytes(locations->data, locations->length, scanner.lexer);
  int errors = 0;
  *answer = gen_noop();
  yyparse(answer, &errors, locations, &scanner);
  jq_yy_delete_buffer(buf, scanner.lexer);
  jq_yylex_destroy(scanner.lexer);
  if (errors > 0) {
    block_free(*answer);
    *answer = gen_noop();
  }
  return errors;
}

int jq_parse_library(struct locfile* locations, block* answer) {
  int errs = jq_parse(locations, answer);
  if (errs) return errs;
  if (block_has_main(*answer)) {
    locfile_locate(locations, UNKNOWN_LOCATION, "jq: error: library should only have function definitions, not a main expression");
    return 1;
  }
  assert(block_has_only_binders_and_imports(*answer, OP_IS_CALL_PSEUDO));
  return 0;
}
