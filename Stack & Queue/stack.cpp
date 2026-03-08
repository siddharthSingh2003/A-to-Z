#include<bits/stdc++.h>
using namespace std;

#define MAX 2

class Stack{
    int arr[MAX];
    int top;


public:

Stack(){
    top = -1;
}

bool push(int x){
    if(top>=MAX-1){
        cout<<"Stack Overflow\n";
        return false;
    }
    arr[++top]=x;
    return true;

}

int pop(){
    if(top<0){
        cout<<"Stack underflow\n";
        return -1;
    }
    return arr[top--];
}

int peek(){
    if(top<0){
        cout<<"Stack is Empty\n";
        return -1;
    }
    return arr[top];
}
};


int main() {
    Stack s;

    // Push elements
    cout << "Pushing elements...\n";
    s.push(10);
    s.push(20);
    s.push(30);

    // Peek top element
    cout << "Top element: " << s.peek() << endl;

    // Pop elements
    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;

    // Peek again
    cout << "Top element after popping: " << s.peek() << endl;

    // Pop remaining element
    cout << "Popped: " << s.pop() << endl;

    // Try popping from empty stack
    cout << "Trying to pop from empty stack:\n";
    s.pop();

    return 0;
}