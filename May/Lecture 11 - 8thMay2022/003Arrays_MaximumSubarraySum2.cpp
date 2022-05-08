#include<iostream>
#include<climits>
using namespace std;

int main() {

	int A[10];
	int n;

	cout << "Enter the value of n : ";
	cin >> n;

	for(int i=0; i<n; i++) {
		cin >> A[i];
	}

	int csum[11];

	csum[0] = 0;
	for(int i=1; i<=n; i++) {
		csum[i] =  csum[i-1] + A[i-1];
	}

	// for(int i=0; i<=n; i++) {
	// 	cout << csum[i] << " ";
	// }

	// cout << endl;

	int mss = INT_MIN;
	for(int i=0; i<n; i++) {
		for(int j=i; j<n; j++) {
			// cout << i << " " << j << endl;
			int sum = csum[j+1]-csum[i];
			if(sum > mss) {
				mss = sum;
			}
		}
	}

	cout << "Maximum Subarray Sum : " << mss;


	return 0;
}