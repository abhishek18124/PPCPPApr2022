#include<iostream>

using namespace std;

int binarySearch(int* arr, int t, int s, int e) {

	// base case
	if(s > e) {
		// you're searching for the target in an
		// empty search space
		return -1;
	}

	// recursive case

	int m = s + (e-s)/2;
	if(arr[m] == t) {
		// you've found the target at index 'm'
		return m;
	} else if(arr[m] > t) {
		// reduce the search space from [s, e]
		// to [s, m-1] and ask your friend to 
		// search for the target in that search space
		return binarySearch(arr, t, s, m-1);
	} else {
		// reduce the search space from [s, e]
		// to [m+1, e] and ask your friend to 
		// search for the target in that search space
		return binarySearch(arr, t, m+1, e); 
	}

}

int main() {

	int arr[] = {10, 20, 30, 40, 50, 60};
	int n = sizeof(arr) / sizeof(int);
	int t = 100;

	cout << binarySearch(arr, t, 0, n-1) << endl;

	return 0;
}