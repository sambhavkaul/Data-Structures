#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node* head;
//Function to print list linearly
void print(struct Node* p)
{
    if (p==NULL)return;
    cout <<p->data<<" ";
    print(p->next);
}

//Function to print list in reverse order
void printreverse(struct Node* p)
{
    if(p==NULL)return;
    print(p->next);
    cout<<p->data<<" ";
}

//Insert new node at the end of the list
void insertEnd(int x) 
{
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

//Driver code
int main()
{
    head=NULL;
    insertEnd(4);
    insertEnd(3);
    insertEnd(4);
    insertEnd(9);
    insertEnd(1);
    print(head);
    cout<<"\n";
    printreverse(head);

}
