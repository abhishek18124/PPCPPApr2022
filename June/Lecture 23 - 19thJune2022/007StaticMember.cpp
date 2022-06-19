#include<iostream>

using namespace std;

class Customer {

	public :
		const string id;
		string name;
		int age;
		static int count; // shared by all the objects therefore a.k.a class member

		Customer(string name, int age, string id) : id(id) {
			count++;
			cout << "I am inside Customer's parameterised constructor" << endl;
			this->name = name;
			this->age = age;
		}

		static void printCustomerInfo() const {

			cout << "Customer Information" << endl
			     << "Name : " << name << endl
			     << "Age : " << age << endl
			     << "Id : " << id << endl;
			   
		}

};

int Customer::count = 0;

int main() {

	Customer c1("Pranav", 20, "1234");
	Customer c2("Hargun", 18, "1234");
	Customer c3("Sourav", 22, "1234");
	
	cout << Customer::count << endl;
	// cout << c3.count << endl;

	return 0;
}