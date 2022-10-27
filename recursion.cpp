#include <iostream>

int factorial(int num);

int recursionFactorial(int num);

int main() {

  std::cout << "factorial is " << factorial(0) << "\n";

  std::cout << "factorial with recursion " << recursionFactorial(2) << "\n";

  return 0;
}

int factorial(int num) {
  int result = 1;
  for(int i = num; i > 0; i --) {
     result *= i;
  }
  return result;
}

// easy to write expression but consumes lot of memory
// used mainly in sorting algorithms
int recursionFactorial(int num) {
  if(num > 0) {
    return num * recursionFactorial(num - 1);
  }
  return 1;
}

