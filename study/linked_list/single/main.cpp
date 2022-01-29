#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Node{
public:
	int key;
	Node *next;
};

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void printList(Node *addr){
	while(addr!=NULL){
		cout<<addr->key<<" -> ";
		addr=addr->next;
	}
}

void pushHead(Node** head, int data){
	Node* new_node = new Node();
	new_node->key=data;
	new_node->next=*head; //before head
	*head=new_node; //new head
}

void insertAfter(Node* prev, int data){
	if(prev==NULL) return;
	else{
		Node* new_node = new Node();
		new_node->key = data;
		new_node->next = prev->next;
		prev->next = new_node;
	}
}

void pushTail(Node** tail, int data){
	Node* new_node = new Node();
	new_node->key=data;
	new_node->next=NULL;
	(*tail)->next=new_node;
}

void append(Node** n, int data){
	Node* new_node = new Node();
	Node* last = *n;
	new_node->key = data;
	if(*n==NULL){
		*n=new_node;
		return;
	}
	while(last->next!=NULL){
		last = last->next;
	}
	last->next = new_node;
}

void delete_node(Node** head, int data){
	Node* temp = *head;
	Node* prev = NULL;
	if(temp==NULL) return;
	if(temp!=NULL && temp->key==data){
		*head = temp->next;
		delete temp;
		return;
	} else{
		while(temp!=NULL && temp->key!=data){
			prev=temp;
			temp=temp->next;
		}
		prev->next=temp->next;
		delete temp;
	}
}

void delete_node_pos(Node** head, int pos){
	Node* temp = *head;
	Node* prev = NULL;
	if(pos==0){
		*head=temp->next;
		delete temp;
		return;
	} else{
		while(pos!=0){
			prev=temp;
			temp=temp->next;
			pos--;
		}
		prev->next=temp->next;
		delete temp;
	}
}

void getCount(Node *head){
	int cnt=0;
	Node* tmp=head;
	while(tmp!=NULL){
		tmp=tmp->next;
		cnt++;
	}
	cout<<cnt<<endl;
}

bool search(Node *head, int x){
	Node *tmp=head;
	while(tmp!=NULL){
		if(tmp->key==x) return true;
		tmp=tmp->next;
	}
	return false;
}

int main(){
	init();
	
	Node* head = new Node();
       	Node* second = new Node();
	Node* third = new Node();

	head->key=1;
	head->next=second;

	second->key=2;
	second->next=third;

	third->key=3;
	third->next=NULL;
	
	pushHead(&head,0);
	insertAfter(second,5);
	pushTail(&third,9);
	append(&head,11);
	delete_node(&head,5);
	delete_node_pos(&head,3);

	printList(head);
	cout<<"\nCount : ";
	getCount(head);
	cout<<"\nFind 2 : ";
	cout<<search(head,2);
	cout<<endl;

	return 0;
}

