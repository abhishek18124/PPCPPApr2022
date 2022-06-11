/*

N Queens Problem

The problem is to place 'n' queens on an 'n x n' chessboard, so that no two queens are attacking 
each other, this means that no two queens are in the same row, the same column, or the same diagonal.

Example 
	Input : N = 4
	Output: 
			_ Q _ _	     _ _ Q _
	        _ _ _ Q      Q _ _ _ 
	        Q _ _ _      _ _ _ Q
	        _ _ Q _      _ Q _ _ 

	        [1, 3, 0, 2] [2, 0, 3, 1]

Constraint:
	1<=n<=10	        

*/

#include<iostream>

using namespace std;

void placeQueens(int n, int* pos, int r) {

	// base case
	if(r == n) {
		// for(int i=0; i<n; i++) {
		// 	cout << pos[i] << " ";
		// }

		// cout << endl;

		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				if(pos[i] == j) {
					cout << " Q ";
				} else {
					cout << " _ ";
				}
			}
			cout << endl;
		}
		cout << endl;

		return;
	}

	// recursive case

	// 1. place Qr in the jth column (0<=j<n) of row r
	// in a way that it doesn't attack previously 
	// placed queen Qi where 0<=i<r

	for(int j=0; j<n; j++) {

		// can you place Qr in the jth column of row 'r'

		bool canPlace = true;

		for(int i=0; i<r; i++) {
			if(pos[i] == j || pos[i] == j-(r-i) || pos[i] == j+(r-i)) {
				canPlace = false;
				break;
			}
		}

		if(canPlace) {
			pos[r] = j;
			placeQueens(n, pos, r+1);
		}

	}

}

int main() {

	int n = 4;
	int pos[10];

	placeQueens(n, pos, 0);


	return 0;
}