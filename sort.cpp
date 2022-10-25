#include <iostream>
void sortArr(int arr[], int size);
// bubble sort in c++
int main() {
  int arr[] = {10, 8, 15, 2, 3, 16, 5, 4, 7, 11};
  int size = sizeof(arr) / sizeof(arr[0]);
  sortArr(arr, size);
  // for(int num : arr) {
  //   std::cout << num << " ";
  // }
  for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
    std::cout << arr[i] << " ";
  }
  return 0;
}
 
void sortArr(int arr[], int size) {
  int temp;
  for (int i =0; i < size-1; i++) {
    for (int j =0; j < size-i-1; j++) {
      if(arr[j] > arr[j+1]) {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }

  }

  // for(int i =0; i < size; i++) {
  //   if(arr[i] > arr[i+1]) {
  //     temp = arr[i];
  //     arr[i] = arr[i+1];
  //     arr[i+1] = temp;
  //   }
  // }
};