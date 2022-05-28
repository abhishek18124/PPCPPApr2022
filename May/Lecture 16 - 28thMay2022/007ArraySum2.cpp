#include<iostream>

using namespace std;

int f(int* arr, int i) {

	// base case
	if(i == 0) {
		return arr[0];
	}

	// if(i == -1) {
	// 	return 0;
	// }
	

	// recursive case

	// ask your friend to compute the sum of elements
	// in the sub-array that ends at the (i-1)th index
	int A = f(arr, i-1);

	return arr[i] + A;

}

int main() {

	int arr[] = {10, -2, 3, 0, 1, 20};
	int n = sizeof(arr) / sizeof(int);

	cout << f(arr, n-1) << endl;

	return 0;
}