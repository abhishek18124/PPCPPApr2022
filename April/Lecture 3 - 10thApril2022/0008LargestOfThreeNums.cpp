#include<iostream>

using namespace std;

int main() {

	int x;
	cout << "Enter the first num : ";
	cin >> x;

	int y;
	cout << "Enter the second num :";
	cin >> y;

	int z;
	cout << "Enter the third num : ";
	cin >> z;

	if(x > y && x > z) {
		cout << x << " is the largest" << endl;
	} else {
		// either y is the largest or z is the largest
		if(y > z) {
			cout << y << " is the largest" << endl;
		} else {
			cout << z << " is the largest" << endl;
		}
	}


	return 0;
}