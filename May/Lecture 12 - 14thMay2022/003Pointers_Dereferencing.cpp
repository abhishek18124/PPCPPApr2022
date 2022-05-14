#include<iostream>

using namespace std;

int main() {

	int x = 516;
	int* xptr = &x;
	cout << x << endl;
	cout << *xptr << endl;

	char* chptr = (char*)&x;
	cout << (int)*chptr << endl;

	double* dptr = (double*)&x;
	cout << (double)*dptr << endl;

	return 0;
}