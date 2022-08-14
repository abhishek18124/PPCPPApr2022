/*

Given an array of non-negative integers, find the maximum subarray XOR.

Example: 
	Input : x[] = {25, 10, 2, 8, 5, 3} 
	Output: 

*/

#include<iostream>
#include<climits>

using namespace std;

class node {
public:
	
	node* left;  // indicates if node has a child that represents bit 0
	node* right; // indicates if node has a child that represents bit 1
	
	node() {
		this->left = NULL;
		this->right= NULL;
	}
};

class trie {
	
	node* root;

public:
	
	trie() {
		root = new node();
	}

	void insert(int n) {
		node* temp = root;
		for(int i=31; i>=0; i--) {
			int bit = (1<<i)&n;
			if(!bit) {
				// ith bit of n is 0, check if temp node has a left child or not
				if(!temp->left) {
					node* n = new node();
					temp->left = n;
				}
				temp = temp->left;
			} else {
				// ith bit of n is 1, check if temp node has a right child or not
				if(!temp->right) {
					node* n = new node();
					temp->right = n;
				}
				temp = temp->right;
			}
		}
	}

	int helper(int n) {
		node* cur = root;
		int y = 0;
		int XOR = 0;
		for(int i=31; i>=0; i--) {
			int ith_bit = (n>>i)&1;
			if(ith_bit == 0) {
				// ith_bit is not set
				if(cur->right != NULL) {
					XOR += (1<<i);
					y += (1<<i);
					cur = cur->right;
				} else {
					cur = cur->left;
				}

			} else {
				// ith_bit is set
				if(cur->left != NULL) {
					XOR += (1<<i);
					cur = cur->left;
				} else {
					cur = cur->right;
					y += (1<<i);
				}
			}
		}

		// cout << n << "^" << (n^XOR) << " : " << XOR << endl;

		return XOR;
	}

	int maximumXOR(int* x, int n) {
		int out = 0;
		for(int i=0; i<n; i++) {
			out = max(out, helper(x[i]));
		}
		return out;
	}

};

int main() {

	// n<=9

	int arr[] = {25, 10, 2, 8, 5, 3};
	int n = sizeof(arr) / sizeof(int);

	// cout << (((((25^10)^2)^8)^5)^3) << endl;

	// int max_xor = 0;
	// int s_idx;
	// int e_idx;
	// for(int i=0; i<n-1; i++) {
	// 	for(int j=i; j<n; j++) {
	// 		// find the xor of arr[i..j]
	// 		int ans = 0;
	// 		for(int k=i; k<=j; k++) {
	// 			ans ^= arr[k];
	// 		}
	// 		if(ans > max_xor) {
	// 			max_xor = ans;
	// 			s_idx = i;
	// 			e_idx = j;
	// 		}
	// 	}
	// }

	// cout << s_idx << " " << e_idx << " " << max_xor << endl;

	int cxor_arr[10];
	cxor_arr[0] = 0;
	for(int i=1; i<=n; i++) {
		cxor_arr[i] = cxor_arr[i-1]^arr[i-1];
	}

	// for(int i=0; i<=n; i++) {
	// 	cout << cxor_arr[i] << " ";
	// }
	// cout << endl;

	trie t;

	for(int i=0; i<=n; i++) {
		t.insert(cxor_arr[i]);
	}

	cout << t.maximumXOR(cxor_arr, n) << endl;
  
	return 0;
}