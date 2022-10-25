#include <iostream>

int getTotal(int sum[], int size);

int main() {
  // foreach is the same as for loop with less syntax
  // std::string students[] = {"sponge", "patri", "squid"};
  int students[] = {1, 2, 3};
  int size = sizeof(students)/ sizeof(students[0]);
  int total = getTotal(students, size);
  std::cout << "Sum is " << total << "\n";
  // for(int student : students) {
  //   std::cout << student << "\n";
  // }
  return 0;
}

// nice to pass array size in the function
int getTotal(int sum[], int size) {
  int total = 0;
  for(int i = 0; i < size; i++) {
    total += sum[i];
  }
  return total;
}