//Post Order Traversal in trees
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

void newNode(Node **root, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    *root = temp;
}

void postOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data;
}

int main()
{
    Node *head = NULL;

    newNode(&head, 4);
    newNode(&(head->left), 5);
    newNode(&(head->right), 3);
    newNode(&(head->left->left), 8);
    newNode(&(head->left->right), 10);
    postOrder(head);

    return 0;
}
