#include <iostream>

using namespace std;

void enqueue(int arr[], int, int);
void dequeue(int arr[], int);

int main() {

  int test_array[5], i, q_length = 0, num, value;
  start:

  cout << "Current queue\n";
  for(i = 0; i < q_length; i++) {
    cout << test_array[i] << '\n';
  }

  cout << "q_length" << q_length << '\n';
  cout << "Enter the coice you want";
  cin >> num;

  //If the coice is to enqueue then ask for value
  if(num == 1) {
    cout << "Enter the value you want to enter";
    cin >> value;
  }

  //Cases for the choices asked
  switch(num) {
    case 1 : enqueue(test_array, q_length, value);
             q_length++;
             goto start;
    break;
    case 2 : dequeue(test_array, q_length);
             q_length--;
             goto start;
    break;
    default : cout << "Invalid option";
    break;
  }

  return 0;
}

//Function for enqueue
void enqueue(int arr[], int len, int val) {

  int i;

  for(i = len; i >= 0; i--) {
    arr[i + 1] = arr[i];
  }
  arr[0] = val;
}

//Function for dequeue
void dequeue(int arr[], int len) {

  int i;

  cout << "Item removed";
  cout << arr[len - 1];
}
