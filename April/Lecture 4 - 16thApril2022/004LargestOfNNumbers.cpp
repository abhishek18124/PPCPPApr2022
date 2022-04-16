#include<iostream>
#include<climits>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	int largestSoFar = INT_MIN;
	int i = 1;

	int x;

	while(i <= n) {
		
		cout << "Enter a value : ";
		cin >> x;

		if(x > largestSoFar) {
			largestSoFar = x;
		}

		i = i+1;
	}

	cout << "Largest of " << n << " numbers is " << largestSoFar << endl;

	return 0;
}