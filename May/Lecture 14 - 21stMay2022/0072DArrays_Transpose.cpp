#include<iostream>

using namespace std;

void transpose(int A[][100], int m, int n) {
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			if(i < j) {
				swap(A[i][j], A[j][i]);
			}
		}
	}
}

int main() {

	int A[100][100];

	int m;
	cout << "Enter no. of rows : " ;
	cin >> m;

	int n;
	cout << "Enter no. of columns : ";
	cin >> n;

	// read data row-wise

	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			cin >> A[i][j]; 
		}
	}

	cout << endl;

	transpose(A, m, n);

	// print tranposed matrix
	
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

	return 0;
}