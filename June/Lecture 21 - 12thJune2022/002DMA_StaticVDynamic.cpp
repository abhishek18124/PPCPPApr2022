#include<iostream>

using namespace std;

// int* f1() {
// 	int x = 10;
// 	return &x;
// }

int* f2() {
	int* xptr = new int;
	*xptr = 10;
	return xptr;
}

int main() {

	// int* xptr = f1();]
	// cout << *xptr << endl; // this is an undefined behaviour

	int* xptr = f2();

	delete xptr;

	xptr = NULL;

	return 0;
}