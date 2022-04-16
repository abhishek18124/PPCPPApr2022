#include<iostream>

using namespace std;

int main() {

	int n;

	cout << "Enter the value n : ";
	cin >> n;

	int i=2;

	while(i <= n-1) {
		if(n%i == 0) {
			cout << n << " is not a prime no." << endl;
			return 0;
		}
		i = i + 1;
	}

	cout << n << "  is a prime no." << endl;

	return 0;
}