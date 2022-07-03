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
	node* fast = head->next;

	while(fast && fast->next) { // fast != NULL && fast->next != NULL
		slow = slow->next;
		fast = fast->next->next;
	}

	return slow;

}

node* merge(node* head1, node* head2) {

	// base case
	if(!head1) { // head1 == NULL
		return head2;
	}

	if(!head2) { // head2 == NULL
		return head1;
	}


	// recursive case

	node* head;

	if(head1->val < head2->val) {
		head = head1;
		node* headFromMyFriend = merge(head1->next, head2);
		head->next = headFromMyFriend;
		return head;
	} else {
		head = head2;
		node* headFromMyFriend = merge(head1, head2->next);
		head->next = headFromMyFriend;
		return head;
	}

}

node* mergeSort(node* head) {

	// base case
	
	if(!head || !head->next) { // head == NULL || head->next == NULL
		return head;
	}

	node* head1 = head;

	// 1. divide the linked list around the midPoint
	node* midPoint = getMidPoint(head);
	node* head2 = midPoint->next;
	midPoint->next = NULL;

	// 2. recursively sort the two sub-lists
	head1 = mergeSort(head1);
	head2 = mergeSort(head2);

	// 3. merge the two sorted sub-lists such that the merged list is also sorted
	head = merge(head1, head2);
	return head;

}


int main() {

	node* head = NULL;

	insertAtHead(head, 10);
	insertAtHead(head, 20);
	insertAtHead(head, 30);
	insertAtHead(head, 40);
	insertAtHead(head, 50);

	printLinkedList(head);

	head = mergeSort(head);

	printLinkedList(head);

	return 0;
}