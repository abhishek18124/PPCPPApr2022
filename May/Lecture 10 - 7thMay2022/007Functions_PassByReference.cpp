#include<iostream>

using namespace std;

void f(int& x) {

	cout << "inside f() x : " << x << endl;
	x++;
	cout << "inside f() x : " << x << endl;
}

int main() {

	int a = 10;

	cout << "inside main()  a : " << a << endl;

	f(a);

	cout << "inside main()  a : " << a << endl;


}