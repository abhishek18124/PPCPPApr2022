/*

	Given a binary tree, design an algorithm to check if is a BST or not.

*/

#include<iostream>
#include<climits>
#define ll long long int

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

bool checkBST(node* root, ll lb, ll ub) {
	
	// base case
	if(!root) return true;
	
	// recursive case

	return root->data > lb and root->data < ub && 
	       checkBST(root->left, lb, root->data) && 
	       checkBST(root->right, root->data, ub);

}


int main() {

	node* root = new node(10);
	
	root->left = new node(5);
	root->left->left  = new node(3);
	root->left->right = new node(7);

	root->right = new node(15);
	root->right->left  = new node(13);
	root->right->right = new node(17);
	
	ll lb = (ll)INT_MIN-1;
	ll ub = (ll)INT_MAX+1;

	checkBST(root, lb, ub) ? cout << "true" << endl : 
	                         cout << "false" << endl;

	return 0;
}



