/*

	Given an array of n integers, design a O(n) algorirthm to build a max_heap in-place.

*/

#include<iostream>
#include<vector>

using namespace std;

void heapify(int i, vector<int>& v) {

		int minIdx = i;

		int leftIdx = 2*i + 1;
		if(leftIdx < v.size() and v[leftIdx] < v[minIdx]) {
			minIdx = leftIdx;
		}

		int rightIdx = 2*i + 2;
		if(rightIdx < v.size() and v[rightIdx] < v[minIdx]) {
			minIdx = rightIdx;
		}

		if(minIdx != i) {
			swap(v[i], v[minIdx]);
			heapify(minIdx, v);
		}
	}


int main() {

	vector<int> v = {1, 3, 2, 7, 5, 4, 6, 9, 8};
	
	// O(n)
	
	for(int i=v.size()-1; i>=0; i--) {
		heapify(i, v);
	}

	for(int i=0; i<v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	return 0;
}





