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

void deleteAtHead(node*& head) {

	if(!head) { // head == NULL
		// linked list is empty
		return;
	}

	node* temp = head;
	head = head->next;
	delete temp;
}

void deleteAtTail(node*& head) {

	if(!head) { //  head == NULL
		// linked list is empty
		return;
	}

	if(!head->next) { // head->next == NULL
		// linked list has a single node
		deleteAtHead(head);
		return;
	}

	node* prev = NULL;
	node* tail = head;

	while(tail->next) { // tail->next != NULL
		prev = tail;
		tail = tail->next;
	}

	prev->next = NULL;
	delete tail;

}

node* getNode(int j, node* temp) {

	int k = 0;
	while(temp != NULL && k < j) { // while(temp && k < j)
		temp = temp->next;
		k++;
	}

	return temp;

}

void deleteAtIndex(int i, node*& head) {

	if(i == 0) {
		deleteAtHead(head);
		return;
	}

	// 1. get hold of the pointer to the node at the (i-1)th index
	node* prev = getNode(i-1, head);

	if(prev == NULL) {
		// you are trying to delete at an invalid index
		return;
	}

	// 2. get hold of the pointer to the node at the ith index
	node* cur = getNode(i, head);

	if(cur == NULL) {
		// you are trying to delete at an invalid index
		return;
	}

	// 3. update the next field of the prev. node such that it 
	// points to next of current node
	prev->next = cur->next;

	// 4. release the memory for the current node
	delete cur;

}

int main() {

	node* head = NULL; // linked list is initially empty

	insertAtHead(50, head);
	insertAtHead(40, head);
	insertAtHead(30, head);
	insertAtHead(20, head);
	insertAtHead(10, head);
	
	printLinkedList(head);

	deleteAtIndex(2, head);

	printLinkedList(head);

	deleteAtIndex(0, head);

	printLinkedList(head);

	deleteAtIndex(2, head);

	printLinkedList(head);

	return 0;
}