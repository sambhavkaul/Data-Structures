#include <iostream>
using namespace std;

#define MAX 101
int A[MAX], top = -1;

void Push(int x) {
    if(top == MAX - 1) {
        cout << "Overflow";
        return;
    }
    top++;
    A[top] = x;
}

void Pop() {
    if(top == -1) {
        cout << "Underflow";
        return;
    }
    top--;
}

void Display() {
    for(int i = 0; i <= top; i++) {
        cout << A[i] << endl;
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