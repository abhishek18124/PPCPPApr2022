#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

// void findDuplicates(vector<int> v) {
// 	unordered_map<int, int> freqMap;

// 	for(int i=0; i<v.size(); i++) {
// 		freqMap[v[i]]++;
// 	}

// 	for(auto p : freqMap) {
// 		if(p.second > 1) {
// 			cout << p.first << " ";
// 		}
// 	}

// 	cout << endl;
// }

void findDuplicates(vector<int> v) {
	int n = v.size();
	for(int i=0; i<v.size(); i++) {
		v[v[i]%n] += n;
	}

	for(int i=0; i<n; i++) {
		if(v[i]/n > 1) {
			cout << i << " ";
		}
	}

	cout << endl;


}

int main() {

	vector<int> v = {1, 0, 1, 0, 2};

	findDuplicates(v);
	
	return 0;
}