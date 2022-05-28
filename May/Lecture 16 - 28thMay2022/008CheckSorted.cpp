#include<iostream>

using namespace std;

bool isSorted(int* arr, int n, int i) {

	// base case
	if(i == n-1) {
		// check if arr[n-1...n-1] is sorted or not
		return true;
	}

	// recursive case

	// check if the arr[i...n-1]

	return arr[i] < arr[i+1] && isSorted(arr, n, i+1);
}

int main() {

	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(int);

	isSorted(arr, n, 0) ? cout << "true" << endl :
	                      cout << "false" << endl;

	return 0;
}