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


void printLinkedList(node* head) {

	while(head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}

	cout << endl;

}

int length(node* head) {

	int count = 0;
	while(head) { // head != NULL
		count++;
		head = head->next;
	}

	return count;

}

int lengthRecursive(node* head) {

	// base case
	if(!head) { // head == NULL
		// num. of nodes inside an empty linked list
		return 0;
	}

	// recursive case

	// 1. ask your friend for the length of the linked list
	// that starts from the node that comes after the head node

	int X = lengthRecursive(head->next);

	return 1 + X;

}

int main() {

	node* head = NULL; // linked list is initially empty

	insertAtHead(50, head);
	insertAtHead(40, head);
	insertAtHead(30, head);
	insertAtHead(20, head);
	insertAtHead(10, head);

	printLinkedList(head);

	cout << length(head) << endl;
	cout << lengthRecursive(head) << endl;


	return 0;
}