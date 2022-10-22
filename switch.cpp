#include <iostream>

int main() {
  int month;
  std::cout << "Enter month (1-12): ";
  std::cin >> month;

  switch (month)
  {
  case 1:
    std::cout << "It is January" << std::endl;
    break;

  case 2:
    std::cout << "It is February" << std::endl;
    break;
  
  case 3:
    std::cout << "It is March" << std::endl;
    break;

  case 4:
    std::cout << "It is April" << std::endl;
    break;
  
  case 5:
    std::cout << "It is May" << std::endl;
    break;
  
  case 6:
    std::cout << "It is June" << std::endl;
    break;
  
  default:
    std::cout << "Please enter a valid month" << std::endl;
    break;
  }
  return 0;
}