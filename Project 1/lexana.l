/*Edgar Ruiz
  CS 411
  January 28, 2016
*/

%{
#include <stdio.h>
#include <string.h>
%}

digit	 [0-9]
id 		 [a-zA-Z][a-zA-Z0-9"_"]*
hexalpha [a-fA-F]
hextail	 ({digit}|{hexalpha}){1,8}
hex      0[xX]{hextail}
string   \"[^"]*\"
character ([^'\n]|\\)'([^'\n])'

%%

bool {printf("BOOL ");}
char {printf("CHAR ");}
else {printf("ELSE ");}
for {printf("FOR ");}
if {printf("IF ");}
int {printf("INT ");}
printf {printf("PRINTF ");}
return {printf("RETURN ");}
string {printf("STRING ");}
void {printf("VOID ");}
while {printf("WHILE ");}
true|false {printf("BOOLCONSTANT ");}
{id} {printf("ID ");}
{digit}+ {printf("INTCONSTANT ");}
{hex}	{printf("INTCONSTANT ");}
{string} {printf("STRINGCONSTANT ");}
{character} {printf("CHARCONSTANT ");}
"+" {printf("PLUS ");}
"-" {printf("MINUS ");}
"*" {printf("MULT ");}
"/" {printf("DIV ");}
"%" {printf("MOD ");}
"<" {printf("LESSTHAN ");}
"<=" {printf("LESSTHANOREQL ");}
">" {printf("GRTRTHAN ");}
">=" {printf("GRTRTHANOREQL ");}
"==" {printf("EQUIVALENT ");}
"!=" {printf("NOTEQUIVALENT ");}
"=" {printf("EQUAL ");}
";" {printf("SEMICOLON ");}
"," {printf("COMMA ");}
"(" {printf("LPAREN ");}
")" {printf("RPAREN ");}
"{" {printf("LBRACE ");}
"}" {printf("RBRACE ");}
"//"[^\n]* {printf("COMMENTLINE ");}
"/*"[^'*/']*[\t\n]+"*/" {printf("LONGCOMMENT ");} 
[\t\n]+ {printf("\n");}

%%

int main(int argc, char **argv) {
	yyin = fopen(argv[1], "r");
	yylex();
	fclose(yyin);
	printf("\n");
	return 0;
}
