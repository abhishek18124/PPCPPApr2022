/*

	Given a BST and a key,  design an algorithm to delete 
	the node with the given key, if present, from the BST.

*/

#include<iostream>
#include<queue>

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

void printLevelOrder(node* root) {
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		node* front = q.front(); q.pop();
		if(front == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}
		} else {
			cout << front->data << " ";
			if(front->left) q.push(front->left);
			if(front->right)q.push(front->right);
		}
	}
}

void printInOrder(node* root) {
	if(root == NULL) {
		return;
	}

	printInOrder(root->left);
	cout << root->data << " ";
	printInOrder(root->right);
}

node* findMaximum(node* root) {
	if(!root) {
		return NULL;
	}

	while(root->right != NULL) {
		root = root->right;
	}

	return root;
}

node* findMinimum(node* root) {
	if(!root) {
		return NULL;
	}

	while(root->left != NULL) {
		root = root->left;
	}

	return root;
}


node* deleteFromBST(node* root, int key) {

	// base case
	if(!root) { // root == NULL
		// key is not present in the BST
		return root;
	}

	// recursive case

	if(key < root->data) {
		// delete 'key', if present, from the leftSubtree -> friend
		root->left = deleteFromBST(root->left, key);
	} else if(key > root->data) {
		// delete 'key', if present, from the rightSubtree -> friend
		root->right = deleteFromBST(root->right, key);
	} else {
		// delete the root node
		if(!root->left and !root->right) { // root->left == NULL and root->right == NULL
			// you've to delete a leaf node
			
			// release the memory allocated for the leaf node which is currently root
			delete root; 
			root = NULL;
		} else if(!root->left and root->right) {
			node* temp = root->right;
			delete root;
			root = temp;
		} else if(root->left and !root->right) {
			node* temp = root->left;
			delete root;
			root = temp;
		} else {
			node* leftMax = findMaximum(root->left);
			swap(leftMax->data, root->data);
			root->left = deleteFromBST(root->left, key);

			// node* rightMin = findMinimum(root->right);
			// swap(rightMin->data, root->data);
			// root->right = deleteFromBST(root->right, key);
		}

	}

	return root;
	
}


int main() {

	node* root = new node(10);
	
	root->left = new node(5);
	root->left->left = new node(3);
	root->left->right= new node(7);
	root->left->right->left = new node(6);
	root->left->right->right= new node(9);
	root->left->right->right->left = new node(8);

	root->right = new node(15);
	root->right->left  = new node(13);
	root->right->right = new node(17);
	root->right->left->left = new node(11);
	root->right->right->left = new node(16);
	root->right->right->right= new node(18);

	printInOrder(root);
	cout << endl;
	printLevelOrder(root);
	cout << endl;

	root = deleteFromBST(root, 6);

	printInOrder(root);
	cout << endl;
	printLevelOrder(root);
	cout << endl;
	
	root = deleteFromBST(root, 5);

	printInOrder(root);
	cout << endl;
	printLevelOrder(root);
	cout << endl;

	root = deleteFromBST(root, 10);

	printInOrder(root);
	cout << endl;
	printLevelOrder(root);
	cout << endl;
	
	
	return 0;
}


