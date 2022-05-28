#include<iostream>

using namespace std;

int f(int n) {

	// base case
	if(n == 0 || n == 1) {
		return n;
	}

	// recursive case

	// 1. ask your friend to compute (n-1)th fib. no.
	int A = f(n-1);

	// 2. ask your friend to compute (n-2)th fib. no.
	int B = f(n-2);

	return A + B;

}

int main() {

	int n = 5;

	cout << f(n) << endl;

	return 0;
}