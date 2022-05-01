#include<iostream>

using namespace std;

int main() {

	int A[] = {10, 20, 30, 40, 50};
	int n = sizeof(A)/sizeof(int);
	int count = 0;

	for(int i=1; i<n; i++) {
		// in the ith pass place the largest element in the
		// unsorted part of the array to its correct position.
		bool flag = false; // assume no swaps are performed in the ith pass 
		for(int j=0; j<n-i; j++) {
			count++;
			if(A[j] > A[j+1]) {
				swap(A[j], A[j+1]);
				flag = true;
			}
		}
		if(!flag) { // flag == false
			break;
		}
	}

	cout << count << endl;
 
	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;

	return 0;
}