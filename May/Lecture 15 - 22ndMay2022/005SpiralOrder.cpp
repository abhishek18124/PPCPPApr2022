#include<iostream>

using namespace std;

int main() {

	int A[][4] = {{1, 2, 3, 4},
                  {5, 6, 7, 8},
                  {9, 10, 11, 12}};

    int m = 3; // num. of rows
    int n = 4; // num. of cols

    int sr = 0;
    int er = m-1;
    int sc = 0;
    int ec = n-1;

    while(sr <= er and sc <= ec) {

    	// print the sr
    	for(int j=sc; j<=ec; j++) {
    		cout << A[sr][j] << " ";
    	}

    	sr++;

    	// print the ec
    	for(int i=sr; i<=er; i++) {
    		cout << A[i][ec] << " "; 
    	}

    	ec--;

    	// print the er

    	if(sr <= er) {
	    	for(int j=ec; j>=sc; j--) {
	    		cout << A[er][j] << " ";
	    	}

	    	er--;
	    }

    	// print the sc
    	if(sc <= ec) {
	    	for(int i=er; i>=sr; i--) {
	    		cout << A[i][sc] << " ";
	    	}

	    	sc++;
	    }

    }



	return 0;
}


