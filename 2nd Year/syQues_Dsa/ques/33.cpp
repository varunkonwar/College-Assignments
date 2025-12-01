// Implement linked list in a program by writing functions for the following: 
// a. Create a singly linked list of n nodes 
// b. Count the number of nodes in the list 
// c. Print the values of all the nodes 
// d. Add a node at first, last and kth position in the linked list 
// e. Delete a node from first, last and kth position 
// f. Search for an element in the list. If found, return the position of the node. If not 
//    found, return a negative value. 
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void displaylist(Node*);
void deletelist(Node*&);
void deletenode(Node*&, Node*&);
void searchNode(Node*, Node*);
void insertNode(Node*&, int, int);

Node* createnode(int value){
    Node* newnode = new Node;
    newnode->data = value;
    newnode->next = nullptr;
    return newnode;
}
int main(){
    Node* node1 = createnode(10);
    Node* node2 = createnode(20);
    Node* node3 = createnode(30);
    Node* node4 = createnode(40);
    Node* node5 = createnode(50);
    
    node1->next = node2;            // linking the nodes manually
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    
    Node* head = node1;
    searchNode(head, node3);
    
    cout << "\nBefore Deleting nodes: ";
    displaylist(head);
    
    deletenode(head, node1);
    deletenode(head, node5);
    
    cout << "\nAfter Deleting nodes: ";
    displaylist(head);
    searchNode(head, node3);
    
    insertNode(head, 45, 5);
    insertNode(head, 5, 1);
    displaylist(head);

    deletelist(head);
    head = NULL;
    
    displaylist(head);
    
    return 0;
}
void insertNode(Node*& head, int data, int insPost){
    
}
void displaylist(Node* node){
    int count = 0;
    if(!node){
        cout << "\nLink doesn't exist to show here!" << endl;
        return;
    }
    cout << "List: ";
    while (node)
    {
        count++;
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "nullptr " << endl;
    cout << "There are " << count << " nodes present in the list" << endl;
}
void searchNode(Node* head, Node* schNode){
    if(!head || !schNode) return;

    int count = 1;
    while (head != schNode)
    {
        head = head->next;
        count++;
    }
    cout << "\nHere " << head->data << " is present at node " << count << endl;
}

void deletelist (Node*& node){
    if (!node) return;
    while (node)
    {
        Node* target = node;
        node = node->next;
        delete target;
    }
    cout << "\nList deleted successfully!" << endl; 
}
void deletenode(Node*& head, Node*& delnode){       //totally deleting delnode from memory
    if(!head || !delnode) return;

    //Case 1: deleting head
    if (head == delnode)
    {
        Node* target = head;
        head = head->next;
        cout << "\nDeleted " << target->data << " from the list" << endl;
        delete target;
        return;
    }
    
    //Case 2: deleting other nodes
    Node* currNode = head;
    while (currNode->next != delnode && currNode->next)
    {
        currNode = currNode->next;
    }  
    if (!currNode->next)
    {
        cout << "\nValue not found!" << endl;
        return;
    }
    
    //if found, then unlink and delete 
    Node* target = currNode->next;
    currNode->next = target->next;
    cout << "\nDeleted " << target->data << " from the list" << endl;
    delete target;
    delnode = nullptr;
    return;
}