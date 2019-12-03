#include <iostream>
using namespace std;
#define MAX 101
int A[MAX], front = -1, rear = -1;

void Enqueue(int x) {
    if(rear == MAX - 1) {
        cout << "Queue is full";
        return;
    }
    else if(rear == -1 && front == -1) {
        front = 0;
        rear = 0;
        A[rear] = x;
    }
    else {
        rear++;
        A[rear] = x;
    }

} 

void Dequeue() {
    if(rear == -1 && front == -1) {
        cout << "Queue is empty";
    }
    else if(front == rear) {
        front = -1;
        rear = -1;
    }
    else {
        front++;
    }
}

void Display() {
    for(int i = front; i <= rear; i++) {
        cout << A[i] << endl;
    }
}

int main() {
    Enqueue(2);
    Enqueue(5);
    Enqueue(7);
    Enqueue(8);
    Dequeue();
    Dequeue();
    Display();

    return 0;
}