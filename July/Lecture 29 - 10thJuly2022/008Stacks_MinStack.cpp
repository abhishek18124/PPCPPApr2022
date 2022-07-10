#include<iostream>
#include<stack>

using namespace std;

class custom_stack {

	stack<int> main_stack;
	stack<int> minimum_stack;

	public : 

		void push(int val) {
			main_stack.push(val);
			if(minimum_stack.empty() || val <= minimum_stack.top()) {
				minimum_stack.push(val);
			}
		}

		void pop() {
			if(empty()) {
				return;
			}

			int topElement = main_stack.top();
			main_stack.pop();

			if(topElement == minimum_stack.top()) {
				minimum_stack.pop();
			}
		}

		int size() {
			return main_stack.size();
		}

		bool empty() {
			return  main_stack.empty();
		}

		int top() {
			return main_stack.top();
		}

		int minTop() {
			return minimum_stack.top();
		}


};

int main() {

	custom_stack cs;

	cs.push(10);
	cs.push(5);
	cs.push(20);
	cs.push(5);
	cs.push(0);
	cs.push(30);

	cout << "top : " << cs.top() << endl;
	cout << "minTop : " << cs.minTop() << endl;

	cs.pop();

	cout << "top : " << cs.top() << endl;
	cout << "minTop : " << cs.minTop() << endl;

	cs.pop();

	cout << "top : " << cs.top() << endl;
	cout << "minTop : " << cs.minTop() << endl;

	cs.pop();

	cout << "top : " << cs.top() << endl;
	cout << "minTop : " << cs.minTop() << endl;

	cs.pop();

	cout << "top : " << cs.top() << endl;
	cout << "minTop : " << cs.minTop() << endl;

	cs.pop();

	cout << "top : " << cs.top() << endl;
	cout << "minTop : " << cs.minTop() << endl;

	return 0;
}



