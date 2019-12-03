#include <iostream>
using namespace std;

void insertionSort(int A[], int size) {
    for(int i = 1; i < size; i++) {
        int value = A[i];
        int hole = i;

        while(hole > 0 && A[hole - 1] > value) {
            A[hole] = A[hole - 1];
            hole--;
        }
        A[hole] = value;
    }
}

int main() {

	int array[] = {5, 1, 6, 2, 4, 3};
	// calling insertion sort function to sort the array
	insertionSort(array, 6);

    for(int i = 0; i < 6; i++) {
        cout << array[i] << endl;
    }
	return 0;

}