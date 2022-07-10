#include<iostream>

using namespace std;

class stack {

	int* arr; 
	int t; // represents the index of the top-most element on the stack inside the array that internally repr. stack
	int n; // max. capacity of the stack

	public :

		stack(int n) {
			arr = new int[n];
			t = -1;
			this->n = n;
		}

		void push(int val) {
			if(t == n-1) {
				// overflow
				return;
			}

			t = t+1;
			arr[t] = val;
		}

		void pop() {
			if(t == -1) {
				// underflow
				return;
			}
			t = t-1;
		}

		int top() {
			return arr[t];
		}

		bool empty() {
			return t == -1;
		}

		int size() {
			return t+1;
		}

};

int main() {

	stack s(5);

	cout << "size : " << s.size() << endl;
	cout << "isEmpty ? " << s.empty() << endl;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl; 
	cout << "isEmpty ? " << s.empty() << endl;

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl; 

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl; 

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl; 

    s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl; 

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "isEmpty ? " << s.empty() << endl;

	return 0;
}