/*

	Implement a phonebook storing mapping between person's name and 
	their phone numbers using an unordered_map.

*/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main() {

	unordered_map<string, vector<string>> phoneMap;

	phoneMap["Gurditt"].push_back("123456");
	phoneMap["Gurditt"].push_back("789012");

	phoneMap["Hargun"].push_back("000111");

	phoneMap["Junet"].push_back("123456");
	phoneMap["Abhishek"].push_back("012345");

	for(pair<string, vector<string>> p : phoneMap) {
		cout << p.first << " : ";
		for(string num : p.second) {
			cout << num << " ";
		}
		cout << endl;
	}

	return 0;
}