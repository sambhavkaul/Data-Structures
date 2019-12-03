#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top;

void Push(int x) {
    Node* temp = new Node();
    temp -> data = x;
    temp -> next = top;
    top = temp;
}

void Pop() {
    Node* temp = top;
    if(top == NULL) {
        cout << "Underflow";
        return;
    }
    top = top -> next;
    delete temp;
}

void Display() {
    Node* temp = top;
    while(temp != NULL) {
        cout << temp -> data << endl;
        temp = temp -> next;
    }
}

int main() {
    
    Push(2);
    Push(5);
    Push(9);
    Pop();
    Push(3);
    Display();

    return 0;
}