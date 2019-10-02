#include<stdio.h>
#include<stdlib.h>
struct Tree{
	int data;
	struct Tree *left;
	struct Tree *right;
};

struct Tree *insertNode(int item){
	struct Tree *node = (struct Tree*)malloc(sizeof(struct Tree));
	node->data = item;

	node->left = NULL;
	node->right = NULL;

	return node;
}

int main(){
	struct Tree *root = insertNode(1);

	root->left        = insertNode(2); 
  	root->right       = insertNode(3);
	root->left->left =  insertNode(4);
	return 0;
}