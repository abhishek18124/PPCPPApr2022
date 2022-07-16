#include<iostream>
#include<stack>
#include<forward_list>

using namespace std;

int main() {

	int A[] = {100, 80, 60, 70, 60, 75, 85};
	int n = sizeof(A) / sizeof(int);

	stack<pair<int, int>> s;
	for(int i=0; i<n; i++) {

		while(!s.empty() && s.top().second <= A[i]) {
			s.pop();
		}

		int j;

		if(s.empty()) {
			j = -1;
		} else {
			j = s.top().first;
		}

		cout << (i-j) << " ";

		s.push({i, A[i]});

	}
	
	
	cout << endl;

	return 0;
}