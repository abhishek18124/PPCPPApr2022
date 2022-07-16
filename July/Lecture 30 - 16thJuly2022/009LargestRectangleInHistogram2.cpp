#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int h[] = {2, 1, 5, 6, 2, 3};
	int n = sizeof(h) / sizeof(int);

	vector<int> v_l; // to store, for each element, index of the nearest smallest element towards the left
	deque<pair<int, int>> s; // stack

	for(int i=0; i<n; i++) {

		while(!s.empty() and s.back().second >= h[i]) {
			s.pop_back();
		} 

		if(s.empty()) {
			v_l.push_back(-1);
		} else {
			v_l.push_back(s.back().first);
		}

		s.push_back({i, h[i]});

	}

	s.clear();

	vector<int> v_r; // to store, for each element, index of the nearest smallest element towards the right
	
	for(int i=n-1; i>=0; i--) {

		while(!s.empty() and s.back().second >= h[i]) {
			s.pop_back();
		} 

		if(s.empty()) {
			v_r.push_back(n);
		} else {
			v_r.push_back(s.back().first);
		}

		s.push_back({i, h[i]});

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