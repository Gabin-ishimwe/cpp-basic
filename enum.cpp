#include <iostream>

enum Day  {
  sunday = 1,
  monday = 2,
  tuesday = 3
};

int main() {
  Day currentDay = sunday;
  std::cout << currentDay << "\n";
  return 0;
}