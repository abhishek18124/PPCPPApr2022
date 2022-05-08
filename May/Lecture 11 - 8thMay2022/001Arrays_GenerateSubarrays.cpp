#include<iostream>

using namespace std;

int main() {

	int A[] = {10, 20, 30, 40, 50};
	int n = sizeof(A) / sizeof(int);

	// iterate over the all the possible starting indices
	for(int i=0; i<n; i++) {
		// for each starting index, iterate over all the 
		// possible the ending indices
		for(int j=i; j<n; j++) {
			// to generate the sub-array, iterate over the 
			// array from the ith idx till the jth idx
			for(int k=i; k<=j; k++) {
				cout << A[k] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}