#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};

//Printing the list
void printList(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << "\n";
        temp = temp -> next;
    }
}

//By returning the head reference
Node *pushAtHead(Node *head, int data) {
    Node *newData = new Node();
    newData -> data = data;
    newData -> next = head;
    head = newData;
    return head;
}

//By taking address of the head and changing
void pushAtHead(Node **head, int data) {
    Node *newData = new Node();
    newData -> data = data;
    newData -> next = *head;
    *head = newData;
}

int main() {
    
    Node *head = NULL;

    //With getting head reference as return
    head = pushAtHead(head, 5);
    head = pushAtHead(head, 10);

    //Without returning and sending the reference of head
    pushAtHead(&head, -5);
    pushAtHead(&head, 20);

    //Printing the list
    printList(head);
    return 0;
}
