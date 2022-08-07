#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int lengthOfLongestPalindrome(string str) {
	unordered_set<char> seen;
	int count = 0;

	for(char ch : str) {
		if(seen.find(ch) != seen.end()) {
			// you've seen ch before
			seen.erase(ch);
			count += 2;
		} else {
			// you are seeing ch for the first time
			seen.insert(ch);
		}
	}

	return seen.empty() ? count : count + 1;
}

int main() {

	string str = "abccccdd";

	cout << lengthOfLongestPalindrome(str) << endl;
 	
	return 0;
}