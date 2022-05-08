#include<iostream>
#include<climits>
using namespace std;

int main() {

	int A[] = {10, -3, 12, 7, -20};
	int n = sizeof(A) / sizeof(int);

	int mss = INT_MIN; // maximum subarray sum so far

	// iterate over the all the possible starting indices
	for(int i=0; i<n; i++) {
		// for each starting index, iterate over all the 
		// possible the ending indices
		for(int j=i; j<n; j++) {
			int sum = 0;
			for(int k=i; k<=j; k++) {
				sum += A[k];
			}
			if(sum > mss) {
				mss = sum;
			}
		}
	}

	cout << "Maximum Subarray Sum  : " << mss << endl;

	return 0;
}