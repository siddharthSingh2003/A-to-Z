#include<bits/stdc++.h>
using namespace std;

#define MAX 100

class Queue{
    int arr[MAX];
    int rear, front;



public:

Queue(){
    front =0; 
    rear=-1;
}


bool push(int x){
    if(rear == MAX-1){
        cout<<"Queue overflow\n"; 
        return false;
    }
    arr[++rear]=x;
    return true;

}

int pop(){
    if(front>rear){
        cout<<"Queue Underflow\n";
        return -1;
    }
    return arr[front++];
}

int peek(){
    if(front>rear){
        cout<<"Queue is empty\n";
        return -1;
    }
    return arr[front];
}
};


int main(){
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.peek() << endl;

    cout << "Popped: " << q.pop() << endl;

    cout << "Front after pop: " << q.peek() << endl;

    return 0;
}