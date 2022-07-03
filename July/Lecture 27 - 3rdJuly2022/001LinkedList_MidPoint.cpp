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
	while(head) { 
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;
}

node* getMidPoint(node* head) {

	if(!head) { // head == NULL
		// linked list is empty
		return head;
	}

	node* slow = head;
	node* fast = head; // or fast = head->next (depends on expected o/p for even length linked list)

	while(fast && fast->next) { // fast != NULL && fast->next != NULL
		slow = slow->next;
		fast = fast->next->next;
	}

	return slow;

}

int main() {

	node* head = NULL;

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	node* midPoint = getMidPoint(head);
	cout << "midPoint->val : " << midPoint->val << endl;

	return 0;
}