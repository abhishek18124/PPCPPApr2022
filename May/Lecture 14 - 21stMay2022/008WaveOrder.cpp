#include<iostream>

using namespace std;

int main() {

	int A[][3] = {{1, 2, 3},
                  {4, 5, 6},
                  {7, 8, 9}};

    int m = 3; // num. of rows
    int n = 3; // num. of cols

    for(int j=0; j<n; j++) {
    	if(j%2 == 0) {
    		// jth column is even
    		for(int i=0; i<m; i++) {
    			cout << A[i][j] << " ";
    		}
    	} else {
    		// jth column is odd
    		for(int i=m-1; i>=0; i--) {
    			cout << A[i][j] << " ";
    		}
    	}
    }

	return 0;
}