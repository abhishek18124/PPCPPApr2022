#include<iostream>

using namespace std;

int main() {

	int n = 5;

	int i = 1;
	while(i <= n) {
		// print (n-i) spaces
		int j = 1;
		while(j <= n-i) {
			cout << " ";
			j = j+1;
		}

		// print i nos. in the inc. order starting with i
		int k = 1;
		int no = i;
		while(k <= i) {
			cout << no;
			k = k+1;
			no = no+1;
		}

		// print (i-1) nos. in the dec. order starting with 2i-2
		// no = 2*i - 2;
		no = no-2;
		int l = 1;
		while(l <= i-1) {
			cout << no;
			no = no-1;
			l = l+1;
		}

		i = i+1;
		cout << endl;
	}

	return 0;
}