#include<iostream>

using namespace std;

string digitMap[] = {"", "", "abc", "def", "ghi",
                     "jkl", "mno", "pqrs", "tuv", "wxyz"};
 
void generateWords(char* inp, char* out, int i, int j) {

	// base case
	if(inp[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}

	// recursive case

	// 1. extract the ith digit from inp
	int d = inp[i]-'0';

	if(d == 0 or d == 1) {
		// skip the ith digit
		generateWords(inp, out, i+1, j);
		return;
	}

	// 2. extract options for the ith digit
	string options = digitMap[d];
	for(char c_k : options) {
		// 3. map the ith digit to c_k
		out[j] = c_k;
		// 4. ask your friend to make decisions
		// for the remaining digits starting with
		// (i+1)th digit
		generateWords(inp, out, i+1, j+1);
	}

}

int main() {

	char inp[10] = "213";
	char out[10];

	generateWords(inp, out, 0, 0);

	return 0;
}