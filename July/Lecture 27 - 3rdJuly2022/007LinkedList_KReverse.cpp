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

node* kReverse(node* head, int k) {

	if(!head) {
		return head;
	}

	// reverse the first k nodes of the given linked list

	node* prev = NULL;
	node* cur = head;

	int i = 0;

	while(cur && i < k) {
		node* temp = cur->next;
		cur->next = prev;
		prev = cur;
		cur = temp;
		i++;
	}

	// ask your friend to k-reverse the remaining sub-list
	node* headFromMyFriend = kReverse(cur, k);
	head->next = headFromMyFriend;
	return prev;

}

int main() {

	node* head = NULL;

	insertAtHead(head, 80);
	insertAtHead(head, 70);
	insertAtHead(head, 60);
	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	int k = 3;

	head = kReverse(head, k);

	printLinkedList(head);

	return 0;
}