#include<iostream>

using namespace std;

int multiply(int a, int b) {

	// base case
	if(b == 0) {
		return 0;
	}

	// recursive case

	// 1. ask your friend to compute a*(b-1) i.e. add 'a' 'b-1' times
	int A = multiply(a, b-1);

	return a + A;

}

int main() {

	int a = 2;
	int b = 6;

	cout << multiply(a, b) << endl;

	return 0;
}