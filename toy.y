/* 
	To compile, run the following in bash: "gcc lex.yy.c y.tab.c -lfl" in the same directory
	as y.tab.h. To run, run in bash: "./a.out < file.txt" If Flex and Bison are rerun,
	y.tab.c will no longer print when shifts
	occur.
*/


/* DEFINITIONS */
%{
#include <stdio.h>
#include <stdlib.h>
%}

/* TOKENS */
%token _int _boolean _double _string _break _class _else _extends
%token _booleanconstant _for _if _implements _interface _newarray _println _readln
%token _return _void _while _id _doubleconstant _intconstant _stringconstant _plus
%token _minus _multiplication _division _mod _less _lessequal _greaterequal _equal
%token _notequal _and _or _not _assignop _semicolon _comma _period _leftparen
%token _rightparen _leftbracket _rightbracket _leftbrace _rightbrace _greater

/* OPERATORS in order from lowest to highest precedence */
%left _assignop
%left _or
%left _and
%left _equal _notequal
%left _less _lessequal _greater _greaterequal
%left _plus _minus
%left _multiplication _division _mod 
%right _not 
%left _period



%% 
Program     : Decl {printf("[reduce 1]\n[accept]\n"); exit(0);}
	|		  Decl Program {printf("[reduce 2]\n");}
	;
Decl		: Vdecl {printf("[reduce 3]\n");}
	|		  Fdecl {printf("[reduce 4]\n");}
	|		  Cdecl {printf("[reduce 5]\n");}
	|		  Idecl {printf("[reduce 6]\n");}
	;
Vdecl		: Var _semicolon {printf("[reduce 7]\n");} 
	;
Var			: Type _id {printf("[reduce 8]\n");} 
	;
Lval        : _id LvalR {printf("[reduce 9]\n");}
    ;
LvalR		: _leftbracket Expr _rightbracket LvalR {printf("[reduce 10]");}
	|		  _period LvalR {printf("[reduce 11]");}
	|		  EMPTY {printf("[reduce 12]");}
	;
Type		: _int TypeR {printf("[reduce 13]\n");}
	|		  _double TypeR {printf("[reduce 14]\n");}
	|		  _boolean TypeR {printf("[reduce 15]\n");}
	|		  _string TypeR {printf("[reduce 16]\n");}
	|		  _id TypeR {printf("[reduce 17]\n");}
	;
TypeR		: _leftbracket _rightbracket TypeR {printf("[reduce 18]");}
	|		  EMPTY {printf("[reduce 19]");}
	;
Fdecl		: Type _id _leftparen Formals _rightparen StmtBlock {printf("[reduce 20]\n");}
	|		  _void _id _leftparen Formals _rightparen StmtBlock {printf("[reduce 21]\n");}
	;
Formals		: Vlist {printf("[reduce 22]\n");}
	|		  EMPTY {printf("[reduce 23]\n");}
	;
Vlist		: Var {printf("[reduce 24]\n");} 
	|		  Var _comma Vlist {printf("[reduce 25]\n");}
	;
EMPTY		: {printf("[reduce 26]\n");}
	;
Cdecl 		: _class _id _leftbrace Field _rightbrace {printf("[reduce 27]\n");}
	|		  _class _id _extends _id _leftbrace Field _rightbrace {printf("[reduce 28]\n");}
	|		  _class _id _implements IDlist _leftbrace Field _rightbrace {printf("[reduce 29]\n");}
	|		  _class _id _extends _id _implements IDlist _leftbrace Field _rightbrace {printf("[reduce 30]\n");}
	;
Field		: Vdecl Field {printf("[reduce 31]\n");}
	|		  Fdecl Field {printf("[reduce 32]\n");}
	|		  EMPTY {printf("[reduce 33]\n");}
	;
IDlist		: _id {printf("[reduce 34]\n");}
	|		  _id _comma IDlist {printf("[reduce 35]\n");}
	;
Idecl		: _interface _id _leftbrace Prototype _rightbrace {printf("[reduce 36]\n");}
	;
Prototype 	: Type _id _leftparen Formals _rightparen _semicolon {printf("[reduce 37]\n");}
	|		  _void _id _leftparen Formals _rightparen _semicolon {printf("[reduce 38]\n");}
	|		  EMPTY {printf("[reduce 39]\n");}
	;
StmtBlock	: _leftbrace VdecKLN StmtKLN _rightbrace {printf("[reduce 40]\n");}
	;
VdecKLN 	: VdecKLN Vdecl {printf("[reduce 41]\n");}
	| 		  EMPTY {printf("[reduce 42]\n");}
	;
