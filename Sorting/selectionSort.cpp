#include <iostream>
using namespace std;

void selectionSort(int A[], int size) {

    for(int i = 0; i < size - 1; i++) {
        int min = i;

        for(int j = i + 1; j < size; j++) {
            if(A[j] < A[min]) {
                min = j;
            }
        }

        int temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }
}

int main() {
    
    int A[] = {4, 8, 1, 9, 0};
    selectionSort(A, 5);

    for(int i = 0; i < 5; i++) {
        cout << A[i] << endl;
    }
    return 0;
}