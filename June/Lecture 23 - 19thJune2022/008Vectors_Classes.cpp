#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class customer {

public:

	int age;
	string name; 
	
	customer(string name, int age) {
		this->age = age;
		this->name = name;
	}	
};

bool myComparator(customer c1, customer c2) {
	// return c1.name < c2.name; // for inc. order
	return c1.age < c2.age; // for inc. order
}

int main() {

	vector<customer> v;

	customer c1("Prateek", 21);
	customer c2("Archit", 19);
	customer c3("Ishita", 22);
	customer c4("Antriksh", 10);
	customer c5("Shreya", 12);

	v.push_back(c1);
	v.push_back(c2);
	v.push_back(c3);
	v.push_back(c4);
	v.push_back(c5);

	for(auto x : v) {
		cout << x.name << " " << x.age <<  endl;
	}

	cout << endl;

	sort(v.begin(), v.end(), myComparator);

	for(auto x : v) {
		cout << x.name << " " << x.age << endl;
	}

	return 0;
}