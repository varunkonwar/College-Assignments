// Write a function to concatenate two linked lists. 
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
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

Node* concatenate(Node* head1, Node* head2) {
    if (!head1) return head2;
    if (!head2) return head1;

    Node* temp = head1;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = head2;
    return head1;
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

    append(list1, 1);
    append(list1, 2);
    append(list1, 3);

    append(list2, 4);
    append(list2, 5);

    cout << "List 1: ";
    display(list1);

    cout << "List 2: ";
    display(list2);

    Node* result = concatenate(list1, list2);

    cout << "Concatenated List: ";
    display(result);

    return 0;
}
