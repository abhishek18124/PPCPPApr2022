#include<iostream>

using namespace std;

class CreditCard {
	public :

		string cardNumber;
		string bankName;

		CreditCard(string cn, string bn) {
			cout << "Inside CreditCard's parameterised constructor" << endl;
			cardNumber = cn;
			bankName = bn;
		}

};

class Customer {

	public :
		string name;
		int age;
		CreditCard card; // member object

		Customer(string n, int a, string cn, string bn):name(n), age(a), card(cn, bn) {
			cout << "I am inside Customer's parameterised constructor" << endl;
			// name = n;
			// age = a;
		}

		void printCustomerInfo() {

			cout << "Customer Information" << endl
			     << "Name : " << name << endl
			     << "Age : " << age << endl;
			   
		}

};

int main() {

	Customer c1("Pranav", 20, "1234-5678", "SBI");
	c1.printCustomerInfo();

	return 0;
}