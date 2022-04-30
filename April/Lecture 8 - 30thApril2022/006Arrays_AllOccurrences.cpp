#include<iostream>

using namespace std;

int main() {

	int A[] = {10, 20, 30, 30, 30};
	int n = sizeof(A) / sizeof(int);

	int target;
	cout << "Enter the value of target : ";
	cin >> target;

	int i;
	bool flag = false; // assume target is not present in the array

	for(i=0; i<n; i++) {
		if(A[i] == target) {
			flag = true;
			cout << i << " ";
		}
	}

	if(!flag) { // flag == false
		cout << -1 << endl;
 	}
	

	return 0;
}