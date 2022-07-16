#include<iostream>
#include<stack>

using namespace std;

int main() {

	int A[] = {5, 2, 0, 4, 1, 3, 6};
	int n = sizeof(A) / sizeof(int);

	stack<int> s;
	for(int i=0; i<n; i++) {

		while(!s.empty() && s.top() <= A[i]) {
			s.pop();
		}

		if(s.empty()) {
			cout << -1 << " ";
		} else {
			cout << s.top() << " ";
		}

		s.push(A[i]);

	}
	
	
	cout << endl;

	return 0;
}