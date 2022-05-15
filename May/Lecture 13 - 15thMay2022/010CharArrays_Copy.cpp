#include<iostream>

using namespace std;

void copyString(char* str1, char* str2) {

	int i = 0;
	int j = 0;

	while(j <= strlen(str2)) {
		str1[i] = str2[j];
		i++;
		j++;
	}

}

int main() {

	char str1[100] = "hello";
	char str2[] = "world";

	cout << "Before copy : " << str1 << endl;

	// copyString(str1, str2);

	strcpy(str1, str2);

	cout << "After copy : " << str1 << endl;

	return 0;
}