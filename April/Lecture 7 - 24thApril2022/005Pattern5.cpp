#include<iostream>

using namespace std;

int main() {

	int n = 5;

	// part 1
	for(int i=1; i<=2*n-1; i++) {
		cout << "*";
	}

	cout << endl;

	// part 2
	for(int i=1; i<n; i++) {
		// print (n-i) stars
		for(int j=1; j<=n-i; j++) {
			cout << "*";
		}
		// print (2i-1) spaces
		for(int j=1; j<=2*i-1; j++) {
			cout << " ";
		}
		// print (n-i) stars
		for(int j=1; j<=n-i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	// part 3
	for(int i=2; i<n; i++) {
		// print i stars
		for(int j=1; j<=i; j++) {
			cout << "*";
		}

		// print 2*(n-i)-1 spaces
		for(int j=1; j<=2*(n-i)-1; j++) {
			cout << " ";
		}

		// print i stars
		for(int j=1; j<=i; j++) {
			cout << "*";
		}

		cout << endl;
	}

	// part 4
	for(int i=1; i<=2*n-1; i++) {
		cout << "*";
	}

	return 0;
}