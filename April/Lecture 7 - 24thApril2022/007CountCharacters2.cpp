#include<iostream>

using namespace std;

int main() {

	char ch;

	int lower = 0;
	int upper = 0;
	int digit = 0;
	int special = 0;
	int whitespaces = 0;

	while(true) {

		ch = cin.get();
		if(ch == '$') {
			break;
		}

		if(ch >= 'A' and ch <= 'Z') {
			upper++;
		} else if(ch >= 'a' and ch <= 'z') {
			lower++;
		} else if(ch >= '0' and ch <= '9') {
			digit++;
		} else if(ch == '\n' or ch == '\t' or ch == ' ') {
			whitespaces++;
		} else {
			special++;
		}

	}

	cout << "lower : " << lower << endl
	     << "upper : " << upper << endl
	     << "digit : " << digit << endl
	     << "special : " << special << endl
	     << "whitespaces : " << whitespaces << endl;


	return 0;
}