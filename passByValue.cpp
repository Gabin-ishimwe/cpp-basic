#include <iostream>

void swap(std::string &x, std::string &y);
void swapNum(const int &x, const int &y);

int main() {
  std::string x = "ishimwe";
  std::string y = "gabin";

  int a = 1;
  int b = 2;

  swap(x, y);

  swapNum(a, b);

  std::cout << x << "\n";
  std::cout << y << "\n";

  std::cout << a << "\n";
  std::cout << b << "\n";
  return 0;
}

// good practice to pass value in function by reference
void swap(std::string &x, std::string &y){
  std::string temp = x;
  x = y;
  y = temp;

}

void swapNum(const int &x, const int &y){
  int temp = x;
  x = y;
  y = temp;

}