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

	// int X[10];

	// X[0] = A[0];
	// int mss = X[0];

	// for(int i=1; i<n; i++) {
	// 	X[i] = max(X[i-1]+A[i], A[i]);
	// 	if(X[i] > mss) {
	// 		mss = X[i];
	// 	}
	// }

	int X = A[0];
	int mss = X;

	for(int i=1; i<n; i++) {
		X = max(X+A[i], A[i]);
		if(X > mss) {
			mss = X;
		}
	}

	cout << mss << endl;

	// for(int i=0; i<n; i++) {
	// 	cout << X[i] <<  " ";
	// }

	// cout << endl;


	return 0;
}