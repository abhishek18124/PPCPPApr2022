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

	while(head != NULL) { // while(head)
		cout << head->val << " ";
		head = head->next;
	}

	cout << endl;

}

node* getNode(int j, node* temp) {

	int k = 0;
	while(temp != NULL && k < j) { // while(temp && k < j)
		temp = temp->next;
		k++;
	}

	return temp;

}

void insertAtIndex(int i, int val, node*& head) {

	if(i == 0) {
		insertAtHead(val, head);
		return;
	}

	// 1. get hold of the pointer to the node at the (i-1)th index
	node* prev = getNode(i-1, head) ;

	if(prev == NULL) {
		// i exceed the length of the linked list
		return;
	}

	// 2. create a new node dynamically with the given value
	node* n = new node(val);

	// 3. update the next field of the newly created node to point
	// to the node that comes after the prev. node
	n->next = prev->next;

	// 4. update the next field of the prev node such that it points
	// to the newly created node.
	prev->next = n;

}

int main() {

	node* head = NULL; // linked list is initially empty

	insertAtHead(50, head);
	insertAtHead(40, head);
	insertAtHead(30, head);
	insertAtHead(20, head);
	insertAtHead(10, head);
	
	printLinkedList(head);

	insertAtIndex(2, 25, head);

	printLinkedList(head);

	return 0;
}