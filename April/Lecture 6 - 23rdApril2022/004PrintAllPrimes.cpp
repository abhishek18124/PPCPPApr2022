#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a positive integer (>2) : ";
	cin >> n;

	for(int num=2; num<=n; num++) {
		// check if num is prime or not
		// int i;
		// for(i=2; i<num; i++) {
		// 	if(num%i == 0) {
		// 		break;
		// 	}
		// }
		// if(i == num) {
		// 	cout << num << " ";
		// }

		bool flag = true; // assume, given number is a prime no. 

		for(int i=2; i<num; i++) {
			if(num%i == 0) {
				flag = false;
				break;
			}
		}

		if(flag) {
			cout << num << " ";
		}

	}

	return 0;
}