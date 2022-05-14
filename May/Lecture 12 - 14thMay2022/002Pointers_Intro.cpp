#include<iostream>

using namespace std;

int main() {

	int x = 10;
	int* xptr;
	xptr = &x;

	cout << x << endl;
	cout << &x << endl;
	cout << xptr << endl;
	cout << sizeof(xptr) << endl;

	char ch = 'A';
	char* chptr = &ch;

	cout << ch << endl;
	cout << &ch << endl;
	cout << chptr << endl;
	cout << sizeof(chptr) << endl;

	int* ptr = (int*)&ch;
	cout << ptr << endl;

	return 0;
}