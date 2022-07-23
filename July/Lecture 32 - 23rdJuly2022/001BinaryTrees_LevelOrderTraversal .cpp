/*

given the pre-order traversal of a binary tree, output its level-order traversal.

Example 
	Input : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
	Output: 10 20 30 40 50 60 70

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

void printLevelOrder(node* root) {

	queue<node*> q; // to keep track of nodes which have been visited but not yet processed
	q.push(root);

	while(!q.empty()) {
		node* front = q.front();
		q.pop();

		// process the front node
		cout << front->data << " ";

		// visit the children of the front node
		
		if(front->left) { // front->left != NULL
			q.push(front->left);
		}

		if(front->right) { // front->right != NULL
			q.push(front->right);
		}
	}

	cout << endl;

}

int main() {

	node* root = buildTree();
	printLevelOrder(root);

	return 0;
}

