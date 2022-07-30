/*

	Given an array of n integers, sort the array using heap sort algorithm.

*/

#include<iostream>
#include<vector>

using namespace std;

void heapify(int i, vector<int>& v, int heapsize) {

	int minIdx = i;

	int leftIdx = 2*i + 1;
	if(leftIdx < heapsize and v[leftIdx] > v[minIdx]) {
		minIdx = leftIdx;
	}

	int rightIdx = 2*i + 2;
	if(rightIdx < heapsize and v[rightIdx] > v[minIdx]) {
		minIdx = rightIdx;
	}

	if(minIdx != i) {
		swap(v[i], v[minIdx]);
		heapify(minIdx, v, heapsize);
	}
}

int main() {
	
	vector<int> v = {1, 3, 2, 7, 5, 4, 6, 9, 8};

	int n = v.size();

	for(int i=v.size()-1; i>=0; i--) {
		heapify(i, v, n);
	}

	int heapsize = n;

	while(heapsize > 1) {
		swap(v[0], v[heapsize-1]);
		heapsize--;
		heapify(0, v, heapsize);
	}

	for(int i=0; i<v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;
	
	return 0;
}
