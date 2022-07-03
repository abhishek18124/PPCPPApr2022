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

bool isCyclePresent(node* head) {

	node* slow = head;
	node* fast = head;

	while(fast && fast->next) {
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast) {
			return true;
		}
	}

	return false;

}

void removeCycle(node* head) {


	// 1. find the meeting point
	node* prev = NULL;
	node* slow = head;
	node* fast = head;

	while(true) {
		prev = slow;
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast) {
			break;
		}
	}

	// at this point, slow and fast are at the meeting point

	fast = head;
	while(fast != slow) {
		prev = prev->next;
		slow = slow->next;
		fast = fast->next;
	}

	// at this point, slow and fast are at the intersection point
	// and prev is at the tail node of the linked list

	prev->next = NULL;

}

int main() {

	node* head = new node(10);
	head->next = new node(20);
	head->next->next = new node(30);
	head->next->next->next = new node(40);
	head->next->next->next->next = new node(50);
	head->next->next->next->next->next = new node(60);
	head->next->next->next->next->next->next = new node(70);
	head->next->next->next->next->next->next->next = new node(80);
	head->next->next->next->next->next->next->next->next = head->next->next->next;

	// isCyclePresent(head) ? cout << "cycle is present!" << endl :
	//                        cout << "cycle is not present!" << endl;

	if(isCyclePresent(head)) {
		cout << "Cycle found!" << endl;
		// removeCycle(head);
		printLinkedList(head);
	} else {
		cout << "Cycle not found!" << endl;
		printLinkedList(head);
	}

	return 0;
}