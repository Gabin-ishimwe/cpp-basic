#include <iostream>

int main() {
  int num;
  int tries=0;
  srand(time(NULL));
  int randNum = (rand() % 10) + 1;
  do {
    std::cout << "Guess a number: ";
    std::cin >> num;
    tries +=1;
    if(num > 5) {
       std::cout << "number is above 5 " << std::endl;
    }
    else if(num <= 5) {
      std::cout << "number is below 5 " << std::endl;
    }
    else {
      std::cout << "CORRECT YOU GOT IT " << std::endl;
    }
    
  }
  while (randNum != num);
  std::cout << "you had " << tries << " tries" << std::endl;
  return 0;
}