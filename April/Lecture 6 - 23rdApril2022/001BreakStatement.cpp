#include<iostream>

using namespace std;

int main() {

	int x;
	int count = 0;

	while(true) {
		cout << "> ";
		cin >> x;
		if(x == -1) {
			break;
		}
		count++;
	}

	cout << "Count : " << count << endl;

	return 0;
}