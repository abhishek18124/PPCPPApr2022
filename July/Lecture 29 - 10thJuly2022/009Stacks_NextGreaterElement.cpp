#include<iostream>
#include<stack>
#include<forward_list>

using namespace std;

int main() {

	int A[] = {5, 3, 6, 7, 2, 1, 4};
	int n = sizeof(A) / sizeof(int);

	stack<int> s;
	forward_list<int> fw;

	for(int i=n-1; i>=0; i--) {

		while(!s.empty() and s.top() < A[i]) {
			s.pop();
		}

		if(s.empty()) {
			fw.push_front(-1);
			// cout << -1 << " ";
		} else {
			fw.push_front(s.top());
			// cout << s.top() << " ";
		}

		s.push(A[i]);

	}

	for(int ans : fw) {
		cout << ans << " ";
	}

	cout << endl;

	return 0;
}