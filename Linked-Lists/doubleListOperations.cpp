#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* head;

Node* getNewNode(int x) {
    Node* newNode = new Node();
    newNode -> data = x;
    newNode -> left = NULL;
    newNode -> right = NULL;

    return newNode;
}

void insertHead(int x) {
    Node* temp = getNewNode(x);

    if(head == NULL) {
        head = temp;
        return;
    }
    head -> left = temp;
    temp -> right = head;
    head = temp;
}

void Display() {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << endl;
        temp = temp -> right;
    }
}

int main() {

    insertHead(4);
    insertHead(8);
    insertHead(9);
    insertHead(3);
    Display();
    
    return 0;
}