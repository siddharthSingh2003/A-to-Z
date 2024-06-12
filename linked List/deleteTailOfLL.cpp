#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
Node *convertarr2LL(vector<int> &arr)
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

Node* deleteTail(Node* head){
    if(head == NULL || head -> next == NULL)
        return NULL;
    Node *temp = head;
    while(temp -> next-> next != NULL){
        temp = temp->next;
    }
    delete (temp->next);
    temp->next = nullptr;

    return head;
}

void traverseLL(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = convertarr2LL(arr);

    cout << "Original Linked List: ";
    traverseLL(head);

    head = deleteTail(head);

    cout << "Linked List after deleting tail: ";
    traverseLL(head);

    return 0;
}