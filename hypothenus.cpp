#include <iostream>
#include <cmath>

int main() {
  int a;
  int b;
  double c;

  std::cout << "Enter side A: ";
  std::cin >> a;

  std::cout << "Enter side B: ";
  std::cin >> b;

  c = sqrt((pow(a, 2) + pow(b, 2)));
  std::cout << "Hypothenus is " << c << std::endl;

  return 0;
}