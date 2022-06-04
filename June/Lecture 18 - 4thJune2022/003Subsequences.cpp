#include<iostream>
#include<set>

using namespace std;

void generateSubsequence(char* inp, char* out, int i, int j, set<string>& s) {

	// base case
	if(inp[i] == '\0') {
		out[j] = '\0';
		// cout << out << endl;
		s.insert(string(out));
		return;
	}

	// recursive case

	// you are at the character which is at the ith index
	// and you've to decide whether to incl. it in the out
	// subseq or excl. it from the out. subeq.

	// 1. include inp[i] in out subseq.
	out[j] = inp[i];
	generateSubsequence(inp, out, i+1, j+1, s);
	
	// 2. exclude inp[i] from out subseq.
	generateSubsequence(inp, out, i+1, j, s);

	// // 1. include inp[i] in out subseq.
	// out[j] = inp[i];
	// j = j+1;
	// generateSubsequence(inp, out, i+1, j, s);
	// j = j-1; // backtracking
	
	// // 2. exclude inp[i] from out subseq.
	// generateSubsequence(inp, out, i+1, j, s);

}

int main() {

	char inp[10] = "abc";
	char out[10];

	set<string> s;

	generateSubsequence(inp, out, 0, 0, s);

	for(string str : s) {
		cout << str << endl;
	}

	return 0;
}