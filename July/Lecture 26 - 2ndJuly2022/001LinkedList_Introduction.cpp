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


// node* insertAtHead(int val, node* head) {

// 	// 1. create a new node dynamically with the given value
// 	node* n = new node(val);

// 	// 2. update the next field of the newly created node
// 	// such that it points to the head of the linked list
// 	n->next = head;

// 	// 3. make the newly created node as the new head of 
// 	// the linked list
// 	head = n;

// 	return head;

// }

void printLinkedList(node* head) {

	while(head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}

	cout << endl;

}

int main() {

	node* head = NULL; // linked list is initially empty

	insertAtHead(50, head);
	insertAtHead(40, head);
	insertAtHead(30, head);
	insertAtHead(20, head);
	insertAtHead(10, head);
	insertAtHead(0, head);

	// head = insertAtHead(50, head);
	// head = insertAtHead(40, head);
	// head = insertAtHead(30, head);
	// head = insertAtHead(20, head);
	// head = insertAtHead(10, head);
	// head = insertAtHead(0, head);

	printLinkedList(head);

	return 0;
}