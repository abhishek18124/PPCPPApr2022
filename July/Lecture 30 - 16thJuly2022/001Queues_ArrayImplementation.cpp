#include<iostream>

using namespace std;

template<typename T>
class queue {

	T* A; //internal representation of the queue
	int f; // to store the index at which we have perform the last pop operation
	int r; // to store the index at which we have perform the last push operation
	int count;
	int n; // to represent the capacity of the queue

	public :

		queue(int n) {
			A = new T[n];
			this->n = n;
			f = -1;
			r = -1;	
			count = 0;	
		}

		void push(T val) {
			if(r+1 == n) {
				// overflow condn.
				return;
			}
			r = r+1;
			A[r] = val;
			count++;
		}

		void pop() {
			if(f == r) {
				// underflow condn.
				return;
			}
			f = f+1;
			count--;
		}

		T front() {
			return A[f+1];
		}

		bool empty() {
			return f == r;
		}

		int size() {
			return count;
		}

};

int main() {

	queue<int> q(5);

	cout << "size : " << q.size() << endl;
	q.empty() ? cout << "Queue is empty!" << endl:
	            cout << "Queue is not empty!" << endl;

	q.push(10);
	q.push(20);
	q.push(30);

	cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;

	q.pop();

	cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;

	q.pop();

	cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;

	q.pop();
	q.empty() ? cout << "Queue is empty!" << endl:
	            cout << "Queue is not empty!" << endl;

	return 0;
}