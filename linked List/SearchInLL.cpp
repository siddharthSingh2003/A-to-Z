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

int chackifPresent(Node *head, int k)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == k)
            return 1;
        temp = temp->next;
    }
    return 0;
}
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
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = convertarr2LL(arr);
    cout << chackifPresent(head, 3);
}