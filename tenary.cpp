#include <iostream>

int main() {
  int number = 9;

  // std::cout << "Enter a number ";
  // std::cin >> number;

  // true: 0
  // false: 1

  std::cout << (number % 2) << std::endl;

  number % 2 ? 
      std::cout << "Number is even" << std::endl 
      : 
      std::cout << "Number is odd" << std::endl;

  // std::cout << (number % 2 ? "Number is even" : "Number is odd") << std::endl; 

  return 0;
}