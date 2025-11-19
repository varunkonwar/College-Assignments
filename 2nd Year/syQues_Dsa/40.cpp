// Write a program to implement stack using linked list. Use push and pop operations on the 
// stack by inserting nodes and deleting nodes from the linked list. Also check if the stack is 
// full or empty. 
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;

public:
    Stack() : top(nullptr) {}

    bool isEmpty() {
        return top == nullptr;
    }

    bool isFull() {
        // Attempt to allocate memory to check fullness
        Node* test = new(nothrow) Node;
        if (test == nullptr) return true;
        delete test;
        return false;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow. Cannot push " << value << endl;
            return;
        }

        Node* newNode = new Node{value, top};
        top = newNode;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow. Nothing to pop." << endl;
            return -1;
        }

        Node* temp = top;
        int value = temp->data;
        top = top->next;
        delete temp;
        return value;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }

        Node* temp = top;
        cout << "Stack contents (top to bottom): ";
        while (temp) {
            cout << temp->data;
            if (temp->next) cout << " -> ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Check Empty\n5. Check Full\n6. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                cout << "Popped value: " << s.pop() << endl;
                break;

            case 3:
                s.display();
                break;

            case 4:
                cout << (s.isEmpty() ? "Stack is empty." : "Stack is not empty.") << endl;
                break;

            case 5:
                cout << (s.isFull() ? "Stack is full." : "Stack is not full.") << endl;
                break;

            case 6:
                cout << "Exiting." << endl;
                break;

            default:
                cout << "Invalid choice. Try again." << endl;
        }

    } while (choice != 6);

    return 0;
}
