#include<iostream>

using namespace std;

int main() {

	unsigned int n; 

	cout << "Enter a positive integer : ";
	cin >> n;

	int reversed = 0;

	while (n > 0) {
		int digit = n % 10;
		reversed = reversed*10 + digit;
		n = n / 10;
	}

	cout << "Reversed number : " << reversed << endl;
	
	return 0;
}