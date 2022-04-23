#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a non-negative integer : ";
	cin >> n;

	int p;
	cout << "Enter number of precision places : ";
	cin >> p;

	float sqrt = 0;
	float inc = 1;

	for(int i=0; i<=p; i++) {	
		while(sqrt*sqrt <= n) {
			sqrt = sqrt+inc;
		}
		sqrt = sqrt-inc;
		inc = inc/10;
	}
	
	cout << "Square root of " << n << " is " << sqrt << endl;

	return 0;
}