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

		Customer(Customer& c) {
			cout << "Inside copy constructor" << endl;
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

	Customer c2 = c1; // or Customer c2(c1) // invokes the default copy constructor
	c2.printCustomerInfo();

	return 0;
}