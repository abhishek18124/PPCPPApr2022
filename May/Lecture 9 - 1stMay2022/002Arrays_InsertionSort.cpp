#include<iostream>

using namespace std;

int main() {

	int A[] = {50, 40, 30, 20, 10};
	int n = sizeof(A)/sizeof(int);

	for(int i=1; i<n; i++) {
		// in the ith pass, place the element at the
		// ith idx (key) to its correct pos. in the sorted
		// part of the array.
		int key = A[i];
		int j = i-1;
		while(j>= 0 && key < A[j]) {
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = key;
	}

	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;

	return 0;
}