#include<iostream>

using namespace std;

int main() {

	int A[] = {10, 20, 30, 30, 40};
	int n = sizeof(A) / sizeof(int);

	int target;
	cout << "Enter the value of target : ";
	cin >> target;

	int i;

	for(i=n-1; i>=0; i--) {
		if(A[i] == target) {
			break;
		}
	}

	if(i == -1) {
		// target is not present in the array
		cout << -1 << endl;
	} else {
		// target is present in the array
		cout << i << endl;
	}

	return 0;
}