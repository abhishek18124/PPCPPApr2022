#include<iostream>

using namespace std;

class Customer {

	public :
		const string id;
		string name;
		int age;

		Customer(string name, int age, string id) : id(id) {
			cout << "I am inside Customer's parameterised constructor" << endl;
			this->name = name;
			this->age = age;
		}

		void printCustomerInfo() const {

			cout << "Customer Information" << endl
			     << "Name : " << name << endl
			     << "Age : " << age << endl
			     << "Id : " << id << endl;
			   
		}

};

int main() {

	Customer c1("Pranav", 20, "1234");
	c1.printCustomerInfo();

	return 0;
}