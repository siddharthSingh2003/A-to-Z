#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        public:
        Node(int data1){
            data = data1;
            next = nullptr;
        }
};

int main(){
    vector<int> arr = {2, 3, 4, 5};
    Node *y = new Node(arr[0]);
    cout << y << endl;
    cout << y->data << endl;

}