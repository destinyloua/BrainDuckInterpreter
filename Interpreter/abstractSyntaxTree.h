#pragma once
#include <stdbool.h>

typedef struct node {
	char* data;
	struct node* left;
	struct node* right;
}NODE, *PNODE;

typedef struct ast {
	node* root;
}AST, *PAST;

PAST createAST();

PNODE createNode(char*);

bool addNode(PAST, PNODE);

PNODE removeNode(PAST);

void destroyAST(PAST);