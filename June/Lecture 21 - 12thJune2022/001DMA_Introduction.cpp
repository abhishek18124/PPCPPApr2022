#include<iostream>

using namespace std;

int main() {

	int* ptr = new int;

	*ptr = 10;

	cout << *ptr << endl;

	delete ptr;

	ptr = new int;

	*ptr = 20;

	cout << *ptr << endl;

	delete ptr;

	cout << *ptr << endl; // undefined behaviour
	
	return 0;
}