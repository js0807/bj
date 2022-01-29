#include <cstddef>
#include <iostream>

using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node* prev;
};

void init(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void push(Node** head_ref, int new_data){
	Node* new_node = new Node();

	// set new_node
	new_node->data=new_data;
	new_node->prev=NULL;
	new_node->next=*head_ref;

	// set head_ref
	if((*head_ref)!=NULL) (*head_ref)->prev=new_node;
	(*head_ref) = new_node;
}

void insertAfter(Node* prev_node, int new_data){
	Node* new_node = new Node();
	
	if(prev_node==NULL) return;
	
	// set new_node
	new_node->data=new_data;
	new_node->prev=prev_node;
	new_node->next=prev_node->next;

	// set else
	prev_node->next=new_node;
	if(new_node->next!=NULL) prev_node->next->prev=new_node;
}

void append(Node** head_ref, int new_data){
	Node* new_node = new Node();
	Node* last = *head_ref;
	
	// set new_node
        new_node->data=new_data;
        new_node->next=NULL;
	
	// head null check
	if(*head_ref==NULL){
		new_node->prev=NULL;
		*head_ref=new_node;
		return;
	}

	while(last->next!=NULL){
		last=last->next;
	}
	
	// set new_node prev
	new_node->prev=last;

	// set last node
	last->next=new_node;
	
}

void printList(Node* head_ref){
	Node* head=head_ref;

	while(head!=NULL){
		cout<<head->data<<" <-> ";
		head=head->next;
	}
}

void deleteNode(Node** head_ref, Node* del){
	if(*head_ref==NULL || del==NULL) return;
	if(*head_ref==del) *head_ref=del->next;
	
	//fail
	//if(del->next!=NULL) del->prev->next=del->next;
	//if(del->prev!=NULL) del->next->prev=del->prev;

	//correct
	if(del->next!=NULL) del->next->prev=del->prev;
	if(del->prev!=NULL) del->prev->next=del->next;
	free(del);
}

int main(){
	init();
	Node* head = NULL;
	
	append(&head,6);
	push(&head,7);
	push(&head,1);
	append(&head,4);
	insertAfter(head->next,8);
	
	cout<<"Double Linked List :\n";
	printList(head);
	cout<<endl;
	
	deleteNode(&head,head->next);
	cout<<"deleted : \n";
	printList(head);

	return 0;
}
