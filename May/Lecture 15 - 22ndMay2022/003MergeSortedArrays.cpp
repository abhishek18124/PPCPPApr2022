#include<iostream>

using namespace std;

int main() {

	int A[] = {1, 4, 5};
	int m = sizeof(A) / sizeof(int);

	int B[] = {2, 3, 6, 7};
	int n = sizeof(B) / sizeof(int);

	int C[100];

	int i=0;
	int j=0;
	int k=0;

	while(i < m and j < n) {
		if(A[i] < B[j]) {
			C[k] = A[i];
			i++;
			k++;
		} else {
			C[k] = B[j];
			j++;
			k++;
		}
	}

	while(i < m) {
		C[k] = A[i];
		i++;
		k++;
	}

	while(j < n) {
		C[k] = B[j];
		j++;
		k++;
	}

	for(int i=0; i<m+n; i++) {
		cout << C[i] << " ";
	}

	cout << endl;


	return 0;
}



