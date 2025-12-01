// Write a program to implement stack using array. Use push and pop operations on the 
// array representation of the stack. Check whether the stack is full or empty. 
#include <iostream>
using namespace std;

class Stack{
    int* arr;
    int top;
    int capacity;

    public:
    Stack(int size){
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }
    ~Stack(){delete[] arr;}

    // push element onto stack
    void push(int data){
        if (isFull())
        {
            cout << "\nStack overflow! Cannot push " << data << endl;
            return;
        }
        cout << "Pushed " << data << " onto the stack" << endl;
        arr[++top] = data;
    }

    // pop element from the stack
    void pop (){
        if (top < 0)
        {
            cout << "\nStack underflow! No element to pop" << endl;
            return;
        }
        cout <<"Popped " << arr[top] << " from the stack" << endl;
        top--;
    }

    // get top element
    int peek(){
        if (top < 0)
        {
            cout << "\nStack is empty! " << endl;
            return -1;
        }
        return arr[top];
    }

    //check if stack is full
    bool isFull(){
        return (top == capacity-1);
    }

    // check if stack is empty
    bool isEmpty(){
        return (top<0);
    }

    // displaying the elements present in the stack
    void display(){
        if (top < 0)
        {
            cout << "\nStack is empty! " << endl;
            return;
        }
        cout << "\nStack elements: ";
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main(){
    Stack s1(3);

    s1.push(10);
    s1.push(30);
    s1.push(50);

    s1.display();
    cout << "Stack Full? " << (s1.isFull()?"Yes":"No") << endl;
    cout << "Stack Empty? " << (s1.isEmpty()?"Yes":"No") << endl;

    s1.push(70);

    return 0;
}