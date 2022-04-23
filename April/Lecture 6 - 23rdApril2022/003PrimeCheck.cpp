#include<iostream>

using namespace std;

int main() {

	int num;
	cout << "Enter a positive integer : ";
	cin >> num;

	bool flag = true; // assume, given number is a prime no. 

	for(int i=2; i<num; i++) {
		if(num%i == 0) {
			flag = 0;
			break;
		}
	}

	// if(flag) {
	// 	cout << num << " is a prime no." << endl;	
	// } else {
	// 	cout << num << " is not a prime no." << endl;
	// }

	flag ? cout << num << " is a prime no." << endl 
	       : cout << num << " is not a prime no." ;

	return 0;
}