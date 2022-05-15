#include<iostream>
#include<cstring>

using namespace std;

void readString(char* str, char delimiter='\n') {
	char ch;
	int i = 0;
	while(true) {
		ch = cin.get();
		if(ch == delimiter) {
			break;
		}
		str[i] = ch;
		i++;
	}
	str[i] = '\0';
}

int main() {

	char str[100];

	// cout << "Enter a string : " ;
	// cin >> str;
	// cout << "You've entered : " << str << endl;

	// cout << "Enter a strin : ";
	// readString(str, '$');
	// cout << "You've entered : " << str << endl;

	int n;
	cin >> n;
	cin.ignore();
	cout << "Enter a strin : ";
	cin.getline(str, n, '$');
	cout << "You've entered : " << str << endl;

	return 0;
}