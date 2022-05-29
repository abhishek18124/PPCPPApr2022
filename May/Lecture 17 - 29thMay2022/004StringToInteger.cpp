#include<iostream>

using namespace std;

int stringToInteger(string str, int n) {

	// base case
	if(n == 0) {
		// assume the integer corr. to an empty
		// string is zero
		return 0;
	}

	// recursive case

	// ask your friend to convert the first
	// (n-1) characters into an integer

	string subStr = str.substr(0, n-1);
	int integerFromMyFriend = stringToInteger(subStr, n-1);

	return integerFromMyFriend*10 + (str[n-1]-'0');

}

int main() {

	string str = "123";
	int n = str.size();

	int x = stringToInteger(str, n);

	cout << x + 1 << endl;

	return 0;
}