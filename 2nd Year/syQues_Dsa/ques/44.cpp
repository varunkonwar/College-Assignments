// Write a program to implement queue using linked list. Add new elements to the queue 
// and remove elements from the queue represented by linked list. Also check whether the 
// queue is full or empty.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    bool isEmpty() {
        return front == nullptr;
    }

    bool isFull() {
        // Try allocating a new node. If allocation fails, consider it full.
        Node* temp = new(nothrow) Node;
        if (temp == nullptr) return true;
        delete temp;
        return false;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow. Cannot enqueue " << value << endl;
            return;
        }

        Node* newNode = new Node{value, nullptr};

        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow. Nothing to dequeue." << endl;
            return -1;
        }

        Node* temp = front;
        int value = temp->data;

        front = front->next;
        if (!front) rear = nullptr;

        delete temp;
        return value;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Queue contents (front to rear): ";
        Node* temp = front;
        while (temp) {
            cout << temp->data;
            if (temp->next) cout << " -> ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    int choice, value;

    do {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Check Empty\n5. Check Full\n6. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;

            case 2:
                cout << "Dequeued value: " << q.dequeue() << endl;
                break;

            case 3:
                q.display();
                break;

            case 4:
                cout << (q.isEmpty() ? "Queue is empty." : "Queue is not empty.") << endl;
                break;

            case 5:
                cout << (q.isFull() ? "Queue is full." : "Queue is not full.") << endl;
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
