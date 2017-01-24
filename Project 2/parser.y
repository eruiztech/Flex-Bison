/* Edgar Ruiz
   CS 411
   February 29, 2016
*/

%{

#include <stdio.h>
int yylex();

%}


%token BOOL
%token CHAR
%token CHARCONSTANT
%token ELSE
%token FOR
%token IF
%token INT
%token PRINTF
%token RETURN
%token STRING
%token VOID
%token WHILE
%token PLUS
%token MINUS
%token MULT
%token DIV
%token MOD
%token LESSTHAN
%token LESSTHANOREQL
%token GRTRTHAN
%token GRTRTHANOREQL
%token EQUIVALENT
%token NOTEQUIVALENT
%token EQUAL
%token SEMICOLON
%token COMMA
%token LPAREN
%token RPAREN
%token LBRACE
%token RBRACE
%token STRINGCONSTANT
%token INTCONSTANT
%token BOOLCONSTANT
%token ID
%token NOELSE

%left PLUS
%left MINUS
%left MULT
%left DIV
%left MOD
%left GRTRTHAN
%left GRTRTHANOREQL
%left LESSTHAN
%left LESSTHANOREQL
%left EQUIVALENT
%left NOTEQUIVALENT
%right EQUAL
%right ELSE
%nonassoc NOELSE

%start Program

%%

Program           :    DeclAdd                   { printf("[reduce 0]"); }
                  ;

DeclAdd           :    DeclAdd Decl              { printf("[reduce 1]"); }
                  |    Decl                       { printf("[reduce 2]"); }
                  ;
 
Decl              :    VariableDecl               { printf("[reduce 3]"); }
                  |    FunctionDecl               { printf("[reduce 4]"); }
                  ;
 
VariableDecl      : Variable SEMICOLON            { printf("[reduce 5]"); }
                  ;

Variable          : Type ID                       { printf("[reduce 6]"); }
                  ;

Type              : INT                           { printf("[reduce 8]"); }
                  | BOOL                          { printf("[reduce 9]"); }
                  | STRING                        { printf("[reduce 10]"); }
                  | CHAR                          { printf("[reduce 11]"); }
                  ;

FunctionDecl      : Type ID LPAREN OptFormals RPAREN StmtBlock   { printf("[reduce 12]"); }
                  | VOID ID LPAREN OptFormals RPAREN StmtBlock   { printf("[reduce 13]"); }
                  ;

OptFormals        : Formals                       { printf("[reduce 14]"); }
                  | /* empty */                   { printf("[reduce 15]"); }
                  ;

Formals           : Variable                      { printf("[reduce 16]"); }
                  | Formals COMMA Variable        { printf("[reduce 17]"); }
                  ; 
                  
StmtBlock         : LBRACE VarDeclAdd StmtAdd RBRACE    { printf("[reduce 18]"); }
                  | LBRACE StmtAdd RBRACE               { printf("[reduce 19]"); }
                  | LBRACE VarDeclAdd RBRACE            { printf("[reduce 20]"); }
                  | LBRACE RBRACE                       { printf("[reduce 21]"); }
                  ;

VarDeclAdd        : VarDeclAdd VariableDecl       { printf("[reduce 22]"); }
                  | VariableDecl                  { printf("[reduce 23]"); }
                  ;

StmtAdd           : StmtAdd Stmt                 { printf("[reduce 24]"); }
                  | Stmt                          { printf("[reduce 25]"); }
                  ;

Stmt              : SEMICOLON                     { printf("[reduce 26]"); }
                  | Expr SEMICOLON                { printf("[reduce 27]"); }
                  | IfStmt                        { printf("[reduce 28]"); }
                  | WhileStmt                     { printf("[reduce 29]"); }
                  | ForStmt                       { printf("[reduce 30]"); }
                  | ReturnStmt                    { printf("[reduce 31]"); }
                  | PrintStmt                     { printf("[reduce 32]"); }
                  | StmtBlock                     { printf("[reduce 33]"); }
                  ;

IfStmt            : IF LPAREN Expr RPAREN Stmt ELSE Stmt         { printf("[reduce 34]"); }
                  | IF LPAREN Expr RPAREN Stmt %prec NOELSE      { printf("[reduce 35]"); }
                  ;

