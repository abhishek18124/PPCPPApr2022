#include<iostream>

using namespace std;

int main() {

	int num;
	cout << "Enter a positive integer : ";
	cin >> num;

	int i;

	for(i=2; i<num; i++) {
		if(num%i == 0) {
			break;
		}
	}

	if(i == num) {
		cout << num << " is a prime no." << endl;	
	} else {
		cout << num << " is not a prime no." << endl;
	}

	
	return 0;
}