#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void Enqueue(int x) {
    Node* temp = new Node();
    temp -> data = x;
    temp -> next = NULL;

    if(front == NULL && rear == NULL) {
        front = rear = temp;
        return;
    }
    rear -> next = temp;
    rear = temp;
}

void Dequeue() {
    Node* temp = front;
    if(front == NULL) {
        cout << "Empty";
        return;
    }
    if(front == rear) {
        front = rear = NULL;
    }
    else {
        front = front -> next;
    }

    delete temp;
    
}

void Display() {
    Node* temp = front;

    while(temp != NULL) {
        cout << temp -> data << endl;
        temp = temp -> next;
    }
}

int main() {
    Enqueue(2);
    Enqueue(4);
    Enqueue(6);
    Dequeue();
    Display();
    return 0;
}