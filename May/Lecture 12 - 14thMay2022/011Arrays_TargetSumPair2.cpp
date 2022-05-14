#include<iostream>
#include<algorithm>
using namespace std;

int countPairs(int* A, int n, int t) {

	// 1. sort the array
	sort(A, A+n);

	// 2. use the 2-pointer approach
	int count = 0;
	int i = 0;
	int j = n-1;
	while(i < j) {
		int sum = A[i] + A[j];
		if(sum == t) {
			count++;
			i++;
			j--;
		} else if(sum > t) {
			j--;
		} else {
			i++;
		}
	}

	return count;

}

int main() {

	int A[] = {3, 2, 1, 5, 4, 0};
	int n = sizeof(A) / sizeof(int);
	int t = 6;

	cout << countPairs(A, n, t) << endl;

	return 0;
}