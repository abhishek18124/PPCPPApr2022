#include<iostream>

using namespace std;

int sumOfArray(int* A, int n) { //  int A[]
	cout << sizeof(A) << endl;
	int sum = 0;
	for(int i=0; i<n; i++) {
		sum += A[i]; // *(A+i);
	}
	return sum;
}

int main() {

	int A[] = {1, 2, 3, 4, 5};
	int n = sizeof(A) / sizeof(int);
	cout << sizeof(A) << endl;

	cout << sumOfArray(A, n) << endl; // sumOfArray(&A[0], n)

	return 0;
}