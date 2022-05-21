#include<iostream>

using namespace std;

int main() {

	int A[3][4];

	int m = 3; // num. of rows
	int n = 4; // num. of cols

	// reading the data row-wise

	for(int i=0; i<m; i++) {
		// read the data in the ith row
		for(int j=0; j<n; j++) {
			// read the data into the jth coln. of the ith row
			cin >> A[i][j];
		}
	}

	// // printing the data row-wise

	// for(int i=0; i<m; i++) {
	// 	// print the data of the ith row
	// 	for(int j=0; j<n; j++) {
	// 		// print the data of the jth column in the ith row
	// 		cout << A[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	// cout << endl;

	// printing the data column-wise

	for(int j=0; j<n; j++) {
		// print the data of the jth column
		for(int i=0; i<m; i++) {
			// print the data of the ith row in the jth column
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

	return 0;
}