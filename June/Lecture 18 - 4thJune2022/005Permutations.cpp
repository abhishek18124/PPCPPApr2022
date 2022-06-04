#include<iostream>

using namespace std;

void generatePermutations(char* inp, int i) {

	// base case
	if(inp[i] == '\0') {
		cout << inp << endl;
		return;
	}


	// recursive case 

	for(int j=i; j<strlen(inp); j++) {
		// 1. decide which character is assigned to the ith pos.
		swap(inp[i], inp[j]);
		// 2. now, ask your friend to take decisions for the remaining pos.
		//    starting with the (i+1)th pos.
		generatePermutations(inp, i+1);
		swap(inp[i], inp[j]); // backtrack step
	}
}

int main() {

	char inp[10] = "abc";

	generatePermutations(inp, 0);

	return 0;
}