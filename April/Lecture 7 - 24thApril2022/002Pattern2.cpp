#include<iostream>

using namespace std;

int main() {

	int n = 5;

	for(int i=1; i<=n; i++) {
		// for the ith, we have to print (n-i+1)
		// characters in the increasing order
		// starting with 'A'
		char ch = 'A';
		for(int j=1; j<=n-i+1; j++, ch++) {
			cout << ch << " ";
			// ch++;
		}

		// followed by (n-i+1) characters in the dec.
		// order starting with the char with which the
		// last pattern ends
		ch = ch-1;
		for(int j=1; j<=n-i+1; j++, ch--) {
			cout << ch << " ";
		}

		cout << endl;
	}

	return 0;
}