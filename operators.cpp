#include <iostream>

int main() {
  int x = 3;
  int y = x + 3;
  int z = x / 3;
  int w = x - 3;
  int m = x % 3;
  std::cout << y << std::endl;
  std::cout << z << std::endl;
  std::cout << w << std::endl;
  std::cout << m << std::endl;

  // type conversion
  int var1 = 14;
  int var2 = 20;
  double div = (double) var1 / (double) var2;
  std::cout << div << std::endl;

  return 0;
}