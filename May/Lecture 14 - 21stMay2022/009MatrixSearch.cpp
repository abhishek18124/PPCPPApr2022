#include<iostream>

using namespace std;

pair<int, int> search(int A[][3], int m, int n, int t) {

	// pair<int, int> p = {-1, -1}; // or make_pair(-1, -1)

	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			if(A[i][j] == t) {
				// target has been found
				
				// cout << t << " found at (" << i << " " << j << ")" << endl;
					
				// p.first = i;
				// p.second = j;

				// return p;

				return {i, j};
			}
		}
	}

	// return p;
	return {-1, -1};

}

int main() {

	// int A[][3] = {{3, 2, 1},
 //                  {4, 5, 6},
 //                  {9, 8, 7}};

 //    int t = 18;

 //    int m = 3;
 //    int n = 3;

 //    pair<int, int> p = search(A, m, n, t);

 //    cout << p.first << " " << p.second << endl;

	pair<int, int> p = {1, 2};

	cout << p << endl;

	return 0;
}