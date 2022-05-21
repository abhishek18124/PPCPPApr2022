#include<iostream>

using namespace std;

void print2DArray(int A[][4], int m, int n) {
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {

	int B[] = {1, 2, 3};

	int A[][4] = {{10, 20, 30, 40}, 
                   {50},
                   {90, 100}};

    int m = 3; // num. of rows
    int n = 4; // num. of cols

    // for(int i=0; i<m; i++) {
    // 	for(int j=0; j<n; j++) {
    // 		cout << A[i][j] << " ";
    // 	}
    // 	cout << endl;
    // }

    print2DArray(A, m, n);

	return 0;
}