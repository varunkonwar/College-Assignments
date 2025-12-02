#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* insNode(Node*&, int, int );
void delNode(Node*&, Node*);
void displist(Node*);
int countNodes(Node*);
void deletelist(Node*&);

// main function
int main(){

    Node* head = nullptr;

    Node* node1 = insNode(head, 10, 1);
    Node* node2 = insNode(head, 20, 2);
    Node* node3 = insNode(head, 30, 3);
    Node* node4 = insNode(head, 40, 4);

    cout << "\nBefore: ";
    displist(head);
    
    insNode(head, 35, 4);
    
    cout << "\nAfter: ";
    displist(head);
    
    delNode(head, node2);

    cout << "\nAfter: ";
    displist(head);
    
    deletelist(head);
    displist(head);

    return 0;
}
Node* insNode(Node*& head, int value = -1, int position = -1){
    if (value == -1 && position == -1) {
        cout << "\nInvalid value & position!" << endl;
        return nullptr;
    }

    // calls the function only one time preventing
    // O(n+n) worst case for multiple checks in (if conditions)
    int n = countNodes(head);

    // using 1-based indexing, valid positions are [1, n+1]
    if (position < 1 || position > n+1)
    {
        cout << "\nInvalid position, try adjacent position." << endl;
        return nullptr;
    }
    
    // Case 1: inserting at head
    if (!head && position == 1)
    {
        Node* newnode = new Node;
        newnode->data = value;
        newnode->next = head;
        head = newnode;
        return newnode;
    }
    
    // Case 2: inserting at any other location
    if (position <= n+1)
    {
        Node* currNode = head;
        for (int i = 1; i < position - 1; i++)
        {
            currNode = currNode->next;
        }
        Node* newnode = new Node;
        newnode->data = value;
        newnode->next = currNode->next;
        currNode->next = newnode;
        return newnode;
    }
    return nullptr;
}
void delNode(Node*& head, Node* delnode){
    if(!head || !delnode) return;

    // Case 1: deleting head node
    if (delnode == head)
    {
        Node* target = head;
        head = head->next;
        delete head;
        cout << "\nDeleted " << delnode << endl;
        return;
    }
    
    // Case 2: deleting other nodes
    Node* currNode = head;
    while (currNode->next && delnode != currNode->next)
    {
        currNode = currNode->next;
    }
    if (!currNode->next)
    {
        cout << "\nNode not found in the list" << endl;
        return;
    }
    Node* target = currNode->next;
    currNode->next = target->next;
    cout << "\nDeleted " << target->data;
    delete target;
}
void displist(Node* node){
    if (!node)
    {
        cout << "\nList doesn't exist" << endl;
        return;
    }
    while (node)
    {
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "nullptr" << endl;
    node = nullptr;
}
int countNodes(Node* head){
    int count = 0;
    if(!head) return 0;
    Node* currNode = head;
    while (currNode)
    {
        count++;
        currNode = currNode->next;
    }
    head = nullptr;
    return count;
} 
void deletelist(Node*& head){
    while (head)
    {
        Node* target = head;
        head = head->next;
        delete target;
    }
    cout << "\nList deleted!" << endl;
}
