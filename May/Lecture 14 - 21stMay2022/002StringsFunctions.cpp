#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	string str = "hello world";

	cout << str.length() << endl;
	cout << str.size() << endl;

	string str1 = "hello";
	string str2 = "world";

	// str1.append(str2);

	str1 = str1 + str2;

	cout << str1 << endl;

	string str3 = "abc";
	string str4 = "def";

	// cout << str3.compare(str4) << endl;
	// cout << str4.compare(str3) << endl;

	if(str3 > str4) {
		cout << str3 << " is greater than " << str4 << endl;
		// cout << "They are equal" << endl;
	} else {
		cout << str4 << " is greater than " << str3 << endl;
		// cout << "They are not equal" << endl;
	}

	string str5 = "hehellolloworld";

	cout << str5.find("llo") << endl;
	cout << str5.rfind("llo") << endl;
	cout << str5.find("coding") << endl;
	cout << string::npos << endl;

	if(str5.find("blocks") == string::npos) {
		cout << "blocks is not present" << endl;
	} else {
		cout << "blocks is present" << endl;
	}

	string str6 = "helloworld";

	cout << str6.substr(2) << endl;
	cout << str6.substr(2, 4) << endl;
	cout << str6.substr(2, 100) << endl;

	string str7 = "new delhi";

	char* ch_arr = (char *)str7.c_str();

	cout << ch_arr << endl;

	char a[] = "hello world";

	string str8(a);

	cout << str8 << endl;

	string str9 = "coding blocks";

	reverse(str9.begin(), str9.begin()+6);

	cout << str9 << endl;

	return 0;
}