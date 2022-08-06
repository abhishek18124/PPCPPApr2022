#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

bool checkDuplicate(vector<int> v, int k) {
	unordered_map<int, int> indexMap;
	for(int i=0; i<v.size(); i++) {
		if(indexMap.find(v[i]) != indexMap.end()) {
			int j = indexMap[v[i]];
			if(i-j <= k) {
				return true;
			}
		}
		indexMap[v[i]] = i;
	}

	return false;
}

int main() {

	vector<int> v = {1, 2, 3, 1, 2, 3};
	int k = 3;

	checkDuplicate(v, k) ? cout << "true" <<  endl :
	                       cout << "false" << endl;


	
	return 0;
}