StmtKLN		: Stmt StmtKLN {printf("[reduce 43]\n");}
	|		  EMPTY {printf("[reduce 44]\n");}
	;
Stmt		: Expr _semicolon {printf("[reduce 45]\n");}
    |         _semicolon {printf("[reduce 46]\n");}
	|		  IfStmt {printf("[reduce 47]\n");}
	|		  WhileStmt {printf("[reduce 48]\n");}
	| 		  ForStmt {printf("[reduce 49]\n");}
	|		  BreakStmt {printf("[reduce 50]\n");}
	| 		  ReturnStmt {printf("[reduce 51]\n");}
	| 		  PrintStmt {printf("[reduce 52]\n");}
	|		  StmtBlock {printf("[reduce 53]\n");}
	;
IfStmt		:  _if _leftparen Expr _rightparen Stmt {printf("[reduce 54]\n");}
	|		   _if _leftparen Expr _rightparen Stmt _else Stmt{printf("[reduce 55]\n");}
	;
WhileStmt	:  _while _leftparen Expr _rightparen Stmt {printf("[reduce 56]\n");}
	;
ForStmt		: _for _leftparen Expr _semicolon Expr _semicolon Expr _rightparen Stmt {printf("[reduce 57]\n");}
	|		  _for _leftparen _semicolon Expr _semicolon Expr _rightparen Stmt {printf("[reduce 58]\n");}
	|		  _for _leftparen Expr _semicolon Expr _semicolon _rightparen Stmt {printf("[reduce 59]\n");}
	|		  _for _leftparen  _semicolon Expr _semicolon _rightparen Stmt {printf("[reduce 60]\n");}
	;
BreakStmt   : _break {printf("[reduce 61]\n");}
    ;
ReturnStmt  : _return Expr _semicolon  {printf("[reduce 62]\n");}
    |         _return _semicolon {printf("[reduce 63]\n");}
    ;
PrintStmt   : _println _leftparen ExprList _rightparen _semicolon  {printf("[reduce 64]\n");}
    ;
ExprList    : Expr  {printf("[reduce 65]\n");}
    |         Expr _comma ExprList {printf("[reduce 66]\n");}
    ;
Expr        : _id _assignop Expr {printf("[reduce 67]\n");}
    |         Const {printf("[reduce 68]\n");}
    |         Lval  {printf("[reduce 69]\n");}
    |         Call  {printf("[reduce 70]\n");}
    |         _leftparen Expr _rightparen {printf("[reduce 71]\n");}
    |         Expr _plus Expr {printf("[reduce 72]\n");}
    |         Expr _minus Expr {printf("[reduce 73]\n");}
    |         Expr _multiplication Expr {printf("[reduce 74]\n");}
    |         Expr _division Expr {printf("[reduce 75]\n");}
    |         Expr _mod Expr {printf("[reduce 76]\n");}
    |         _minus Expr {printf("[reduce 77]\n");}
    |         Expr _less Expr {printf("[reduce 78]\n");}
    |         Expr _lessequal Expr {printf("[reduce 79]\n");}
    |         Expr _greater Expr {printf("[reduce 80]\n");}
    |         Expr _greaterequal Expr {printf("[reduce 81]\n");}
    |         Expr _equal Expr {printf("[reduce 82]\n");}
    |         Expr _notequal Expr {printf("[reduce 83]\n");}
    |         Expr _and Expr {printf("[reduce 84]\n");}
    |         Expr _or Expr {printf("[reduce 85]\n");}
    |         _not Expr {printf("[reduce 86]\n");}
    |         _readln _leftparen _rightparen {printf("[reduce 87]\n");}
    |         _newarray _leftparen _intconstant _comma Type _rightparen {printf("[reduce 88]\n");}
    ;
Call        : _id _leftparen Actuals _rightparen {printf("[reduce 89]\n");}
    |         _id _period _id _leftparen Actuals _rightparen {printf("[reduce 90]\n");}
    ;
Actuals     : ExprList {printf("[reduce 91]\n");}
    |         EMPTY {printf("[reduce 92]\n");}
    ;
Const        : _intconstant {printf("[reduce 93]\n");}
    |         _doubleconstant {printf("[reduce 94]\n");}
    |         _stringconstant {printf("[reduce 95]\n");}
    |         _booleanconstant {printf("[reduce 96]\n");}
    ;
%%
int yyerror(char *s) {
	fprintf(stderr, "%s\n", s);
}

int main() {
	// print full lexer output
	//while(yylex()) {}
    yyparse();
}
