#include <iostream>

int main() {
  srand(time(NULL));
  int randNum = rand() % 5 + 1;
  switch (randNum)
  {
  case 1:
    std::cout << "I need playing console" << std::endl;
    break;
  case 2:
    std::cout << "I need t-shirt" << std::endl;
    break;
  case 3:
    std::cout << "I need some money" << std::endl;
    break;
  case 4:
    std::cout << "I need guitar" << std::endl;
    break;
  case 5:
    std::cout << "I need car" << std::endl;
    break;
  default:
    std::cout << "Invalid something..." << std::endl;
    break;
  }
  return 0;
}