#include<iostream>
#include<cmath>

using namespace std;

float areaOfTriangle(int b, int h) {
	return 0.5 * b * h;
}

float semiPerimeter(int a, int b, int c) {
	return 0.5 * (a+b+c);
}

float areaOfTriangle(int a, int b, int c) {
	float s = semiPerimeter(a, b, c);
	return sqrt(s * (s-a) * (s-b) * (s-c));
}


void f1(float a) {
	cout << "inside float";
}

void f1(double a) {
	cout << "inside double";
}

int main() {

	cout << areaOfTriangle(3, 5) << endl;
	cout << areaOfTriangle(3, 4, 5) << endl;

	f1(0.5f);

	return 0;
}