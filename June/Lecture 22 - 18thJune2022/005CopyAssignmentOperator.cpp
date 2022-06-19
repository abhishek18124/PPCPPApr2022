#include<iostream>

using namespace std;

class Customer {

	public :
		char name[100];
		int age;
		char gender;
		double credits;

		Customer(char* n, int a, char g, double c) {
			cout << "I am inside parameterised constructor" << endl;
			strcpy(name, n);
			age = a;
			gender = g;
			credits = c;
		}

		Customer() {
			cout << "I am inside default constructor" << endl;
		}

		Customer(Customer& c) {
			cout << "Inside copy constructor" << endl;
			strcpy(name, c.name);
			age = c.age;
			gender = c.gender;
			credits = c.credits;
		}

		void operator=(Customer& c) {
			cout << "Inside copy assignment operator" << endl;
			strcpy(name, c.name);
			age = c.age;
			gender = c.gender;
			credits = c.credits;
		}

		void printCustomerInfo() {

			cout << "Customer Information" << endl
			     << "Name : " << name << endl
			     << "Age : " << age << endl
			     << "Gender : " << gender << endl
			     << "Credits : " << credits << endl << endl;

		}



};

int main() {

	Customer c1("Pranav", 20, 'M', 100);
	c1.printCustomerInfo();

	Customer c2; // default constructor
	// c2 = c1; // default copy assignment operator fn
	c2.operator=(c1);
	c2.printCustomerInfo();

	return 0;
}