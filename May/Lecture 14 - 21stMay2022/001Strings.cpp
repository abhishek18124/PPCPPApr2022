#include<iostream>

using namespace std;

int main() {

	string str;

	str = "hello";

	cout << str << endl;

	cout << str[0] << endl;

	cout << str[1] << endl;

	string str2 = "world";

	cout << str2 << endl;

	string str3("coding blocks");

	cout << str3 << endl;

	string str4;

	str4 = str3;

	cout << str4 << endl;

	string str5(str2);

	cout << str5 << endl;

	// string str6;

	// cout << "Enter a string : " ;
	// cin >> str6;
	// cout << str6 << endl;

	string str7;

	cout << "Enter another string : ";
	getline(cin, str7, '$');
	cout << str7 << endl;

	return 0;
}