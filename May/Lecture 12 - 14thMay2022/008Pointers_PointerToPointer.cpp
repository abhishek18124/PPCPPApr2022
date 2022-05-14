#include<iostream>

using namespace std;

int main() {

	int x = 10;

	int* xptr = &x;
	int** xxptr = &xptr;
	int*** xxxptr = &xxptr;

	int* yptr = &x;

	cout << x << endl;
	cout << *xptr << endl;
	cout << *yptr << endl;
	cout << **xxptr << endl;
	cout << ***xxxptr << endl;
}

