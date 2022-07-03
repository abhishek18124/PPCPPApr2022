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


bool isPalindrome(node* head) {

	// 1. divide the linked list around the midPoint
	node* midPoint = getMidPoint(head);
	node* head2 = midPoint->next;
	midPoint->next = NULL;

	// 2. reverse the 2nd linked list
	head2 = reverse(head2);

	// 3. compare the two linked list
	while(head2) {
		if(head->val != head2->val) {
			return false;
		}
		head = head->next;
		head2 = head2->next;
	}

	return true;


}

int main() {

	node* head = NULL;

	insertAtHead(head, 10);
	insertAtHead(head, 20);
	insertAtHead(head, 30);
	insertAtHead(head, 40);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	isPalindrome(head) ? cout << "true" << endl :
	                     cout << "false" << endl;

	return 0;
}