#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;

//Function to reverse linkedlist using stack
Node *reverseList(Node* head) 
{ 
    stack<Node *> stk; 
    Node* ptr = head; 
    while (ptr->next != NULL) { 
        stk.push(ptr); 
        ptr = ptr->next; 
    }  
    head = ptr; 
    while (!stk.empty()) { 
        ptr->next = stk.top(); 
  
        ptr = ptr->next; 
        stk.pop(); 
    } 
      
    ptr->next = NULL; 
      
    return head; 
} 

void print(struct Node* p)
{
    if (p==NULL)return;
    cout <<p->data<<" ";
    print(p->next);
}
//Insert node at end
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
    insertEnd(1);
    insertEnd(2);
    insertEnd(3);
    insertEnd(4);
    insertEnd(5);
    print(head);
    cout<<"\n";
    head=reverseList(head);
    print(head);
    return 0;
}
