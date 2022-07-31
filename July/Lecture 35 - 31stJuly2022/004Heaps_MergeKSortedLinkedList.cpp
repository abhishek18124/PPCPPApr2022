/*

    Given k sorted linked list, merge them and print the sorted output.

    k = 3
    Input : 1->3->5
            2->4->6 
            0->8->7
        
    Output: 0->1->2->3->4->5->6->7->8

*/

#include<iostream>
#include<queue>
#include<vector>

using namespace std;

class node {

    public :
        
        int data;
        node* next;

        node(int data) {
            this->data = data;
            this->next = NULL;
        }
};

void insertAtHead(node*& head, int data) {
    
    node* n = new node(data);
    n->next = head;
    head = n;

}

void printLinkedList(node* head) {

    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    
    cout << endl;

}

class nodeComparator {

    public :

        // return true when swap is required
        bool operator()(node* a, node* b) {
            return b->data < a->data; // if child(data) < parent(data), we swap
        }

};

node* mergeKSortedLinkedLists(vector<node*> v) {

    node* head = new node(-1);
    node* temp = head;

    priority_queue<node*, vector<node*>, nodeComparator> minHeap;

    for(int i=0; i<v.size(); i++) {
        minHeap.push(v[i]);
    }

    while(!minHeap.empty()) {
        node* minNode = minHeap.top(); minHeap.pop();
        temp->next = minNode;
        temp = temp->next;

        if(minNode->next) { // minNode->next != NULL
            minHeap.push(minNode->next);
        }
    }

    head = head->next; // to skip the sentinel/dummy node
    return head;

}

int main() {

    node* head1 = NULL; 

    insertAtHead(head1, 5);
    insertAtHead(head1, 3);
    insertAtHead(head1, 1);

    printLinkedList(head1);

    node* head2 = NULL; 

    insertAtHead(head2, 6);
    insertAtHead(head2, 4);
    insertAtHead(head2, 2);

    printLinkedList(head2);

    node* head3 = NULL; 

    insertAtHead(head3, 8);
    insertAtHead(head3, 7);
    insertAtHead(head3, 0);

    printLinkedList(head3);

    vector<node*> v = {head1, head2, head3}; //  K = 3

    node* head = mergeKSortedLinkedLists(v);

    printLinkedList(head);

    return 0;
}
