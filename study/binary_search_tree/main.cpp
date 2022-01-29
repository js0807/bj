#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Node{
	int key,value;
	struct Node *left, *right, *parent;
};

struct BST{
	Node *root;
};

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void __tree_walk(Node *x){
	if(x==NULL) return;
	else{
		__tree_walk(x->left);
		cout<<x->key<<" "<<x->value<<endl;
		__tree_walk(x->right);
	}
}

Node *__tree_search(Node *x, int input){
	/* recursion
	if(x->key==input) return x;
	if(x->key < input) x=x->right;
	else x=x->left;
	__tree_search(x,input);
	*/

	// iterate : because of speed
	while(x!=NULL && x->key!=input){
		x = (x->key < input) ? x->right : x->left;
	}
	return x;
}

Node *__tree_min(Node *x){
	while(x->left!=NULL){
		x=x->left;
	}
	return x;
}

Node *__tree_max(Node *x){
	while(x->right!=NULL){
		x=x->right;
	}
	return x;
}

Node *__tree_predecessor(Node *x){
	Node* y=x->parent;

	if(x->left!=NULL){
		return __tree_max(x->left);
	} else{
		while(y!=NULL && x!=y->right){
			x=y;
			y=y->parent;
		}
		return y;
	}
}

Node *__tree_successor(Node *x){
	Node* y=x->parent;
	
	if(x->right!=NULL){
		return __tree_min(x->right);
	} else{
		while(y!=NULL && x!=y->left){
			x=y;
			y=y->parent;
		}
		return y;
	}
}

void __transplant(BST *bst, Node *u, Node *v){
	if(u->parent==NULL){
		bst->root=v;
	} else if(u==u->parent->right){
		u->parent->right=v;
	} else{
		u->parent->left=v;
	}
	if(v!=NULL){
		v->parent=u->parent;
	}
}

void print(BST *bst){
	__tree_walk(bst->root);
}

Node *search(BST *bst, int input){
	return __tree_search(bst->root,input);
}

Node *prev(BST *bst, int key){
	Node* x = __tree_search(bst->root,key);
	return __tree_predecessor(x);
}

Node *next(BST *bst, int key){
	Node* x = __tree_search(bst->root,key);
	return __tree_successor(x);
}

void insert(BST *bst, int key, int value){
	Node* newnode = (Node*) malloc(sizeof(Node));
	Node *x= bst->root ,*y=NULL;

	*newnode = (Node) {key,value,NULL,NULL,NULL};
	
	while(x!=NULL){
		y=x;
		x = (x->key<key) ? x->right:x->left;
	}

	if(y==NULL) bst->root=newnode;
	else if(y->key<newnode->key) y->right=newnode;
	else y->left=newnode;
	
	newnode->parent=y;
}

void delete_key(BST *bst, int key){
	Node* x = __tree_search(bst->root,key);
	Node* y;

	if(x->left==NULL){
		__transplant(bst,x,x->right);
	} else if(x->right==NULL){
		__transplant(bst,x,x->left);
	} else{
		y=__tree_min(x->right);
		
		if(y->parent!=x){
			__transplant(bst,y,y->right);
			y->right=x->right;
			y->right->parent=y;
		}
		__transplant(bst,x,y);
		y->left=x->left;
		y->left->parent=y;
	}
}

int main(){
	init();
	
	int arr[10] = { 5, 3, 9, 2, 6, 7, 4, 1, 10, 8 };
	BST bst = { NULL };
 
	for (int i = 0; i < 10; i++) {
		insert(&bst, arr[i], arr[i]);
	}
	print(&bst);
 
	delete_key(&bst, 3);
	delete_key(&bst, 2);
	delete_key(&bst, 1);
	insert(&bst, 11, 11);
	insert(&bst, 12, 12);
	insert(&bst, 13, 13);
	print(&bst);
 
	return 0;
}
