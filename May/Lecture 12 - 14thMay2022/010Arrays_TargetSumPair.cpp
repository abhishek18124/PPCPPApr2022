#include<iostream>

using namespace std;

int countPairs(int* A, int n, int t) {

	int count = 0;
	for(int i=0; i<n-1; i++)  {
		for(int j=i+1; j<n; j++) {
			if(A[i]+A[j] == t) {
				count++;
			}
		}
	}

	return count;

}

int main() {

	int A[] = {3, 2, 1, 5, 4, 0};
	int n = sizeof(A) / sizeof(int);
	int t = 6;

	cout << countPairs(A, n, t) << endl;

	return 0;
}