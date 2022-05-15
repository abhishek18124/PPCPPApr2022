#include<iostream>

using namespace std;

bool checkAnagram(char* str1, char* str2) {

	int freq1[26] = {};
	for(int i=0; i<strlen(str1); i++) {
		// extract the ith char of str1
		char ch = str1[i];
		// map 'ch' to its index in 'freq1'
		int idx = ch-'a';
		// update the freq. of  'ch' in 'freq1'
		freq1[idx]++;
	}

	// for(int i=0; i<26; i++) {
	// 	cout << freq1[i] << " ";
	// }

	// cout << endl;

	int freq2[26] = {};
	for(int i=0; i<strlen(str2); i++) {
		freq2[str2[i]-'a']++;
	}


	// for(int i=0; i<26; i++) {
	// 	cout << freq2[i] << " ";
	// }

	// cout << endl;

	for(int i=0; i<26;  i++) {
		if(freq1[i] != freq2[i]) {
			return false;
		}
	}

	return true;

}

int main() {

	char str1[] = "abcddc";
	char str2[] = "abbbbc";

	checkAnagram(str1, str2) ? cout << "True" << endl : 
	                           cout << "False" << endl;

	return 0;
}