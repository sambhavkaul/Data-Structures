#include <iostream>
#include <queue>
using namespace std;

struct BstNode {
    int data;
    BstNode* left;
    BstNode* right;
};

void levelOrder(BstNode* root) {
    if(root == NULL) {
        return;
    }
    queue<BstNode*> Q;                  //Queue for level order traversal
    Q.push(root);

    while(!Q.empty()) {
        BstNode* current = Q.front();
        cout << current -> data;

        if(current -> left != NULL) {
            Q.push(current -> left);
        }
        if(current -> right != NULL) {
            Q.push(current -> right);
        }
        Q.pop();         //Removing the visited element
    }
}
