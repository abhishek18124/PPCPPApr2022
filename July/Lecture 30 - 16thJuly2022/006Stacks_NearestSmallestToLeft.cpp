#include<iostream>
#include<stack>
#include<forward_list>

using namespace std;

int main() {

	int A[] = {0, 3, 5, 4, 1, 6, 2};
	int n = sizeof(A) / sizeof(int);

	stack<pair<int, int>> s;
	for(int i=0; i<n; i++) {

		while(!s.empty() && s.top().second >= A[i]) {
			s.pop();
		}

		if(s.empty()) {
			cout << -1 << " ";
		} else {
			cout << s.top().first << " ";
		}

		s.push({i, A[i]});

	}
	
	
	cout << endl;

	return 0;
}