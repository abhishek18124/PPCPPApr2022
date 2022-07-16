#include<iostream>
#include<queue>

using namespace std;

int main() {

	queue<char> q;

	char ch;

	int freq[26] = {};

	while(true) {

		cin >> ch;

		if(ch == '.') {
			break;
		}

		freq[ch-'a']++;
		if(freq[ch-'a'] == 1) q.push(ch);

		while(!q.empty() and freq[q.front()-'a'] > 1) {
			q.pop();
		}

		if(q.empty()) {
			cout << -1 << " ";
		} else {
			cout << q.front() << " ";
		}


	}


	return 0;
}