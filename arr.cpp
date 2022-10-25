#include <iostream>

int main() {
  std::string cars[] = {"bmw", "corvette"};
  double prices[] = {1.4, 2.5, 8.5};
  // for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++) {
  for (int i = 0; i < sizeof(cars)/sizeof(std::string); i++) {
    std::cout << cars[i] << "\n";
  }
  return 0;
}