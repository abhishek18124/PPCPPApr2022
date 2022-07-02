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

node* reverse(node* head) {

	node* prev = NULL;
	node* cur = head;

	while(cur) { // cur != NULL
		node* temp = cur->next;
		cur->next = prev;
		prev = cur;
		cur = temp;
	}

	return prev;

}

node* reverseRecursive(node* head) {

	// base case
	
	// if(!head) { // head == NULL
	// 	return NULL;
	// }

	// if(!head->next) { // head->next == NULL
	// 	return head;
	// }

	if(!head || !head->next) {
		return head;
	}

	// recursive case

	// ask your friend to reverse the linked list that starts from
	// the node which comes after the head node
	node* revHead = reverseRecursive(head->next);
	
	node* revTail = head->next;
	revTail->next = head;
	head->next = NULL;
	
	return revHead;

}

int main() {

	node* head = NULL; // linked list is initially empty

	insertAtHead(50, head);
	insertAtHead(40, head);
	insertAtHead(30, head);
	insertAtHead(20, head);
	insertAtHead(10, head);

	printLinkedList(head);

	// head = reverse(head);
	head = reverseRecursive(head);

	printLinkedList(head);

	return 0;
}