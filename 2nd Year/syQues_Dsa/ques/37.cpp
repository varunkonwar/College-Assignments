// Write a program to merge two sorted linked lists. 
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

Node* mergeSorted(Node* head1, Node* head2) {
    if (!head1) return head2;
    if (!head2) return head1;

    Node* result = nullptr;
    Node* tail = nullptr;

    while (head1 && head2) {
        Node* picked;
        if (head1->data <= head2->data) {
            picked = head1;
            head1 = head1->next;
        } else {
            picked = head2;
            head2 = head2->next;
        }

        if (!result) {
            result = picked;
            tail = picked;
        } else {
            tail->next = picked;
            tail = picked;
        }
    }

    // Attach leftover nodes
    if (head1) tail->next = head1;
    if (head2) tail->next = head2;

    return result;
}

void display(Node* head) {
    while (head) {
        cout << head->data;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* list1 = nullptr;
    Node* list2 = nullptr;

    // Example sorted values
    append(list1, 1);
    append(list1, 3);
    append(list1, 5);
    append(list1, 9);

    append(list2, 2);
    append(list2, 4);
    append(list2, 6);

    cout << "List 1: ";
    display(list1);

    cout << "List 2: ";
    display(list2);

    Node* merged = mergeSorted(list1, list2);

    cout << "Merged List: ";
    display(merged);

    return 0;
}
