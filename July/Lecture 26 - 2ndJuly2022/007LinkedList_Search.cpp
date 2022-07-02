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

bool search(int target, node* head) {

	while(head) { // head != NULL
		if(head->val == target) {
			return true;
		}
		head = head->next;
	}

	return false;

}

bool searchRecursive(int target, node* head) {
	// base case
	if(!head) { // head == NULL
		return false;
	}

	// recursive case

	if(head->val == target) {
		return true;
	}

	// ask your friend to search for the target in the linked
	// list that starts from the node that comes after the 
	// head node

	return searchRecursive(target, head->next);
}

int main() {

	node* head = NULL; // linked list is initially empty

	insertAtHead(50, head);
	insertAtHead(40, head);
	insertAtHead(30, head);
	insertAtHead(20, head);
	insertAtHead(10, head);

	printLinkedList(head);

	int target = 30;

	search(target, head) ? cout << "true" << endl :
	                       cout << "false" << endl;

	searchRecursive(target, head) ? cout << "true" << endl :
	                                cout << "false" << endl;                       


	return 0;
}