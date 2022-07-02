#include<iostream>

using namespace std;

class node {

	public :

		int val;
		node* next;

		node(int val) {
			this->val = val;
			this->next = NULL;
		}

};

void insertAtHead(int val, node*& head) {

	// 1. create a new node dynamically with the given value
	node* n = new node(val);

	// 2. update the next field of the newly created node
	// such that it points to the head of the linked list
	n->next = head;

	// 3. make the newly created node as the new head of 
	// the linked list
	head = n;

}

node* getTail(node* temp) {

	while(temp->next != NULL) {
		temp = temp->next;
	}

	return temp;

}

void insertAtTail(int val, node*& head) {

	if(head == NULL) {
		insertAtHead(val, head);
		return;
	}

	// 1. create a new node dynamically with the given value
	node* n = new node(val);

	// 2. get hold of the pointer to the tail node
	node* tail = getTail(head) ;

	// 3. update the next field of the tail node such that
	// it points to the newly created node
	tail->next = n;

}


void printLinkedList(node* head) {

	while(head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}

	cout << endl;

}

int main() {

	node* head = NULL; // linked list is initially empty

	// insertAtHead(50, head);
	// insertAtHead(40, head);
	// insertAtHead(30, head);
	// insertAtHead(20, head);
	// insertAtHead(10, head);
	// insertAtHead(0,  head);

	// printLinkedList(head);

	insertAtTail(60, head);

	printLinkedList(head);

	insertAtTail(70, head);

	printLinkedList(head);

	return 0;
}