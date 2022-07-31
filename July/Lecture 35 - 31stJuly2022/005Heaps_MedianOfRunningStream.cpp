/*

Given a running stream of integers, design an algorithm to print the median 
of the numbers in the stream each time a new integer is added to the stream.

Example : Input = 4, 6, 2, 5,   3, 1,   7, 9,   8 . . .
          Output= 4, 5, 4, 4.5, 4, 3.5, 4, 4.5, 5 . . .

*/

#include<iostream>
#include<queue>

using namespace std;

int main() {

    int data;
    cin >> data;

    float median = data;
    cout << median << " ";

    priority_queue<int> leftMaxHeap;
    leftMaxHeap.push(data);

    priority_queue<int, vector<int>, greater<int>> rightMinHeap;

    while(true) {

        cin >> data;

        if(data == -1) {
            break;
        }

        if(data < median) {
            // insert the data in the leftMaxHeap
            if(leftMaxHeap.size() > rightMinHeap.size()) {
                rightMinHeap.push(leftMaxHeap.top());
                leftMaxHeap.pop();
                leftMaxHeap.push(data);
                median = (leftMaxHeap.top() + rightMinHeap.top())/2.0;
            } else if(leftMaxHeap.size() < rightMinHeap.size()) {
                leftMaxHeap.push(data);
                median = (leftMaxHeap.top() + rightMinHeap.top())/2.0;
            } else {
                leftMaxHeap.push(data);
                median = leftMaxHeap.top();
            }
        } else {
            // insert the data in the rightMinHeap
            if(rightMinHeap.size() > leftMaxHeap.size()) {
                leftMaxHeap.push(rightMinHeap.top());
                rightMinHeap.pop();
                rightMinHeap.push(data);
                median = (leftMaxHeap.top() + rightMinHeap.top())/2.0;
            } else if(rightMinHeap.size() < leftMaxHeap.size()) {
                rightMinHeap.push(data);
                median = (leftMaxHeap.top() + rightMinHeap.top())/2.0;
            } else {
                rightMinHeap.push(data);
                median = rightMinHeap.top();
            }
        }

        cout << median << " ";

    }

    cout << endl;

    return 0;
}