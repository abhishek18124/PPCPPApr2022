#include<iostream>

using namespace std;

int main() {

	int A[] = {10, 20, 30, 40, 50};

	cout << A[0] << " " << *A << endl;
	cout << A[1] << " " << *(A+1) << endl;
	cout << A[2] << " " << *(A+2) << endl;
	cout << A[3] << " " << *(A+3) << endl;
	cout << A[4] << " " << *(A+4) << endl;

	cout << endl;

	cout << &A[0] << " " << A << endl;
	cout << &A[1] << " " << A+1 << endl;
	cout << &A[2] << " " << A+2 << endl;
	cout << &A[3] << " " << A+3 << endl;
	cout << &A[4] << " " << A+4 << endl;

}