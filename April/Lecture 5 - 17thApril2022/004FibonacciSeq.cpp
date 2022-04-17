#include<iostream>

using namespace std;

int main() {

	int n;

	cout << "Enter a value of n : ";
	cin >> n;

	if(n == 0 || n == 1) {
		cout << "Yes" << endl;
		return 0;
	}

	int a = 0; // 0th fibonacci no.
	int b = 1; // 1st fibonacci no.

	while(true) {
		int c = a + b;
		if(c == n) {
			cout << "Yes" << endl;
			return 0;
		} 

		if(c > n) {
			cout << "No" << endl;
			return 0;
		}

		a = b;
		b = c;
	}


	return 0;
}