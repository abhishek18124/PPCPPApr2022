#include<iostream>

using namespace std;

void greet() {
	cout << "Hello world" << endl;
	return; // optional
}

int main() {

	cout << "inside main : before greet()" << endl;

	greet(); // function invocation/call

	cout << "inside main : after greet()" << endl;

	return 0;
}