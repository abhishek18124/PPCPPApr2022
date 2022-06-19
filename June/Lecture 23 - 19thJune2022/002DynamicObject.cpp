#include<iostream>

using namespace std;

class Customer {

	public :
		string name;
		int age;
		
		Customer(string n, int a) {
			cout << "I am inside Customer's parameterised constructor" << endl;
			name = n;
			age = a;
		}

		Customer() {
			cout << "I am inside Customer's default constructor" << endl;
		}

		void printCustomerInfo() {

			cout << "Customer Information" << endl
			     << "Name : " << name << endl
			     << "Age : " << age << endl;
			   
		}

};

int main() {

	// Customer* cptr1 = new Customer; // default constructor is invoked

	Customer* cptr2 = new Customer("Pranav", 20); // parameterised constructor is invoked

	// cout << "name : " << (*cptr2).name << endl;
	// cout << "age : " << (*cptr2).age << endl;

	// (*cptr2).printCustomerInfo();

	// cout << "name : " << cptr2->name << endl;
	// cout << "age : " << cptr2->age << endl;

	cptr2->printCustomerInfo();

	return 0;
}