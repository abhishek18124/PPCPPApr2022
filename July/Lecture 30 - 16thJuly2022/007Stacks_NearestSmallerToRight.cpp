#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int A[] = {2, 5, 1, 3, 6, 4, 0};
	int n = sizeof(A) / sizeof(int);

	stack<pair<int, int>> s;
	vector<int> v;
	for(int i=n-1; i>=0; i--) {

		while(!s.empty() && s.top().second >= A[i]) {
			s.pop();
		}

		if(s.empty()) {
			// cout << -1 << " ";
			v.push_back(n);
		} else {
			// cout << s.top().first << " ";
			v.push_back(s.top().first);
		}

		s.push({i, A[i]});

	}

	reverse(v.begin(), v.end());

	for(int i=0; i<v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;
	
	
	cout << endl;

	return 0;
}