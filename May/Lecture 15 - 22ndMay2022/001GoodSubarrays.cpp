#include<iostream>

using namespace std;

int main() {

	int A[] = {1, 6, 5, 2, 4, 3};
	int n = sizeof(A) / sizeof(int);

	int freq[100] = {0};
	freq[0] = 1;

	int cs = 0; // to track cumulative sum

	for(int i=0; i<n; i++) {
		cs += A[i];
		freq[(cs%n+n)%n]++;
	}

	int total = 0; // to track total no. of good subarrays
	for(int i=0; i<n; i++) {
		int x = freq[i];
		if(x > 1) {
			total += x * (x-1) / 2;
		}
	}

	cout << total << endl;



	return 0;
}