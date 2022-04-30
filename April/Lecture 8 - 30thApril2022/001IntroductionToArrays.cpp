#include<iostream>

using namespace std;

int main() {

	int A[5];

	cout << sizeof(A) << "B" << endl;

	int n = sizeof(A) / sizeof(int);

	cout << n << endl;

	int B[5] = {10, 20, 30, 40, 50};

	// cout << B[0] << endl;
	// cout << B[1] << endl;

	int C[5] = {10, 20, 30};

	cout << C[0] << endl;
	cout << C[1] << endl;
	cout << C[2] << endl;
	cout << C[3] << endl;
	cout << C[4] << endl;

	// cout << C[6] << endl;

	

	return 0;
}