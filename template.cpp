#include <iostream>

template <typename T, typename U>

// helps make overode function that can use different datatypes
auto max(T x, U y) {
  return (x > y) ? x : y;
}

int main() {
  std::cout << "Max num is " << max(2,2.1);
  return 0;
}