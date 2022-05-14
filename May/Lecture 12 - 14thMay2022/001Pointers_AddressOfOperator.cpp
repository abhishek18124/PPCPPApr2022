#include<iostream>

using namespace std;

int main() {

	int x = 10;

	cout << &x << endl;
	cout << sizeof(&x) << endl;

	double y = 10.0;

	cout << &y << endl;
	cout << sizeof(&y) << endl;

	char ch = 'A';

	cout << &ch << endl;
	cout << sizeof(&ch) << endl;

	return 0;

}



