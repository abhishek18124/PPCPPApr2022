#include<iostream>

using namespace std;

class Customer {

	public :
		char name[100];
		int age;
		char gender;
		double credits;

		void printCustomerInfo() {

			cout << "Customer Information" << endl
			     << "Name : " << name << endl
			     << "Age : " << age << endl
			     << "Gender : " << gender << endl
			     << "Credits : " << credits << endl << endl;

		}

};

// void printCustomerInfo(Customer c) {

// 	cout << "Customer Information" << endl
// 	     << "Name : " << c.name << endl
// 	     << "Age : " << c.age << endl
// 	     << "Gender : " << c.gender << endl
// 	     << "Credits : " << c.credits << endl << endl;

// }

int main() {

	Customer c1;

	strcpy(c1.name, "Pranav");
	c1.age = 20;
	c1.gender = 'M';
	c1.credits = 100;

	c1.printCustomerInfo();

	// printCustomerInfo(c1);

	// cout << "Customer Information" << endl
	//      << "Name : " << c1.name << endl
	//      << "Age : " << c1.age << endl
	//      << "Gender : " << c1.gender << endl
	//      << "Credits : " << c1.credits << endl << endl;

	Customer c2;

	strcpy(c2.name, "Gaurav");
	c2.age = 22;
	c2.gender = 'M';
	c2.credits = 0;

	c2.printCustomerInfo();

	// printCustomerInfo(c2);

	// cout << "Customer Information" << endl
	//      << "Name : " << c2.name << endl
	//      << "Age : " << c2.age << endl
	//      << "Gender : " << c2.gender << endl
	//      << "Credits : " << c2.credits << endl;

	return 0;
}