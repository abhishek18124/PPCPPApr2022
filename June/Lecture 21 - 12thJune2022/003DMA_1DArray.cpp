#include<iostream>

using namespace std;

int main() {

	// int* ptr = new int[5];

	// for(int i=0; i<5; i++) {
	// 	ptr[i] = i*10; // *(ptr + i) = i*10;
	// }

	// for(int i=0; i<5; i++) {
	// 	cout << ptr[i] << " "; // cout << *(ptr + i) << " ";
	// }

	// cout << endl;

	int* ptr = new int[]{10, 20, 30, 40, 50};

	for(int i=0; i<5; i++) {
		cout << ptr[i] << " ";
	}

	cout << endl;


	return 0;
}