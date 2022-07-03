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

node* kthNodeFromEnd(node* head, int k) {

	node* fast = head;
	while(k-- and fast) {
		fast = fast->next;
	}

	if(!fast) {
		// if k exceeds the length of the linked list we are assuming there is no kth node from end.
		return NULL;
	}

	node* slow = head;

	while(fast) {
		slow = slow->next;
		fast = fast->next;
	}

	return slow;

}

int main() {

	node* head = NULL;

	insertAtHead(head, 60);
	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	node* kthNode = kthNodeFromEnd(head, 3);
	kthNode ? cout << "kthNode->val : " << kthNode->val << endl :
	          cout << "invalid k" << endl;

	return 0;
}