WhileStmt         : WHILE LPAREN Expr RPAREN Stmt     { printf("[reduce 36]"); }
                  ;

ForStmt           : FOR LPAREN Expr SEMICOLON SEMICOLON RPAREN Stmt               { printf("[reduce 37]"); }
                  | FOR LPAREN SEMICOLON Expr SEMICOLON RPAREN Stmt               { printf("[reduce 38]"); }
                  | FOR LPAREN SEMICOLON SEMICOLON Expr RPAREN Stmt               { printf("[reduce 39]"); }
                  | FOR LPAREN SEMICOLON SEMICOLON RPAREN Stmt                    { printf("[reduce 40]"); }
                  | FOR LPAREN Expr SEMICOLON Expr SEMICOLON RPAREN Stmt          { printf("[reduce 41]"); }
                  | FOR LPAREN Expr SEMICOLON SEMICOLON Expr RPAREN Stmt          { printf("[reduce 42]"); }
                  | FOR LPAREN SEMICOLON Expr SEMICOLON Expr RPAREN Stmt          { printf("[reduce 43]"); }
                  | FOR LPAREN Expr SEMICOLON Expr SEMICOLON Expr RPAREN Stmt     { printf("[reduce 44]"); }
                  ;

ReturnStmt        : RETURN SEMICOLON              { printf("[reduce 45]"); }
                  | RETURN Expr SEMICOLON         { printf("[reduce 46]"); }
                  ;

PrintStmt         : PRINTF LPAREN STRINGCONSTANT COMMA ExprAdd RPAREN SEMICOLON  { printf("[reduce 47]"); }
                  | PRINTF LPAREN Constant RPAREN SEMICOLON  { printf("[reduce 48]"); }
                  | PRINTF LPAREN ID RPAREN SEMICOLON        { printf("[reduce 49]"); }
                  ;

ExprAdd           : ExprAdd COMMA Expr            { printf("[reduce 50]"); }
                  | Expr                          { printf("[reduce 51]"); }
                  ;

Expr              : ID EQUAL Expr                 { printf("[reduce 52]");  }
                  | Constant                      { printf("[reduce 53]"); }  
                  | ID                            { printf("[reduce 54]"); }
                  | Call                          { printf("[reduce 55]"); }
                  | LPAREN Expr RPAREN            { printf("[reduce 56]"); }
                  | Expr PLUS Expr                { printf("[reduce 57]"); }
                  | Expr MINUS Expr               { printf("[reduce 58]"); }
                  | Expr MULT Expr                { printf("[reduce 59]"); }
                  | Expr DIV Expr                 { printf("[reduce 60]"); }
                  | MINUS Expr                    { printf("[reduce 61]"); }
                  | Expr LESSTHAN Expr            { printf("[reduce 62]"); }
                  | Expr LESSTHANOREQL Expr       { printf("[reduce 63]"); }
                  | Expr GRTRTHAN Expr            { printf("[reduce 64]"); }
                  | Expr GRTRTHANOREQL Expr       { printf("[reduce 65]"); }
                  | Expr EQUIVALENT Expr          { printf("[reduce 66]"); }
                  | Expr NOTEQUIVALENT Expr       { printf("[reduce 67]"); }
                  | Expr MOD Expr                 { printf("[reduce 68]"); }
                  ;


Call              : ID LPAREN OptExprAdd RPAREN  { printf("[reduce 69]"); }
                  ;

OptExprAdd        : ExprAdd                       { printf("[reduce 70]"); }
                  | /* empty */                   { printf("[reduce 71]"); }
                  ;

Constant          : INTCONSTANT                   { printf("[reduce 72]"); }
                  | STRINGCONSTANT                { printf("[reduce 73]"); }
                  | BOOLCONSTANT                  { printf("[reduce 74]"); }
                  | CHARCONSTANT                  { printf("[reduce 75]"); }
                  ;


%%

int yyerror(char *s){
  printf("\nError: %s\n", s);
  printf("[reject]\n");
  return 0;
}

int main(int argc, char **argv){
      if(yyparse() == 0){
            printf("\n[accept]\n");
      }
      return 0;
}