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

		Customer() {
			cout << "I am inside Customer's default constructor" << endl;
		}

		void printCustomerInfo() {

			cout << "Customer Information" << endl
			     << "Name : " << (*this).name << endl
			     << "Age : " << this->age << endl;
			   
		}

		bool isSame(Customer* cptr) {
			return cptr == this;
		}

};

int main() {

	Customer* cptr = new Customer("Pranav", 20); // parameterised constructor is invoked
	cptr->printCustomerInfo();

	Customer* cptr2 = new Customer("Gaurav", 22);

	cptr->isSame(cptr2) ? cout << "true" << endl :
	                     cout << "false" << endl; 


	return 0;
}