
#include<iostream>
#include<queue>

using namespace std;

int main() {

    string str = "aaaabbbbcccc";

    int freq[26] = {0};
    for(char ch : str) 
        freq[ch-'a']++;

    // for(int i=0; i<26; i++) {
    //     cout << freq[i] << " ";
    // }

    // cout << endl;

    priority_queue<pair<int, char>> maxHeap;
    for(int i=0; i<26; i++) {
        if(freq[i] > 0) {
            maxHeap.push({freq[i], i+'a'});
        }
    }

    // while(!maxHeap.empty()) {
    //     pair<int, char> p = maxHeap.top();
    //     maxHeap.pop();
    //     cout << p.first << " " << p.second << endl;
    // }

    string out = "";

    while(!maxHeap.empty()) {
        if(maxHeap.size() == 1) {
            pair<int, char> pL = maxHeap.top(); maxHeap.pop();
            if(pL.first == 1) {
                out += pL.second;
            } else {
                out = "";
            }
        } else {
            pair<int, char> pL1 = maxHeap.top(); maxHeap.pop();
            pair<int, char> pL2 = maxHeap.top(); maxHeap.pop();
            
            out += string(1, pL1.second) + string(1, pL2.second);
            
            pL1.first--;
            if(pL1.first > 0) {
                maxHeap.push(pL1);
            }

            pL2.first--;
            if(pL2.first > 0) {
                maxHeap.push(pL2);
            }

        }
    }

    cout << out << endl;

    return 0;
}