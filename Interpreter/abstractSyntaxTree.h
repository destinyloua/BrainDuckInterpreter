#pragma once


typedef struct node {
	char* data;
	struct node* left;
	struct node* right;
}NODE, *PNODE;

typedef struct ast {
	node* root;
}AST, *PAST;