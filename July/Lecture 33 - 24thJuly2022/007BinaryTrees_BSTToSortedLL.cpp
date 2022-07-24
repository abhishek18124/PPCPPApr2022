/*

	Given a BST, design an algorithm transform it into a sorted linked list in-place.

*/

#include<iostream>

using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;

	node(int data) {
		this->data = data;
		this->left = this->right = NULL;
	}
};

void printLinkedList(node* head) {
	while(head != NULL) {
		cout << head->data;
		head = head->right;
		if(head) cout << "->";
	}

	cout << endl;
}

class Pair {
	public :
		node* head;
		node* tail;
};

Pair convert(node* root) {
	Pair p;

	// base case
	if(!root) {
		p.head = NULL;
		p.tail = NULL;
		return p;
	}

	// recursive case

	// 1. ask your friend to convert the leftSubtree into a sorted linked list
	Pair pL = convert(root->left);

	if(pL.head) { // pL.head != NULL
		// 2. connect the tail of the left linked list to the root node
		pL.tail->right = root;
		p.head = pL.head;
	} else {
		p.head = root;
	}

	// 3. ask your friend to convert the rightSubtree into a sorted linked list
	Pair pR = convert(root->right);

	if(pR.head) { // pR.head != NULL
		// 4. connect the root node with the head of the right linked list
		root->right = pR.head;
		p.tail = pR.tail;
	} else {
		p.tail = root;
	}

	return p;

}

int main() {

	node* root = new node(10);
	
	root->left = new node(5);
	root->left->left  = new node(3);
	root->left->right = new node(7);

	root->right = new node(15);
	root->right->left  = new node(13);
	root->right->right = new node(17);

	Pair p = convert(root);

	printLinkedList(p.head);

	return 0;
}






