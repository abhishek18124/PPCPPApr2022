
/*
given the pre-order traversal of a binary tree, check if it is height balanced or not

Example 
	Input : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
	Output: true

	Input : 10 20 40 -1 -1 50 -1 -1 30 60 -1 -1 70 -1 -1
	Output: true

	Input : 10 20 30 -1 -1 -1 -1
	Output: false

*/

#include<iostream>
#include<cmath>

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

int computeHeight(node* root) {

	// base case
	if(!root) { // root == NULL
		// height of empty tree is -1
		return -1;
	}

	// recursive case

	// 1. ask your friend for the height of the leftSubtree
	int X = computeHeight(root->left);

	// 2. ask your friend for the height of the rightSubtree
	int Y = computeHeight(root->right);

	return 1 + max(X, Y);

}

bool checkHeightBalanced(node* root) {

	// base case
	if(!root) { // root == NULL
		// empty tree is height balanced
		return true;
	}

	// recursive case

	// 1. ask your friend to check if the leftSubtree is heightBalanced
	bool X = checkHeightBalanced(root->left);

	// 2. ask your friend to check if the rightSubtree is heightBalanced
	bool Y = checkHeightBalanced(root->right);

	// 3. check if the root node is heightBalanced
	bool Z = abs(computeHeight(root->left) - computeHeight(root->right)) <= 1 ? true : false;

	return X && Y && Z;

}

class Pair {

	public :

		bool isHeightBalanced;
		int height;
};

Pair checkHeightBalancedEfficient(node* root) {

	Pair p;
	
	// base case
	if(!root) { // tree is empty
		p.height = -1;
		p.isHeightBalanced = true;
		return p;
	}

	// recursive case

	// 1. ask your friend to check if the leftSubtree is heightBalanced and also ask him/her height of the leftSubtree
	Pair pL = checkHeightBalancedEfficient(root->left);

	// 2. ask your friend to check if the rightSubtree is heightBalanced and also ask him/her height of the rigthSubtree
	Pair pR = checkHeightBalancedEfficient(root->right);

	// 3. check if the root node is heightBalanced or not
	bool Z = abs(pL.height - pR.height) <= 1 ? true : false;

	p.isHeightBalanced = pL.isHeightBalanced && pR.isHeightBalanced && Z;
	p.height = 1 + max(pL.height, pR.height);

	return p;

}

int main() {

	node* root = buildTree();

	// checkHeightBalanced(root) ? cout << "height-balanced!" << endl :
	//                             cout << "not height-balanced" << endl;

	checkHeightBalancedEfficient(root).isHeightBalanced ? cout << "height-balanced!" << endl :
                                                          cout << "not height-balanced" << endl;


	return 0;
}