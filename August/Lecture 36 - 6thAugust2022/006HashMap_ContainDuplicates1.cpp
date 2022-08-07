#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

bool isDuplicatePresent(vector<int> v) {

	unordered_set<int> seen; // to track distinct elements seen so far

	for(int i=0; i<v.size(); i++)  {
		if(seen.find(v[i]) != seen.end()) {
			return true;
		}
		seen.insert(v[i]);
	}

	return false; // no duplicate found

}

int main() {

	vector<int> v = {1, 2, 3, 4};

	isDuplicatePresent(v) ? cout << "true" << endl :
	                        cout << "false" << endl;
	
	return 0;
}