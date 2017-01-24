/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

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

extern YYLTYPE yylloc;
