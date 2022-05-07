#include<iostream>

using namespace std;

void f(int a) {

	cout << "inside f() a : " << a << endl;
	a++;
	cout << "inside f() a : " << a << endl;
}

int main() {

	int a = 10;

	cout << "inside main()  a : " << a << endl;

	f(a);

	cout << "inside main()  a : " << a << endl;


}