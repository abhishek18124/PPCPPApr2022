#include<iostream>

using namespace std;

int main() {

	int n = 42;
	int k = 4;

	(n>>k)&1 ? cout << k << "th bit is set" << endl 
	         : cout << k << "th bit is not set" << endl;

	(1<<k)&n ? cout << k << "th bit is set" << endl 
	         : cout << k << "th bit is not set" << endl;


}