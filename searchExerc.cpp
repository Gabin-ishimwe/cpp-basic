#include <iostream>


int searchValue(int arr[], int size, int value);


int main() {
  int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,17,19,20};
  int size = sizeof(arr) / sizeof(arr[0]);

  int value;
  std::cout << "Enter a number in array ";
  std::cin >> value;

  int result = searchValue(arr, size, value);
  if(result != -1) {
    std::cout << "you got the value " << result;
  }
  else {
    std::cout << "you failed try again" << "\n";
  }



  return 0;
}

int searchValue(int arr[], int size, int value) {
  for (int i =0; i < size; i++) {
    if (arr[i] == value) {
      return arr[i];
    }
  }
  return -1;
}