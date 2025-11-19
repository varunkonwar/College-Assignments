// Write a program to implement queue using array. Add new elements to the queue and 
// remove elements from the queue represented by array. Check whether the queue is full or 
// empty. 
#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, size;
    int* arr;

public:
    Queue(int capacity) {
        size = capacity;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return rear == size - 1;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue " << value << endl;
            return;
        }

        if (isEmpty()) {
            front = 0;
        }

        arr[++rear] = value;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Nothing to dequeue." << endl;
            return -1;
        }

        int value = arr[front];

        if (front == rear) {
            // Reset when last element is removed
            front = rear = -1;
        } else {
            front++;
        }

        return value;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Queue contents: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int capacity;
    cout << "Enter queue capacity: ";
    cin >> capacity;

    Queue q(capacity);
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
