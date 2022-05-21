#include<iostream>

using namespace std;

int compareStrings(char* str1, char* str2) {
	int i = 0;
	int j = 0;

	int n1 = strlen(str1);
	int n2 = strlen(str2);

	while(i < n1 and j < n2) {
		if(str1[i] > str2[j]) {
			// str1 is greater than str2
			return 1;
		} else if(str1[i] < str2[j]) {
			// str2 is greater than str1
			return -1;
		}
		i++;
		j++;
	}

	if(i < n1) {
		// length of str1 is greater than
		// length of str2 therefore 
		// str1 is greater than str2
		return 1;
	} else if(j < n2) {
		// length of str2 is greater than
		// length of str1 therefore 
		// str2 is greater than str1
		return -1;
	} else {
		// str1 is equal to str2
		return 0;
	}
}


int main() {

	int n;
	cout << "Enter the no. of strings : ";
	cin >> n;

	char inp[100];
	cin >> inp; // remember, it terminates at white-space

	char lar[100]; // to keep track of the largest string
	strcpy(lar, inp);

	int i = 1;
	while(i < n) {


		cout << "Largest so far : " << lar << endl;

		// read the next string
		cin >> inp;

		int res = strcmp(inp, lar);

		if(res > 0) { // or res == 1
			strcpy(lar, inp);
		}

		i++;

	}

	cout << "Largest String : " << lar << endl;

	return 0;
}
