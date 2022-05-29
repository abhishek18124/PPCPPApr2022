#include<iostream>

using namespace std;

void merge(int* arr, int s, int m, int e) {

	int i = s;
	int j = m+1;

	int brr[100]; // assume num. of elements cannot exceed 100
	int k = s;

	while(i <= m and j <= e) {

		if(arr[i] < arr[j]) {
			brr[k] = arr[i];
			i++;
			k++;
		} else {
			brr[k] = arr[j];
			j++;
			k++;
		}

	}

	while(i <= m) {
		brr[k] = arr[i];
		i++;
		k++;
	}

	while(j <= e) {
		brr[k] = arr[j];
		j++;
		k++;
	}

	// copy contents of brr into arr

	for(int l=s; l<=e; l++) {
		arr[l] = brr[l];
	}

}

void mergeSort(int* arr, int s, int e) {

	// base case

	if(s == e) {
		// arr has a single element therefore it is sorted
		return;
	}

	// 1. divide the arr into two sub-array around the midPoint
	int m = s + (e-s)/2;

	// 2. sort the subarrays arr[s...m] and arr[m+1...e]

	mergeSort(arr, s, m);
	mergeSort(arr, m+1, e);

	// 3. merge the two sorted subarrays arr[s...m] and arr[m+1...e]
	merge(arr, s, m, e);

}

int main() {

	int arr[] = {20, 30, 10, 0, 60, 50, 40};
	int n = sizeof(arr) / sizeof(int);

	mergeSort(arr, 0, n-1);
	
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}