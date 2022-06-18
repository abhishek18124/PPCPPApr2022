#include<iostream>

using namespace std;

class Customer {

	char* name;
		
	public :
		int age;
		char gender;
		double credits;

		Customer(char* n, int a, char g, double c) {
			cout << "I am inside parameterised constructor" << endl;
			name = new char[100];
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
			name = new char[100]; // for deep copying
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

		void setName(char* n) {
			strcpy(name, n);
		}

		char* getName() {
			return name;
		}

		~Customer() {
			cout << "Inside the destructor of " << name << endl;
			delete [] name; // to release/free the memory of dynamic member
		}

};

int main() {

	Customer c1("Pranav", 20, 'M', 100);
	c1.printCustomerInfo();

	Customer c2 = c1; // default copy constructor - shallow copy
	c2.printCustomerInfo();

	c2.setName("Sourav");
	cout << "c2.name : " << c2.getName() << endl;
	
	return 0;
}