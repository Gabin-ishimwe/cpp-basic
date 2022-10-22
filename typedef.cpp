#include <iostream>

// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

int main() {
  text_t name = "Gabin";
  number_t age = 15;
  std::cout << name << std::endl;
  std::cout << age << std::endl;
  return 0;
}