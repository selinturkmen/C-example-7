#include <stdio.h>
#include "pe7func2.h"

void linkedlist(){
	struct Node* insert(struct Node* root, int data){
		if (root = NULL)
			return newNode(data);
			else{
				if(data < root->data)
					root->left = insert(root->left, data);
				if(data > root->data)
					root->right = insert(root->right, data);
				return root;}}
