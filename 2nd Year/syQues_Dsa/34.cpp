// create a doubly list
#include <iostream>
using namespace std;
struct Node {
    Node* prev;
    int data;
    Node* next;
};
Node* createnode(int value){
    Node* newnode = new Node;
    if (!newnode)
    {
        cout << "\nMemory allocation failed!";
        exit(1);
    }
    newnode->prev = nullptr;
    newnode->data = value;
    newnode->next = nullptr;
    return newnode;
}
void displayforw(Node* );
void displayback(Node* );
void deletelist(Node*& );
int main(){
    Node* node1 = createnode(10);
    Node* node2 = createnode(20);
    Node* node3 = createnode(30);
    Node* node4 = createnode(40);

    //linking nodes forward
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    //linking nodes backward
    node4->prev = node3;
    node3->prev = node2;
    node2->prev = node1;

    Node* head = node1;
    Node* tail = node4;

    cout << "\nDisplaying forward: ";
    displayforw(head);

    cout << "\nDisplaying backward: ";
    displayback(tail);

    deletelist(head);
    cout << "\nAll nodes successfully deleted !";
    
    return 0;
}
void displayforw(Node* head){
    cout << "\n";
    if(!head) return;
    while (head)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "Null" << endl;
}
void displayback(Node* tail){
    cout << "\n";
    if(!tail) return;
    while (tail)
    {
        cout << tail->data << " -> ";
        tail = tail->prev;
    }
    cout << "Null" << endl;
}
void deletelist(Node*& head){
    if(!head) return;
    while (head)
    {
        Node* target = head;
        head = head->next;
        delete target;
    }
}