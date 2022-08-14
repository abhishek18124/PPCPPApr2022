#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class node {

	public :

		char ch;
		bool terminal;
		int freq;
		unordered_map<char, node*> childMap;

		node(char ch, int freq=0) {
			this->ch = ch;
			this->terminal = false;
			this->freq = freq;
		}

};

class trie {
	node* root;
	int n; // size of the trie

	public :

		trie(int n) {
			root = new node('#', n);
			this->n = n;
		}

		void insert(string str) {
			node* cur = root;
			for(char ch : str) {
				if(cur->childMap.find(ch) == cur->childMap.end()) {
					node* n = new node(ch);
					cur->childMap[ch] = n;
				}
				cur = cur->childMap[ch];
				cur->freq += 1;
			}
			cur->terminal = true;
		}

		string longestCommonPrefix() {
			node* cur = root;
			string prefix = "";
			while(cur->freq == n) {
				if(cur->ch != '#') prefix += cur->ch;
				if(cur->childMap.size() == 0) break;
				cur = cur->childMap.begin()->second;
				// cur = (*cur->childMap.begin()).second;
			}
			return prefix;
		}

};


int main() {

	vector<string> words = {"flow", "floor", "fly"};
	int n = words.size();

	trie t(n);
	for(string word : words) {
		if(word == "") {
			cout << "";
			return 0;
		}
		t.insert(word);
	}

    cout << t.longestCommonPrefix() << endl;

	return 0;
}