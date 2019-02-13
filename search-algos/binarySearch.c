#include <stdio.h>

int binarySearch(int arr[], int , int , int);

int main () {
  //Making an test array of numbers
  int test_array[10] = {2, 5, 8, 10, 25, 30, 33, 38, 45, 50} ,size, num;
  size = sizeof(test_array)/sizeof(test_array[0]);
  num = 50;

  //Storing the index number in a variable
  int result = binarySearch(test_array, 0, size - 1, num );
  printf("Your number is %d\n", result);

  return 0;
}

//A function to do teh binary search.
int binarySearch(int arr[], int l, int r, int x) {
  int mid, i;

  for(i = 0; i < l + r; i++) {
    mid = (l + r)/2;

    //if the chosen value is equal to the middle index value
    if(arr[mid] == x) {
      return mid;
    }

    //if the chosen numebr is greater than the middle index value
    if(x > arr[mid]) {
      l = mid + 1;
    }

    //if the chosen numebr is greater than the middle index value
    else {
      r = mid - 1;
    }
  }
}
