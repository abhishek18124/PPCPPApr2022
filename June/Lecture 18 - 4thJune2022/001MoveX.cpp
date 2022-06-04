#include<iostream>

using namespace std;

string move(string str) {
	// base case
	if(str == "") { // str.empty()
		return str;
	}

	// recursive case

	// 1. extract the substring that starts at the 1st idx
	string subStr = str.substr(1);

	// 2. ask your friend to move all x's to the end in that substring
	string subStrFromMyFriend = move(subStr);

	// 3. use the answer from your friend and str[0] to build the final ans.
	
	// char ch = str[0]; // error

	string ch = str.substr(0, 1);
	
	if(ch == "x") {
		// append ch to the end of subStrFromMyFriend
		return subStrFromMyFriend + ch;
	} else {
		// prepend ch to the front of subStrFromMyFriend
		return ch + subStrFromMyFriend;
	}
}

int main() {

	string str = "xaxbxc";

	cout << move(str) << endl;

	return 0;
}