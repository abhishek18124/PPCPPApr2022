#include<iostream>

using namespace std;

int* resize(int* A, int capacity) {
	cout << "Resizing array from " << capacity*sizeof(int) << "B"
	     << " to " << capacity*sizeof(int)*2 << "B" << endl;
	int* B = new int[2*capacity];
	for(int i=0; i<capacity; i++) {
		B[i] = A[i];
	}
	delete [] A;
	return B;

}

int main() {

	int capacity = 1;
	int i = 0; // size
	int* A = new int[capacity];

	int data;
	cin >> data;

	while(data != -1) {
		A[i] = data;
		i++;
		if(i == capacity) {
			// resize
			A = resize(A, capacity);
			capacity = capacity*2;
		}
		cin >> data;
	}

	for(int j=0; j<i; j++) {
		cout << A[j] << " ";
	}

	cout << endl;

	return 0;
}