#include<iostream>

using namespace std;

int main() {

	int h[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2};
	int n = sizeof(h) / sizeof(int);

	int lh[100];

	lh[0] = h[0];
	for(int i=1; i<n; i++) {
		lh[i] = max(h[i], lh[i-1]);
	}

	int rh[100];
	rh[n-1] = h[n-1];
	for(int i=n-2; i>=0; i--) {
		rh[i] = max(h[i], rh[i+1]);
	}


	int total = 0;

	for(int i=0; i<n; i++) {
		// compute the maximum level of water that can be
		// trapped on top of the ith bar/building

		// int lh = h[i];
		// for(int j=i-1; j>=0; j--) {
		// 	lh = max(lh, h[j]);
		// }

		// int rh = h[i];
		// for(int j=i+1; j<n; j++) {
		// 	rh = max(rh, h[j]);
		// }

		// total += min(lh, rh) - h[i];

		total += min(lh[i], rh[i]) - h[i];
 
	}

	cout << total << endl;

	return 0;
}