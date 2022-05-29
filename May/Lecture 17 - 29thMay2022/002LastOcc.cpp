#include<iostream>

using namespace std;

int search(int* arr, int t, int i) {

	// base case
	if(i == -1) {
		// return the idx. of the last occ. of the 't'
		// in arr[0...-1]
		return -1;
	}
	
	// recursive case

	if(arr[i] == t) {
		// you've found the target at the ith idx
		return i;
	}

	// ask your friend to find the idx of the last
	// occ. of the target in the arr[0...i-1]

	return search(arr, t, i-1);

}

int main() {

	int arr[] = {1,  0, 0, 3, 2, 3, 4};
	int n = sizeof(arr) / sizeof(int);
	int t = 10;

	cout << search(arr, t, n-1) << endl;

	return 0;
}