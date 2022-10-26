#include <iostream>

int sumOddDigits(std::string cardNumber);
int sumEvenDigits(std::string cardNumber);
int getDigit(int digit);


int main() {
  std::string cardNum;
  std::cout << "Enter card number: " << "\n";
  std::cin >> cardNum;

  int result = sumEvenDigits(cardNum) + sumOddDigits(cardNum);
  std::cout << result << "\n";
  if(result % 10 == 0) {
    std::cout << cardNum << " is valid\n";
  }else {
    std::cout << cardNum << " is not valid\n";
  }
  return 0;
} 

int getDigit(int digit) {
  int result = digit % 10 + (digit / 10 % 10);
  return result;
}

int sumOddDigits(std::string cardNumber) {
  int sum = 0;
  for (int i = cardNumber.size() - 1; i >= 0; i-=2) {
    sum += getDigit((cardNumber[i]- 48)); // of char - '0'
  }
  std::cout << sum << "==odd\n";
  return sum;
}

int sumEvenDigits(std::string cardNumber) {
  int sum = 0;
  for (int i = cardNumber.size() - 2; i >= 0; i-=2) {
    sum += getDigit((cardNumber[i]- 48) * 2); // of char - '0'
  }
  std::cout << sum << "==even\n";
  return sum;
}