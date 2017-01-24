/*Edgar Ruiz
  CS 411
  January 28, 2016
*/

%{
#include <stdio.h>
#include <string.h>
#include "parser.tab.h"
%}

digit	 [0-9]
id 		 [a-zA-Z][a-zA-Z0-9"_"]*
hexalpha [a-fA-F]
hextail	 ({digit}|{hexalpha}){1,8}
hex      0[xX]{hextail}
string   \"[^"]*\"
character ([^'\n]|\\)'([^'\n])'

%%

bool {printf("\n%s", yytext); return BOOL;}
char {printf("\n%s", yytext); return CHAR;}
else {printf("\n%s", yytext); return ELSE;}
for {printf("\n%s", yytext); return FOR;}
if {printf("\n%s", yytext); return IF;}
int {printf("\n%s", yytext); return INT;}
printf {printf("\n%s", yytext); return PRINTF;}
return {printf("\n%s", yytext); return RETURN;}
string {printf("\n%s", yytext); return STRING;}
void {printf("\n%s", yytext); return VOID;}
while {printf("\n%s", yytext); return WHILE;}
true|false {printf("\n%s", yytext); return BOOLCONSTANT;}
{id} {printf("\n%s", yytext); return ID;}
{digit}+ {printf("\n%s", yytext); return INTCONSTANT;}
{hex}	{printf("\n%s", yytext); return INTCONSTANT;}
{string} {printf("\n%s", yytext); return STRINGCONSTANT;}
{character} {printf("\n%s", yytext); return CHARCONSTANT;}
"+" {printf("\n%s", yytext); return PLUS;}
"-" {printf("\n%s", yytext); return MINUS;}
"*" {printf("\n%s", yytext); return MULT;}
"/" {printf("\n%s", yytext); return DIV;}
"%" {printf("\n%s", yytext); return MOD;}
"<" {printf("\n%s", yytext); return LESSTHAN;}
"<=" {printf("\n%s", yytext); return LESSTHANOREQL;}
">" {printf("\n%s", yytext); return GRTRTHAN;}
">=" {printf("\n%s", yytext); return GRTRTHANOREQL;}
"==" {printf("\n%s", yytext); return EQUIVALENT;}
"!=" {printf("\n%s", yytext); return NOTEQUIVALENT;}
"=" {printf("\n%s", yytext); return EQUAL;}
";" {printf("\n%s", yytext); return SEMICOLON;}
"," {printf("\n%s", yytext); return COMMA;}
"(" {printf("\n%s", yytext); return LPAREN;}
")" {printf("\n%s", yytext); return RPAREN;}
"{" {printf("\n%s", yytext); return LBRACE;}
"}" {printf("\n%s", yytext); return RBRACE;}
"//"[^\n]* {printf("\n%s", yytext);}
"/*"[^'*/']*[\t\n]+"*/" {printf("\n%s", yytext);} 
[\t\n]+ {}

%%

