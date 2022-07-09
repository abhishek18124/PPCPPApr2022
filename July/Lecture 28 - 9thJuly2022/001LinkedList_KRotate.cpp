#include<iostream>

using namespace std;

class node {
public:

	int val;
	node* next;

	node(int val) {
		this->val = val;
		this->next = NULL;
	}

};

void insertAtHead(node*& head, int val) {
	node* n = new node(val);
	n->next = head; 
	head = n;
}

void printLinkedList(node* head) {
	while(head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;
}

node* kRotate(node* head, int k) {

	if(!head) { // head == NULL
		return head;
	}

	node* tail = head;
	int n = 1;
	while(tail->next) { // tail->next != NULL
		tail = tail->next;
		n++;
	}

	// 1. connect the tail node of the linked list with
	// the head node of the linked list to form a cycle

	tail->next = head;

	// 2. get hold of the pointer to the new tail of the
	// linked list -- this can found at the (n-(k%n)-1)th idx

	node* newTail = head;
	for(int i=0; i<(n-(k%n)-1); i++) {
		newTail = newTail->next;
	}

	node* newHead = newTail->next;

	// 3. break the cycle by updating the next pointer of the
	// newTail node

	newTail->next = NULL;

	return newHead;

}

int main() {

	node* head = NULL;

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	int k = 8;

	node* newHead = kRotate(head, k);

	printLinkedList(newHead);

	return 0;
}


