#include <iostream>
using namespace std;

// void swap(int *a, int *b)
// {
// 	int temp; 
// 	temp = *a;
// 	*a = *b;
// 	*b = temp;
// }

int Partition(int* A, int start, int end) {
    int pivot = A[end];
    int pIndex = start;

    for(int i = start; i < end; i++) {
        if(A[i] <= pivot) {
            int temp = A[i];
            A[i] = A[pIndex];
            A[pIndex] = temp;
            pIndex++;
        }
    }

    int temp = A[pIndex];
    A[pIndex] = A[end];
    A[end] = temp;

    return pIndex;
}

void Sort(int* A, int start, int end) {

    if(start < end) {
        int pIndex = Partition(A, start, end);
        Sort(A, start, pIndex - 1);
        Sort(A, pIndex + 1, end);
    }
}

int main() {
    int A[] = {7, 4, 9, 0, 5, 1};
    Sort(A, 0, 5);

    for(int i = 0; i < 6; i++) {
        cout << A[i] << endl;
    }
}