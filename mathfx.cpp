#include <iostream>
#include <cmath>

int main() {
  int x = 4;
  int y = 16;
  double grade = 4.5;
  int z = std::max(4, 16);
  int w = std::min(4, 16);
  int m = pow(x, 2);

  std::cout << z << std::endl;
  std::cout << w << std::endl;
  std::cout << m << std::endl;
  std::cout << round(grade) << std::endl;
  std::cout << ceil(grade) << std::endl;
  std::cout << floor(grade) << std::endl;
  return 0;
}