#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

Node* convertArray2LL(vector<int> &arr){
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++){
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

Node* deleteKthelement(Node* head, int k){
    if (k==1){
        Node *temp = head;
        head = head->next;

        delete (temp);
        return head;
    }

    Node *temp = head;
    Node *prev = NULL;
    int cnt = 1;
    while(temp!=NULL){
        
        if (cnt==k){
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
        cnt++;
    }
    return head;
}



int printLL(Node* head){

    Node *temp = head;

    while(temp!= NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    return 0;
}


int main(){
    vector<int> arr = { 1, 2, 3, 4, 5, 6 };

    Node *head = convertArray2LL(arr);
    printLL(head);
    head = deleteKthelement(head, 3);
    printLL(head);

    return 0;
}