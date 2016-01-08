/* A Bison parser, made by GNU Bison 2.4.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

extern YYSTYPE yylval;


