#include<iostream>

using namespace std;

int main() {

	int n;

	cout << "Enter the value of n : ";
	cin >> n;

	if(n == 0 || n == 1) {
		cout << n << "th fibonacci no. : " << n << endl;
		return 0;
	}

	int a = 0; // 0th fibonacci no.
	int b = 1; // 1st fibonacci no.

	int i = 2;

	while(i <= n) {
		int c = a + b;
		a = b;
		b = c;
		i = i+1;
	}

	cout << n << "th fibonacci no. : " << b << endl;

	return 0;
}