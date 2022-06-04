#include<iostream>

using namespace std;

void replacePi(char* inp, int i) {

	// base case
	if(inp[i] == '\0') {
		return;
	}

	// recursive case

	if(inp[i] == 'p' and inp[i+1] == 'i') {

		// 1. replace "pi" at (i, i+1)th idx with "3.14"

		// 1.1 shift all the characters starting at (i+2)th
		//     idx two steps to the right

		// 1.1.1 find the index of the null character

		int j = i+2;
		while(inp[j] != '\0') {
			j++;
		}

		// int j = strlen(inp);

		// 1.1.2 shift the char. at the jth idx two steps to the right

		while(j >= i+2) {
			inp[j+2] = inp[j];
			j--;
		}

		// 1.2 replace characters at (i, i+1, i+2, i+3) with "3.14"
		inp[i] = '3';
		inp[i+1] = '.';
		inp[i+2] = '1';
		inp[i+3] = '4';

		// 2. ask your friend to replace "pi" with "3.14"
		//    in the substr that starts at the (i+4)th idx
		replacePi(inp, i+4);      
	} else {

		// ask your friend to replace "pi"'s with "3.14"
		// in the substr that starts at the (i+1)th idx
		replacePi(inp, i+1);

	}
}

int main() {

	char inp[201] = "pipipi";

	int n = strlen(inp);

	replacePi(inp, 0, n);

	cout << inp << endl;

	return 0;
}