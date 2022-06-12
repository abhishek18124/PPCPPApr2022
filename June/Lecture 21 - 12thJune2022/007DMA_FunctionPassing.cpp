#include<iostream>

using namespace std;

void f(int** arr, int m, int n) {

}

void f2(int brr[][10], int m, int n) {
	
}

int main() {

	int m = 3;
	int n = 4;

	int** arr = new int*[m];
	for(int i=0; i<m; i++) {
		arr[i] = new int[n];
	}

	f(arr, m, n);


}