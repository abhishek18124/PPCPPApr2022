#include<iostream>

using namespace std;

bool isPrime(int n) {
	for(int i=2; i<n; i++) {
		if(n%i == 0) {
			return false;
		}
	}
	return true;
}

int main() {

	// int n;
	// cout << "Enter the value of n : ";
	// cin >> n;

	int n = 17;

	isPrime(n) ? cout << n << " is a prime number" << endl 
	           : cout << n << " is a not a prime number" << endl;

	return 0;
}