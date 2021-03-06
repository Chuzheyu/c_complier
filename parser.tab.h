#include "./abstract_syntax_tree/AstNode.h"
#include "./symbol_table/symbol.h"
#include "./intermidiate_code/interCode.h"
/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    ASSIGN_OP = 258,
    OR = 259,
    AND = 260,
    SINGLAND = 261,
    EQ_OP = 262,
    NE_OP = 263,
    GT_OP = 264,
    LT_OP = 265,
    GE_OP = 266,
    LE_OP = 267,
    ADD = 268,
    SUB = 269,
    MUL = 270,
    DIV = 271,
    MOD = 272,
    POW = 273,
    NOT = 274,
    PRINTF = 275,
    SCANF = 276,
    IDENTIFIER = 277,
    CONST = 278,
    LOWER_THAN_ELSE = 279,
    EOL = 280,
    COMMA = 281,
    SEMI = 282,
    S_QUO = 283,
    D_QUO = 284,
    WHILE = 285,
    FOR = 286,
    IF = 287,
    ELSE = 288,
    THEN = 289,
    RETURN = 290,
    INT = 291,
    VOID = 292,
    BREAK = 293,
    CONTINUE = 294
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "parser.y"

  AbstractAstNode* ast;
  char* str;

#line 102 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
