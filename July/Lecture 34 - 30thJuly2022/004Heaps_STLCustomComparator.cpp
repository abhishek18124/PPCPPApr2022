/*

	STL implementation of the min_heap data structure with custom comparator.


*/

#include<iostream>
#include<queue>

using namespace std;

class CustomCompartor {

	public :

		// returns true when swap is needed
		bool operator()(int a, int b) {
			
			// if(b < a) {
			// 	// swap is needed
			// 	return true;
			// } else {
			// 	return false;
			// }

			// minHeap : swap is needed when b(child) < a(parent)
			return b < a;

			// // maxHeap : swap is needed when b(child) > a(parent)
			// return b > a;
		}

};

int main() {

	priority_queue<int, vector<int>, CustomCompartor> m; 
	
	m.push(9);
	m.push(7);
	m.push(8);
	m.push(5);
	m.push(4);
	m.push(6);
	m.push(3);
	m.push(2);
	m.push(1);

	cout << m.size() << endl;

	while(!m.empty()) {
		cout << m.top() << " ";
		m.pop();
	}

	cout << endl;

	cout << m.size() << endl;

	return 0;
}