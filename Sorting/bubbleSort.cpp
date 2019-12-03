#include <iostream>
using namespace std;

void bubbleSort(int A[], int size) {

    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp; 
            }
        }
    }
}

int main() {

    int A[] = {4, 8, 1, 9, 0};
    bubbleSort(A, 5);

    for(int i = 0; i < 5; i++) {
        cout << A[i] << endl;
    }
    return 0;
}