#include <iostream>

// function declarations are similar to does in c

void happyBirthday(std::string name);

int square(int side);

// global variable

int myNum = 3;

int main() {
  happyBirthday("Gabin");
  happyBirthday("Ishimwe");
  happyBirthday("Ishimwe");
  happyBirthday("Ishimwe");
  std::cout << "Global variable in main " << myNum << std::endl;
  int squareArea = square(4);
  int squareArea2 = square(2);
  std::cout << "Area of square is " << squareArea << std::endl; 
  std::cout << "Area of square is " << squareArea2 << std::endl; 
  return 0;
}

void happyBirthday(std::string name) {
  std::cout << "Happy Birthday " << name << std::endl;
}

int square(int side) {
  std::cout << "Global variable " << myNum << std::endl;
  return side * side;
}