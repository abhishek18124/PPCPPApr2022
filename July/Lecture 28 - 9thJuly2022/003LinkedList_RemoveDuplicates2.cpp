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

node* removeDuplicates(node* head) {

	// base case

	if(!head || !head->next) { // head == NULL or head->next == NULL
		return head;
	}


	// recursive case

	if(head->val != head->next->val) {

		// head node is part of the o/p linked list

		// ask your friend to remove all the duplicates
		// from the linked list that starts from head->next

		node* headFromMyFriend = removeDuplicates(head->next);
		head->next = headFromMyFriend;
		return head;

	} else {

		// head node is a duplicate node

		while(head->next and head->val == head->next->val) {
			head = head->next;
		}

		//ask your friend to remove duplicates from the linked
		// list that starts from head->next

		node* headFromMyFriend = removeDuplicates(head->next);
		return headFromMyFriend;
	}

}

int main() {

	node* head = NULL;

	insertAtHead(head, 5);
	insertAtHead(head, 4);
	insertAtHead(head, 4);
	insertAtHead(head, 3);
	insertAtHead(head, 2);
	insertAtHead(head, 2);
	insertAtHead(head, 1);
	
	printLinkedList(head);

	head = removeDuplicates(head);

	printLinkedList(head);

	return 0;
}