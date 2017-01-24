/* Edgar Ruiz
   CS 411
   March 18, 2016
*/

%{

#include <stdio.h>
#inlcude "ast.h"
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

%type <declList> DeclAdd
%type <decl> Decl
%type <type> Type
%type <varDecl> VariableDecl
%type <varDecl> Variable
%type <formals> OptFormals
%type <formals> Formals
%type <vardecls> VarDeclAdd
%type <stmtblock> StmtBlock
%type <statements> StmtAdd
%type <stmt> Stmt
%type <printStmt> PrintStmt
%type <exprList> ExprAdd
%type <expr> Expr
%type <exprList> OptExprAdd
%type <call> Call
%type <ifStmt> IfStmt
%type <whileStmt> WhileStmt
%type <forStmt> ForStmt
%type <returnStmt> ReturnStmt



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

Program           :    DeclAdd                   { Program *program = new Program($1);
                                                   program->SetParent(NULL); }
                  ;

DeclAdd           :    DeclAdd Decl              { ($$ = $1)->Append($2); }
                  |    Decl                       { ($$ = new List<Decl*>)->Append($1); }
                  ;
 
Decl              :    VariableDecl               { $$ = $1; }
                  |    FunctionDecl               { $$ = $1; }
                  ;
 
VariableDecl      : Variable SEMICOLON            { $$ = $1; }
                  ;

Variable          : Type ID                       { $$ = new VarDecl($2, $1); }
                  ;

Type              : INT                           { $$ = Type::intType; }
                  | BOOL                          { $$ = Type::boolType; }
                  | STRING                        { $$ = Type::stringType; }
                  | CHAR                          { $$ = Type::charType; }
                  ;

FunctionDecl      : Type ID LPAREN OptFormals RPAREN StmtBlock   { $$ = new FnDecl($2, $1, $4);
                                                                   $$->SetFunctionBody($6); }
                  | VOID ID LPAREN OptFormals RPAREN StmtBlock   { $$ = new FnDecl($2, Type::voidType, $4); 
                                                                   $$->SetFunction($6); }
                  ;

OptFormals        : Formals                       { $$ = $1; }
                  | /* empty */                   { $$ = new List<VarDecl *>; }
                  ;

Formals           : Variable                      { ($$ = new List<VarDecl *>)->Append($1); }
                  | Formals COMMA Variable        { ($$ = $1)->Append($3); }
                  ; 
                  
StmtBlock         : LBRACE VarDeclAdd StmtAdd RBRACE    { $$ = new StmtBlock($2, $3); }
                  | LBRACE StmtAdd RBRACE               { $$ = new StmtBlock(new List<VarDecl*>, $2); }
                  | LBRACE VarDeclAdd RBRACE            { $$ = new StmtBlock($2, new List<Stmt*>); }
                  | LBRACE RBRACE                       { $$ = new StmtBlock(new List<VarDecl*>, new List<Stmt*>); }
                  ;

VarDeclAdd        : VarDeclAdd VariableDecl       { ($$ = $1)->Append($2); }
                  | VariableDecl                  { ($$ = new List<VarDecl*>)->Append($1); }
                  ;

StmtAdd           : StmtAdd Stmt                 { ($$ = $1)->Append($2); }
                  | Stmt                          { ($$ = new List<Stmt*>)->Append($1); }
                  ;

Stmt              : SEMICOLON                     { $$ = new EmptyExpr(); }
                  | Expr SEMICOLON                { $$ = $1; }
                  | IfStmt                        { $$ = $1; }
                  | WhileStmt                     { $$ = $1; }
                  | ForStmt                       { $$ = $1; }
                  | ReturnStmt                    { $$ = $1; }
                  | PrintStmt                     { $$ = $1; }
                  | StmtBlock                     { $$ = $1; }
                  ;

IfStmt            : IF LPAREN Expr RPAREN Stmt ELSE Stmt         { $$ = new IfStmt($3, $5, $7); }
                  | IF LPAREN Expr RPAREN Stmt %prec NOELSE      { $$ = new IfStmt($3, $5, NULL); }
                  ;

WhileStmt         : WHILE LPAREN Expr RPAREN Stmt     { $$ = new WhileStmt($3, $5); }
                  ;

ForStmt           : FOR LPAREN Expr SEMICOLON SEMICOLON RPAREN Stmt               { $$ = new ForStmt($3, new EmptyExpr(), new EmptyExpr()); }
                  | FOR LPAREN SEMICOLON Expr SEMICOLON RPAREN Stmt               { $$ = new ForStmt(new EmptyExpr(), $4, new EmptyExpr()); }
                  | FOR LPAREN SEMICOLON SEMICOLON Expr RPAREN Stmt               { $$ = new ForStmt(new EmptyExpr(), new EmptyExpr(), $5); }
                  | FOR LPAREN SEMICOLON SEMICOLON RPAREN Stmt                    { $$ = new ForStmt(new EmptyExp(), new EmptyExpr(), new EmptyExpr()); }
                  | FOR LPAREN Expr SEMICOLON Expr SEMICOLON RPAREN Stmt          { $$ = new ForStmt($3, $5, new EmptyExpr()); }
                  | FOR LPAREN Expr SEMICOLON SEMICOLON Expr RPAREN Stmt          { $$ = new ForStmt($3, new EmptyExpr(), $6); }
                  | FOR LPAREN SEMICOLON Expr SEMICOLON Expr RPAREN Stmt          { $$ = new ForStmt(new EmptyExpr(), $4, $6); }
                  | FOR LPAREN Expr SEMICOLON Expr SEMICOLON Expr RPAREN Stmt     { $$ = new ForStmt($3, $5, $7); }
                  ;

ReturnStmt        : RETURN SEMICOLON              { $$ = new ReturnStmt(@$, new EmptyExpr()); }
                  | RETURN Expr SEMICOLON         { $$ = new ReturnStmt(@2, $2); }
                  ;

PrintStmt         : PRINTF LPAREN STRINGCONSTANT COMMA ExprAdd RPAREN SEMICOLON  { $$ = new PrintStmt($3, new List<Expr*>); }
                  | PRINTF LPAREN Constant RPAREN SEMICOLON  { $$ = new PrintStmt($3); }
                  | PRINTF LPAREN ID RPAREN SEMICOLON        { $$ = new PrintStmt($3); }
                  ;

ExprAdd           : ExprAdd COMMA Expr            { ($$ = $1)->Append($3); }
                  | Expr                          { ($$ = new List<Expr*>)->Append($1); }
                  ;

Expr              : ID EQUAL Expr                 { $$ = new AssignExpr($1, new Operator(@2, "="), $3);  }
                  | Constant                      { $$ = $1; }  
                  | ID                            { $$ = $1; }
                  | Call                          { $$ = $1; }
                  | LPAREN Expr RPAREN            { $$ = $2; }
                  | Expr PLUS Expr                { $$ = new ArithmeticExpr($1, new Operator(@2, "+"), $3); }
                  | Expr MINUS Expr               { $$ = new ArithmeticExpr($1, new Operator(@2, "-"), $3); }
                  | Expr MULT Expr                { $$ = new ArithmeticExpr($1, new Operator(@2, "*"), $3); }
                  | Expr DIV Expr                 { $$ = new ArithmeticExpr($1, new Operator(@2, "/"), $3); }
                  | MINUS Expr                    { $$ = new ArithmeticExpr(new Operator(@1, "-"), $2); }
                  | Expr LESSTHAN Expr            { $$ = new RelationExpr($1, new Operator(@2, "<"), $3); }
                  | Expr LESSTHANOREQL Expr       { $$ = new RelationExpr($1, new Operator(@2, "<="), $3); }
                  | Expr GRTRTHAN Expr            { $$ = new RelationExpr($1, new Operator(@2, ">"), $3); }
                  | Expr GRTRTHANOREQL Expr       { $$ = new RelationExpr($1, new Operator(@2, ">="), $3); }
                  | Expr EQUIVALENT Expr          { $$ = new RelationExpr($1, new Operator(@2, "=="), $3); }
                  | Expr NOTEQUIVALENT Expr       { $$ = new RelationExpr($1, new Operator(@2, "!="), $3); }
                  | Expr MOD Expr                 { $$ = new RelationExpr($1, new Operator(@2, "%"), $3); }
                  ;


Call              : ID LPAREN OptExprAdd RPAREN  { $$ = new Call(@$, NULL, $1, $3); }
                  ;

OptExprAdd        : ExprAdd                       { $$ = $1; }
                  | /* empty */                   { $$ = new List<Expr*>; }
                  ;

Constant          : INTCONSTANT                   { $$ = new IntConstant(@1, $1); }
                  | STRINGCONSTANT                { $$ = new StringConstant(@1, $1); }
                  | BOOLCONSTANT                  { $$ = new BoolConstant(@1, $1); }
                  | CHARCONSTANT                  { $$ = new CharConstant(@1, $1); }
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