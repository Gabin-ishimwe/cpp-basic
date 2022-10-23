#include <iostream>

int main() {

   double temp1;
   double temp2;
   char type;

   std::cout << "TEMPERATURE CONVERSION APP" << std::endl;
   std::cout << "Celsius : C or Farheneit: F" << std::endl;
   std::cout << "Enter a degree: " << std::endl;
   std::cin >> type;

   if(type == 'C' || type == 'c') {
    std::cout << "We are changing in celsius" << std::endl;
   }
   else if (type == 'F' || type == 'f') {
    std::cout << "We are changing in fahreneit" << std::endl;
   }
   else {
    std::cout << "Please enter between C or F" << std::endl;
   }

  return 0;
}