#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;

    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *convertArray2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

int printLL(Node* head ){

    Node *temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = convertArray2LL(arr);
    printLL(head);
}