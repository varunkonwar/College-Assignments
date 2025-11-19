// Write a program to take a number k and split the linked list after kth position. 
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void append(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};

    if (!head) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

Node* split(Node* head, int k) {
    if (!head || k <= 0) return nullptr;

    Node* temp = head;
    for (int i = 1; i < k && temp->next; i++) {
        temp = temp->next;
    }

    Node* second = temp->next;
    temp->next = nullptr;
    return second;
}

void display(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    append(head, 10);
    append(head, 20);
    append(head, 30);
    append(head, 40);
    append(head, 50);

    cout << "Original List: ";
    display(head);

    int k;
    cout << "Enter k: ";
    cin >> k;

    Node* second = split(head, k);

    cout << "First part: ";
    display(head);

    cout << "Second part: ";
    display(second);

    return 0;
}
