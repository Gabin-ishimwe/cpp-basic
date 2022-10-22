#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main() {
  std::string name;
  int age;

  std::cout << "What is your age? ";
  std::cin >> age;

  std::cout << "what is your name? ";
  // std::cin >> name;
  // type in string with space
  std::getline(std::cin >> std::ws, name);


  std::cout << "Your name is " << name << std::endl;
  std::cout << "your age is " << age << std::endl;

  return 0;
}