#include<iostream>

using namespace std;

template <typename T>
class stack {

	T* arr; 
	int t; // represents the index of the top-most element on the stack inside the array that internally repr. stack
	int n; // max. capacity of the stack

	public :

		stack(int n) {
			arr = new T[n];
			t = -1;
			this->n = n;
		}

		void push(T val) {
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

		T top() {
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

	stack<string> s(5);

	cout << "size : " << s.size() << endl;
	cout << "isEmpty ? " << s.empty() << endl;

	s.push("abc");
	s.push("def");
	s.push("ghi");
	s.push("jkl");
	s.push("mno");

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