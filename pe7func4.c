#include <stdio.h>
#include "pe7func4.h"

void sortlinkedlist(){
	struct Node* root;
	if (root=NULL)
		return;
	else{
		sortlinkedlist(root->left);
		printf("%d", root->data);
		sortlinkedlist(root->right);}}
