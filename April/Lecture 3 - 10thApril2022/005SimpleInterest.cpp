#include<iostream>

using namespace std;

int main() {

	int p; // to store the value of principle

	cout << "Enter the value of principle : ";
	cin >> p;
	cout << endl;

	int r; // to store the value of rate

	cout << "Enter the value of rate : ";
	cin >> r;
	cout << endl;

	int t; // to store the value of time

	cout << "Enter the value of time : ";
	cin >> t;
	cout << endl;

	cout << "Simple Interest : " << (p * r * t) / 100 << endl;
	cout << "Simple Interest : " << (p * r * t * 1.0) / 100 << endl;
	cout << "Simple Interest : " << (p * r * t) / 100.0 << endl;
	
	int denr = 100;

	cout << "Simple Interest : " << (p * r * t) / float(denr) << endl;
	cout << "Simple Interest : " << (p * r * t) / (float)100 << endl;
	cout << "Simple Interest : " << float(p * r * t) / 100 << endl;
	
	float si = (p*r*t)/100;
	cout << "Simple Interest : " << si << endl;
	
	return 0;
}