#include <iostream>

int main() {
  int x;
  std::cout << "Enter a number ";
  std::cin >> x;

  if(x >= 20) {
    std::cout << "Number is greater than 20" << std::endl;
  }
  else if (x >= 50) {
    std::cout << "Number is greater than 50" << std::endl;
  }
  else {
    std::cout << "Number is out of range" << std::endl;
  }

  return 0;
}