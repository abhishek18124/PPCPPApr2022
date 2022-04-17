#include<iostream>
using namespace std;

int x = 100;

int main() {

	// int x = 10;

	cout << x << endl;

	{
		int x = 50;
		int y = 20;
		cout << x << " " << y << endl;

		{
			int y = 40;
			int z = 30;
			cout << ::x << " " << y << " " << z << endl;
			::x = ::x + 10;
		}
	}

	return 0;

}