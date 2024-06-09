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
    if (arr.empty())
        return nullptr;

    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    { // Start from index 1
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

int lengthOfLL(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
void traverseLL(Node *head)
{
    Node *temp = head;
    while (temp)
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
    
    cout << lengthOfLL(head)<<endl;
    traverseLL(head);
    return 0;
}
