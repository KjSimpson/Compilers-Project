%option noyywrap
%{
#define LINE_LEN 20
#define MAX_LENGTH 10
#define ALPHA 52
#define MAX 300
#define INT 1
#define BOOL 2
#define DOUBLE 3
#define STRING 4
#include <stdio.h>
#include <string.h>
#include "y.tab.h"

extern int yylval;

struct {
	char name[MAX_LENGTH];
	int type;
}table[MAX];

int swtch[ALPHA];
char alphabet[ALPHA] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char symbol[MAX];
int next[MAX]; 
int t_index=0;
int t_flag=0;
int available = 0;
%}

letter 	[a-zA-Z]
digit	[0-9]
id	{letter}({letter}|{digit}|"_")*
ws	[ \t]+

%%
{ws}		{}
[\n]+		{printf("\n");}
int			{yytext[yyleng]='*'; printf("int "); return _int;}
boolean 	{yytext[yyleng]='*'; printf("boolean "); return _boolean;}
double		{yytext[yyleng]='*'; printf("double "); return _double;}
string		{yytext[yyleng]='*'; printf("string "); return _string;}
break		{yytext[yyleng]='*'; printf("break "); return _break;}
class		{yytext[yyleng]='*'; printf("class "); return _class;}
else		{yytext[yyleng]='*'; printf("else "); return _else;}
extends		{yytext[yyleng]='*'; printf("extends "); return _extends;}
false|true	{yytext[yyleng]='*'; printf("booleanconstant "); return _booleanconstant;}
for			{yytext[yyleng]='*'; printf("for "); return _for;}
if			{yytext[yyleng]='*'; printf("if "); return _if;}
implements	{yytext[yyleng]='*'; printf("imp "); return _implements;}
interface	{yytext[yyleng]='*'; printf("interface "); return _interface;}
newarray	{yytext[yyleng]='*'; printf("newarray "); return _newarray;}
println		{yytext[yyleng]='*'; printf("println "); return _println;}
readln		{yytext[yyleng]='*'; printf("readln "); return _readln;}
return		{yytext[yyleng]='*'; printf("return "); return _return;}
void		{yytext[yyleng]='*'; printf("void "); return _void;}
while		{yytext[yyleng]='*'; printf("while "); return _while;}
{id}		{yytext[yyleng]='*'; printf("id "); return _id;}
[0-9]+\.([0-9]*)(((e|E)("+"|"-")?[0-9]+))?  {printf("doubleconstant "); return _doubleconstant;}
(0x|0X)([0-9]|[A-Fa-f])+|([0-9])+	{printf("intconstant "); return _intconstant;}
\"([^\"\n])*\"	{printf("stringconstant "); return _stringconstant;}
"/*"([^"*/"])*"*/"	{}
"+"			{printf("plus "); return (_plus);}
"-"			{printf("minus "); return (_minus);}
"*"			{printf("multiplication "); return (_multiplication);}
"/"			{printf("divison "); return (_division);}
"%"			{printf("mod "); return (_mod);}
"<"			{printf("less "); return (_less);}
"<="		{printf("lessequal "); return (_lessequal);}
">"			{printf("greater "); return (_greater);}
">="		{printf("greaterequal "); return (_greaterequal);}
"=="		{printf("equal "); return (_equal);}
"!="		{printf("notequal "); return (_notequal);}
"&&"		{printf("and "); return (_and);}
"||"		{printf("or "); return (_or);}
"!"			{printf("not "); return (_not);}
"="			{printf("assignop "); return (_assignop);}
";"			{printf("semicolon "); return (_semicolon);}
","			{printf("comma "); return (_comma);}
"."			{printf("period "); return (_period);}
"("			{printf("leftparen "); return (_leftparen);}
")"			{printf("rightparen "); return (_rightparen);}
"["			{printf("leftbracket "); return (_leftbracket);}
"]"			{printf("rightbracket "); return (_rightbracket);}
"{"			{printf("leftbrace "); return (_leftbrace);}
"}"			{printf("rightbrace "); return (_rightbrace);}
"//".*\n	{}
. 			{}

%%
int init(){
	
	int i;
	for (i = 0; i < ALPHA; i++){
	swtch[i] = -1;
	}
	for (i = 0; i < MAX; i++) {
		next[i] = -1;
	}
	for (i = 0; i < MAX; i++) {
		symbol[i] = ' ';
	}
}

int insert(char *s) {
	int ascii = *s; // value of first symbol
	int vos;
	if (ascii < 91) {
		vos = ascii - 65;
	} else {
		vos = ascii - 71;
	}
	
	// On a token with a new 1st char, add 1st char info to switch array,
    // then add the remainder of the string to the symbol array.
	if (swtch[vos] < 0) {
		swtch[vos] = available; // available = index of symbol
		int i; 
		for (i = 0; i < ((int)yyleng - 1); i++){
			symbol[available] = *(++s);
			available++;
		}
		symbol[available] = '*';
		available++;
	}
    // if the 1st char exists in the switch array,
    // jump to location from switch and procede to compare characters 
    // to check if the string already exists, otherwise insert it into the trie.
	else {
		int currentPtr = swtch[vos]; // Grab the value in swtch table.
		*(++s); // Iterate to second character of string.
		int exit = 0; // The loop should exit when string is inserted or string already exists.

        /* 
            The loop should exit if:
                1. The string has finished being inserted ( symbol[avail] == '*'; )
                2. The string exists, so the end of the string and symbol both point to '*'
                        ( s[i] == '*' , symbol[curPtr] == '*' )
        */

        // Iterate through both the string and the symbol array, comparing as we proceed.
        // Exit only at the above conditions, 1 and 2.
		while (!exit) {
			if (symbol[currentPtr] == *s) {
				if (*s != '*') {
					currentPtr++;
					*(++s);
				} else {
					exit = 1;
				} 
			}

            // The following deals with chars that do not match those that exist in trie
			else {
                // Jump to index in next if it exists.
				if (next[currentPtr] > -1) {
				    currentPtr = next[currentPtr];
				}
				else {
					next[currentPtr] = available;
					while (*s != '*'){
						symbol[available] = *s;
						*(++s);
						available++;
					}
					symbol[available] = '*';
					available++;
					exit = 1;
				}
			}
		}
	}
	return 0;
}
