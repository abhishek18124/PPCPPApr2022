#include<iostream>

using namespace std;

bool isEven(int n) {
	return n%2 == 0;
}

int main() {

	// bool answer;

	// answer = isEven(3);

	// cout << answer << endl;

	// cout << isEven(3) << endl;

	// isEven(2) ? cout << "true" << endl :
	//             cout << "false" << endl;

	if(isEven(3)) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}

	return 0;
}