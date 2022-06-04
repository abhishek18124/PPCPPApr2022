/*
	
	> By default, elements in a set are inserted in the
	sorted order.
	> set do not allow duplicates
	> operations on set have logn time complexity

	https://m.cplusplus.com/reference/set/set/?kw=set
	
	> by default, elements in multi-set are inserted in 
	sorted order.
	> multiset allows duplicates.
	> operations on multiset have logn time complexity

	https://m.cplusplus.com/reference/set/multiset/?kw=multiset

*/

#include<iostream>
#include<set>

using namespace std;

int main() {

	set<int> s;

	s.insert(5);
	s.insert(4);
	s.insert(3);
	s.insert(2);
	s.insert(1);
	s.insert(1);

	cout << "size : " << s.size() << endl;

	// s.erase(5);

	// cout << "size : " << s.size() << endl;

	for(auto it=s.begin(), end=s.end(); it != end; it++) {
		cout << *it << " ";
	}

	cout << endl;

	for(int x : s) {
		cout << x << " ";
	}

	cout << endl;

	if(s.find(3) != s.end()) {
		cout << "3 is present" << endl;
	} else {
		cout << "3 is absent" << endl;
	}

	if(s.count(5)) {
		cout << "5 is present" << endl;
	} else {
		cout << "5 is absent" << endl;
	}

	s.clear();

	cout << "size : " << s.size() << endl;

	return 0;
}