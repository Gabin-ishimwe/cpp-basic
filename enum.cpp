#include <iostream>

enum Day  {
  sunday = 1,
  monday = 2,
  tuesday = 3
};

// by default they start at zero
enum Taste  {
  sundays,
  mondays,
  tuesday
};


int main() {
  Day currentDay = sunday;
  std::cout << currentDay << "\n";
  return 0;
}