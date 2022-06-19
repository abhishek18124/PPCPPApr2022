#include<iostream>

using namespace std;

class Customer {

	public :
		string name;
		int age;

		Customer(string name, int age) {
			cout << "I am inside Customer's parameterised constructor" << endl;
			this->name = name;
			this->age = age;
		}

		void printCustomerInfo() {

			cout << "Customer Information" << endl
			     << "Name : " << name << endl
			     << "Age : " << age << endl;
			   
		}

		bool operator>(Customer c) {
			return age > c.age; 
		}

};

int main() {

	Customer c1("Pranav", 20);
	c1.printCustomerInfo();

	Customer c2("Gaurav", 22);
	c2.printCustomerInfo();

	if(c1 > c2) { // c1.operator>(c2)
		cout << "Pranav is greater than Gaurav" << endl;
	} else {
		cout << "Gaurav is greater than Pranav" << endl;
	}

	return 0;
}