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
			n = n+1;
			A = new T[n];
			this->n = n;
			f = 0;
			r = 0;	
			count = 0;	
		}

		void push(T val) {
			if((r+1)%n == f) {
				// overflow condn.
				return;
			}
			r = (r+1)%n;
			A[r] = val;
			count++;
		}

		void pop() {
			if(f == r) {
				// underflow condn.
				return;
			}
			f = (f+1)%n;
			count--;
		}

		T front() {
			return A[(f+1)%n];
		}

		bool empty() {
			return f == r;
		}

		int size() {
			return count;
		}

		void print() {
			for(int i=(f+1)%n; i != (r+1)%n; i=(i+1)%n) {
				cout << A[i] << " ";
			}
			cout << endl;
		}

};



int main() {

	queue<int> q(5);

	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);

	q.print();

	q.pop();

	q.print();

	q.push(60);

	q.print();

	q.pop();

	q.push(70);

	q.print();

	return 0;
}
