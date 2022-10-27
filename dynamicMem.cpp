#include <iostream>

int main() {
  
  // // create pointer
  // int *pNum = nullptr;

  // // assign pointer a dynamic memory
  // pNum = new int;

  // int age;

  // std::cout << "enter your age: ";
  // std::cin >> age;

  // *pNum = age;

  // std::cout << "Your age is " << *pNum << "\n";
  // std::cout << "address " << pNum << "\n";

  // // delete the memory pointer
  // delete pNum;

  char *pGrades = nullptr;

  int size;
  std::cout << "enter size of arr: ";
  std::cin >> size;

  pGrades = new char[size];

  for (int i = 0; i < size ; i++) {
    std::cout << "enter grade #" << i + 1 << ": ";
    std::cin >> pGrades[i];
  }

  for (int j = 0; j < size; j++) {
    std::cout << pGrades[j] << " "; 
  }

  delete[] pGrades;
  return 0;
}