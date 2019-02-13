#include <stdio.h>

int binarySearch(int arr[], int, int, int);

int main() {
  int test_array[5] = {1, 5, 23, 66, 89}, i, num = 1, size;
  size = sizeof(test_array)/sizeof(test_array[0]);

  int result = binarySearch(test_array, 0, size - 1, num);

  printf("Your index is %d\n", result);

  return 0;
}

int binarySearch(int arr[], int l, int r, int num){
  int mid = (l + r)/2;

  if(arr[mid] == num) {
    return mid;
  }
  else {
    if(arr[mid] > num){
      return binarySearch(arr, l, mid - 1, num);
    }
    else {
      return binarySearch(arr, mid + 1, r, num );
    }
  }

}
