#include <stdio.h>

int binarySearch(int arr[], int , int , int);

int main () {

  int test_array[10] = {2, 5, 8, 10, 25, 30, 33, 38, 45, 50} ,size, num;
  size = sizeof(test_array)/sizeof(test_array[0]);
  num = 50;

  int result = binarySearch(test_array, 0, size - 1, num );
  printf("Your number is %d\n", result);

  return 0;
}

int binarySearch(int arr[], int l, int r, int x) {
  int mid, i;

  for(i = 0; i < l + r; i++) {
    mid = (l + r)/2;
    if(arr[mid] == x) {
      return mid;
    }

    if(x > arr[mid]) {
      l = mid + 1;
    }

    else {
      r = mid - 1;
    }
  }
}
