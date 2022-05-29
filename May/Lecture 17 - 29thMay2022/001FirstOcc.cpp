#include<iostream>

using namespace std;

int search(int* arr, int n, int t, int i) {

	// base case
	
	if(i == n) {
		// return the idx. of the first occ.f
		// of the 't' in arr[n...n-1]
		return -1;
	}

	// if(i == n-1) {
	// 	if(arr[i] == t) {
	// 		return i;
	// 	} else {
	// 		return -1;
	// 	}
	// }

	// recursive case

	if(arr[i] == t) {
		// you've found the target at the ith idx
		return i;
	}

	// ask your friend to find the idx. of the 
	// first occ. of the 't' in arr[i+1...n-1]

	return search(arr, n, t, i+1);

}

int main() {

	int arr[] = {1,  0, 3, 2, 4};
	int n = sizeof(arr) / sizeof(int);
	int t = 3;

	cout << search(arr, n, t, 0) << endl;

	return 0;
}