#include<iostream>
#include<unordered_map>

using namespace std;

class node {

	public :

		char ch;
		bool terminal;
		int freq;
		unordered_map<char, node*> childMap;

		node(char ch) {
			this->ch = ch;
			this->terminal = false;
			this->freq = 0;
		}

};

class trie {
	node* root;

	public :

		trie() {
			root = new node('#');
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

		string uniquePrefix(string str) {
			node* cur = root;
			string prefix = "";
			for(char ch : str) {
				cur = cur->childMap[ch];
				prefix += ch;
				if(cur->freq == 1) {
					return prefix;
				}
			}

			return cur->freq == 1 ? prefix : "";
		}
};


int main() {

	string words[] = {"code", "coder", "coding", "new", "neon"};

	trie t;
	for(string word : words) {
		t.insert(word);
	}

	for(string word : words) {
		cout << t.uniquePrefix(word) << endl;
	}
  
	return 0;
}