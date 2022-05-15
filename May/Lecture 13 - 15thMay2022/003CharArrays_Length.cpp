#include<iostream>
#include<cstring>

using namespace std;

int main() {

	char str[] = "hello";
	int count = 0;

	for(int i=0; str[i] != '\0'; i++) {
		count++;
	}

	cout << "Length of " << str << " : " << count << endl;

	cout << "Length of " << str << " : " << strlen(str) << endl;

	return 0;
}