#include<iostream>

using namespace std;

int& f() {
	int* xptr = new   int;
	*xptr = 100;
	return *xptr;
}

int main() {

	f() = 10;
	
	return 0;
}