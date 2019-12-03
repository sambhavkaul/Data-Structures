#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head;


void insertBeg(int x) {
    Node* temp = new Node();
    temp -> data = x;
    temp -> next = head;
    head = temp;
}

void insertEnd(int x) {
    Node* temp = new Node();
    temp -> data = x;
    temp -> next = NULL;

    if(head == NULL) {
        head = temp;
    }

    else {
        Node* temp1 = head;
        while(temp1 -> next != NULL) {
            temp1 = temp1 -> next;
        }

        temp1 -> next = temp;

    }
}

void insertMiddle(int x, int pos) {
    Node* temp = new Node();
    temp -> data = x;
    temp -> next = NULL;

    if(pos == 1) {
        temp -> next = head;
        head = temp;
        return;
    }
    
    Node* temp1 = head;
    for(int i = 0; i < pos - 2; i++) {
        temp1 = temp1 -> next;
    }
    temp -> next = temp1 -> next;
    temp1 -> next = temp;  
}

void delBeg() {
    Node* temp = head;

    if(temp == NULL) {
        return;
    }
    head = temp -> next;
    delete temp;
}

void delEnd() {
    Node* temp = head;
    Node* temp1 = temp;

    while(temp -> next != NULL) {
        temp1 = temp;
        temp = temp -> next;
    }

    temp1 ->next = NULL;
    delete temp;

}

void delMid(int pos) {
    Node* temp = head;
    Node* temp1 = head;

    if(pos == 1) {
        head = temp -> next;
        delete temp;
        return;
    }

    for(int i = 0; i < pos - 1; i++) {
        temp1 = temp;   //n -1
        temp = temp -> next;    //n
    }

    temp1 -> next = temp -> next;
    delete temp;


}

void printList() {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << endl;
        temp = temp -> next;
    }
}

int main() {

    head = NULL;

    int num, beg, mid, end, pos;

    while(1) {

        cout << "What operation do you want to perform ?" << endl;
        cin >> num;

        switch(num) {
                case 1: cout << "Enter the number" << endl; 
                        cin >> beg; 
                        insertBeg(beg);
                break;

                case 2: cout << "Enter the number" << endl; 
                        cin >> end; 
                        insertEnd(end);
                break;

                case 3: cout << "Enter the number and position" << endl; 
                        cin >> mid >> pos; 
                        insertMiddle(mid, pos);
                break;

                case 4: printList();
                break;

                case 5: delBeg();
                break;

                case 6: delEnd();
                break;

                case 7: cout << "Enter the position" << endl;
                        cin >> pos;
                        delMid(pos);
                break;
            
                default: cout << "Exited";
                break;
            }
        if(num > 7) {
            break;
        }
    }
 

    return 0;
}