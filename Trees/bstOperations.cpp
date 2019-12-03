#include <iostream>
using namespace std;

struct BstNode {
    int data;
    BstNode* left;
    BstNode* right;
};

//Getting a new Node
BstNode* getNewNode(int data) {
    BstNode* temp = new BstNode();
    temp -> data = data;
    temp -> left = NULL;
    temp -> right = NULL;

    return temp;
}

//Insert a node
BstNode* Insert(BstNode* root, int data) {
    if(root == NULL) {
        root = getNewNode(data);
    }
    else if(data <= root -> data) {
        root -> left = Insert(root -> left, data);
    }
    else {
        root -> right = Insert(root -> right, data);
    }

    return root;
}

//Search a node
void Search(BstNode* root, int data) {
    if(root == NULL) {
        cout << "Not Found" << endl;
    }
    else if(root -> data == data) {
        cout << "Found" << endl;
    }
    else if(data <= root -> data) {
        Search(root -> left, data);
    }
    else{
        Search(root -> right, data);
    }

}
//Find minimum element
BstNode* findMin(BstNode* root) {
    if(root == NULL) {
        return root;
    }
    while(root -> left != NULL) {
        root = root -> left;
    }

    return root;
}

//Find maximum element
BstNode* findMax(BstNode* root) {
   if(root == NULL) {
        return root;
    }
    while(root -> right != NULL) {
        root = root -> right;
    }

    return root;
}

//Find height of tree
int findHeight(BstNode* root) {
    int left = 0, right = 0;

    if(root == NULL) {
        cout << "Empty Tree";
        return -1;
    }
    while(root -> left != NULL) {
        left++;
        root = root -> left;
    }
    while(root -> right != NULL) {
        right++;
        root = root -> right;
    }

    if(left > right) {
        return left + 1;
    }
    else {
        return right + 1;
    }
}

BstNode* Delete(BstNode* root, int data) {
    if(root == NULL) {
        return root;
    }
    else if(data < root -> data) {
        root -> left = Delete(root -> left, data);
    }
    else if(data > root-> data) {
        root -> right = Delete(root -> right, data);
    }

    //Data Found

    //Case : No child
    if(root -> left == NULL && root -> right == NULL) {
        delete root;
        root = NULL;
    } 

    //Case : Once child
    else if(root -> left == NULL) {
        BstNode* temp = root;
        root = root -> right;
        delete temp;
    }
    else if(root -> right == NULL) {
        BstNode* temp = root;
        root = root -> left;
        delete temp;
    }

    //Case : 2 children

    else {
        BstNode* temp = findMin(root -> right);
        root -> data = temp -> data;
        root -> right = Delete(root -> right, temp -> data);
    }

    return root;
}

int main() {

    BstNode* root = NULL;       //Empty List
    BstNode *max, *min;

    int num, insertNum, searchNum, delNum, height;

   while(1) {

        cout << "What operation do you want to perform ?" << endl;
        cin >> num;

        switch(num) {
                case 1: cout << "Enter the number" << endl; 
                        cin >> insertNum; 
                        root = Insert(root, insertNum);
                break;

                case 2: cout << "Enter the number" << endl; 
                        cin >> searchNum; 
                        Search(root, searchNum);
                break;

                case 3: max = findMax(root);
                        cout << "Max is" << max -> data << endl; 
                break;

                case 4: min = findMin(root);
                        cout << "Min is" << min ->data << endl;
                break;

                case 5: cout << "Enter the number to be deleted" << endl;
                        cin >> delNum;
                        Delete(root, delNum);
                break;

                case 6 : height = findHeight(root);
                        cout << height << endl;
                break;
            
                default: cout << "Exited";
                break;
            }
        if(num > 6) {
            break;
        }
    }

    return 0;
}