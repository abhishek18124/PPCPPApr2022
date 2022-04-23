#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	int count = 0;
	for(int k=0; k<log2(n+1); k++) {
		// check if the kth bit of n is set or not

		// if((n>>k)&1) {
		// 	count++;
		// }


		if((1<<k)&n) {
			count++;
		}

	}

	cout << "Number of set bits in " << n << " is " << count << endl;

	return 0;
}