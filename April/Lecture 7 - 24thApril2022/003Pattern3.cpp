#include<iostream>

using namespace std;

int main() {

	int n = 4;

	for(int i=1; i<=n; i++) {
		// for the ith row, first print (n-i) spaces
		for(int j=1; j<=n-i; j++) {
			cout << " ";
		}

		// followed by (2*i-1) stars
		for(int j=1; j<=2*i-1; j++) {
			cout << "*";
		}

		cout << endl;
	}

	for(int i=1; i<n; i++) {
		// for the ith row, print i spaces 
		for(int j=1; j<=i; j++) {
			cout << " ";
		}

		// followed by 2*(n-i)-1 stars
		for(int j=1; j<=2*(n-i)-1; j++) {
			cout << "*";
		}

		cout << endl;
	}



	return 0;
}