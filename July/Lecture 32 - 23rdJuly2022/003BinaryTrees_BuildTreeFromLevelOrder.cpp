/*

given the level order traversal of a binary tree, design an algorithm to construct a 
binary tree from it.

Example 
	Input: 10 20 30 40 50 -1 60 -1 -1 70 -1 -1 -1 -1 -1
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


node* buildTreeFromLevelOrder() {

	queue<node*> q; // to keep track of nodes whose child nodes are yet to be constructed

	int data;
	cin >> data;

	node* root = new node(data);
	q.push(root);

	while(!q.empty()) {
		node* front = q.front(); q.pop();

		int leftData;
		cin >> leftData;
		if(leftData != -1) {
			node* leftChild = new node(leftData);
			front->left = leftChild;
			q.push(leftChild);
		}

		int rightData;
		cin >> rightData;
		if(rightData != -1) {
			node* rightChild = new node(rightData);
			front->right = rightChild;
			q.push(rightChild);
		}
	}

	return root;

}

void printLevelOrderLineWise(node* root) {

	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		node* front = q.front(); q.pop();
		if(!front) { // front == NULL
			// you've processed the last level
			cout << endl;
			if(!q.empty()) {
				// you've visited the next level
				q.push(NULL);
			}
		} else {
			// process the front node

			cout << front->data << " ";

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



int main() {

	node* root = buildTreeFromLevelOrder();
	printLevelOrderLineWise(root);
	
	return 0;
}