#include<iostream>
using namespace std;

struct node{
	node* left;
	node* right;
	int data;
};
void insert(node** root, int elem);
void inOrder(node* root);

void bstdemo(){
	node* root = NULL;
	insert(&root, 10);
	if (root == NULL) cout << "heyyyy";
	//cout << root->data << endl;
	inOrder(root);
}

void insert(node** proot,int elem){
	//node *rootLoc = *proot;
	if (*proot){
		if (elem <= (*proot)->data) insert(&((*proot)->left), elem);
		else insert(&((*proot)->right), elem);
	}
	else{
		(*proot) = new node();
		(*proot)->left = NULL;
		(*proot)->right = NULL;
		(*proot)->data = elem;
	}
}

void remove(){

}

void inOrder(node* root){
	if (!root) return;
	inOrder(root->left);
	cout << root->data << endl;
	inOrder(root->right);
}

void preOrder(node* root){

}

void postOrder(node* root){

}