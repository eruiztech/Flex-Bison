#ifndef Ast_h
#define Ast_h

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct astNode {
    int nodeType;
    struct astNode *left;
    struct astNode *right;
};

struct relationalNode {
    int nodeType;
    enum relationalOperator operator;
    struct astNode *left;
    struct astNode *right;
};

struct equalityNode {
    int nodeType;
    enum equalityOperator operator;
    struct astNode *left;
    struct astNode *right;
};

struct functionNode {
    int nodeType;
    struct astNode *arguments;
    struct symbolNode *symbol; 
}; 

struct symbolNode {
    char *name;
    int value;
    struct node *function;  
};

struct ifNode {
    int nodeType;
    struct astNode *condition;
    struct astNode *ifBranch;
    struct astNode *elseBranch;   
};

struct whileNode{
    int nodeType;
    struct astNode *condition;
    struct astNode *whileBranch;
};

struct assignmentNode {
    int nodeType;
    struct symbolNode *symbol;
    struct astNode *value;     
};

struct numNode {
    int nodeType;
    int number;
};

struct astNode *newastNode(int nodeType, struct astNode *left, struct astNode *right) {
    struct astNode *astNode = emalloc(sizeof (struct astNode));
    astNode->nodeType = nodeType;
    astNode->left = left;
    astNode->right = right;
    return astNode;    
};

struct astNode *newastrelationalNode(enum relationalOperator operator, struct astNode *left, struct astNode *right){
    struct astrelationalNode *astNode = emalloc (sizeof (struct astRelationalNode));
    astNode->nodeType = 'R';
    astNode->operator = operator;
    astNode->left = left;
    astNode->right = right;
    return (struct astNode *) astNode;
};

struct astNode *newnumNode(int i) {
    struct numval *nv = malloc(sizeof(struct numval));
    nv->nodeType = 'N';
    nv->number = i;
    return (struct astNode *) nv;  
};


struct astNode *newastifNode(struct astNode *condition, struct astNode *ifbranch, struct astNode *elsebranch) {
    struct astifNode *astNode = malloc(sizeof(struct astifNode));
    astNode->nodeType = 'I';
    astNode->condition = condition;
    astNode->ifbranch = ifbranch;
    astNode->elsebranch = elsebranch;

    return (struct astNode *) astNode;    
};


#endif