#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int h[] = {2, 1, 5, 6, 2, 3};
	int n = sizeof(h) / sizeof(int);

	vector<int> v_l; // to store, for each element, index of the nearest smallest element towards the left
	stack<pair<int, int>> s_l;

	for(int i=0; i<n; i++) {

		while(!s_l.empty() and s_l.top().second >= h[i]) {
			s_l.pop();
		} 

		if(s_l.empty()) {
			v_l.push_back(-1);
		} else {
			v_l.push_back(s_l.top().first);
		}

		s_l.push({i, h[i]});

	}

	vector<int> v_r; // to store, for each element, index of the nearest smallest element towards the right
	stack<pair<int, int>> s_r;

	for(int i=n-1; i>=0; i--) {

		while(!s_r.empty() and s_r.top().second >= h[i]) {
			s_r.pop();
		} 

		if(s_r.empty()) {
			v_r.push_back(n);
		} else {
			v_r.push_back(s_r.top().first);
		}

		s_r.push({i, h[i]});

	}

	reverse(v_r.begin(), v_r.end());

	// for(int i=0; i<n; i++) {
	// 	cout << v_l[i] << " " << v_r[i] << endl;
	// }

	int max_area = 0;
	for(int i=0; i<n; i++) {

		// ai = hi * wi
		// ai = hi * (v_r[i]-v_l[i]-1)

		int w_i = v_r[i]-v_l[i]-1;
		max_area = max(max_area, h[i]*w_i);

	}

	cout << "max area = " << max_area << endl;

	return 0;
}