/*

given the pre-order traversal of a binary tree, output its right view.

Example 
	Input : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
	Output: 10 30 60 70
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

node* buildTree() {

	int data;
	cin >> data;

	// base case

	if(data == -1) {
		// construct an empty tree and return pointer to its root node
		return NULL;
	}

	// recursive case

	// 1. construct the root data using the first value of the given preOrder traversal

	node* root = new node(data);

	// 2. ask your friend to construct the leftSubtree from the preOrder traversal of the leftSubtree

	root->left = buildTree();

	// 3. ask your friend to construct the rightSubtree from the preOrder traversal of the rightSubtree

	root->right = buildTree();
	
	return root;

}

void printRightView(node* root) {

	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		node* front = q.front(); q.pop();
		if(!front) { // front == NULL
			// you've processed the last level
			if(!q.empty()) {
				// you've visited the next level
				q.push(NULL);
			}
		} else {
			// process the front node

			if(q.front() == NULL) {
				// front node is the right-most node of the given level
				cout << front->data << " ";
			}
			// visit the children of the front node

			if(front->left) {
				q.push(front->left);
			}

			if(front->right) {
				q.push(front->right);
			}
		}
	}

}

int max_level = -1;

void printRightViewRecursive(node* root, int level) {

	// base case
	if(!root) {
		return;
	}

	// recurisve case

	if(max_level < level) {
		cout << root->data << " ";
		max_level = level;
	}
	
	printRightViewRecursive(root->right, level+1);
	printRightViewRecursive(root->left, level+1);
}



int main() {

	node* root = buildTree();

	// printRightView(root);
	printRightViewRecursive(root, 0);

	return 0;
}