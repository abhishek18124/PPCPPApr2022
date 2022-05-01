#include<iostream>

using namespace std;

int main() {

	int A[] = {10, 20, 30, 40, 50, 60, 70};
	int n = sizeof(A) / sizeof(int);

	int target = 100;

	int s = 0;
	int e = n-1;
	int m;

	while(s <= e) {
		m = (s+e) / 2;
		if(A[m] == target) {
			// you've found the target in the array at the
			// mth index, therefore stop the algorithm and
			// report its position as m
			break;
		} else if(A[m] < target) {
			// reduce you search space from [s, e] to [m+1, e]
			s = m+1;
		} else {
			// reduce your search space from [s, e] to [s, m-1]
			e = m-1;
		}
	}

	if(s > e) {
		// your search space has become empty i.e.
		// target is not present in the array
		cout << -1 << endl;
	} else {
		// you've found the target at index m
		cout << m << endl;
	}

	return 0;
}