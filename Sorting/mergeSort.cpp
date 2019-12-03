#include <iostream>
using namespace std;

void Merge(int* A, int* L, int nL, int* R, int nR) {
    int i = 0, j = 0, k = 0;

    while(i < nL && j < nR) {
        if(L[i] < R[j]) {
            A[k] = L[i];
            k++;
            i++;
        }
        else {
            A[k] = R[j];
            k++;
            j++;
        }
    }

    while(i < nL) {
        A[k] = L[i];
        k++;
        i++;
    }

    while(j < nR) {
        A[k] = R[j];
        k++;
        j++;
    }
}

void Sort(int *A, int size) {
    int mid, *L, *R;

    if(size < 2) {
        return;
    }
    mid = size / 2;

    L = new int(mid);
    R = new int(size - mid);

    for(int i = 0; i < mid; i++) {
        L[i] = A[i];
    }

    for(int i = mid; i < size - mid; i++) {
        R[i - mid] = A[i];
    }

    Sort(L, mid);
    Sort(R, size - mid);
    Merge(A, L, mid, R, size - mid);
    delete L;
    delete R;
}

int main() {
    
    int A[] = {5, 4, 9, 0 ,3, 5, 1};

    Sort(A, 7);

    for(int i = 0; i < 7; i++) {
        cout << A[i];
    }

    return 0;
}