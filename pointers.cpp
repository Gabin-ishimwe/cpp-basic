#include <iostream>

int main() {

  std::string name = "bro";
  std::string *pName= &name;
  std::string pizzas[3] = {"pizza","pizza2","pizza3"};

  // pointer variable that hold address of another variable
  int age= 20;
  int *pAge = &age;
  std::string *pPizzas = pizzas;

  std::string *nullPointer = nullptr;

  nullPointer =&name;
  if(nullPointer == nullptr) {
    std::cout << "address was not assigned\n";
    // std::cout << *nullPointer << "\n";
  }
  else {
    std::cout << *nullPointer << "\n";
  }
  std::cout << *pName << "\n";
  std::cout << *pAge << "\n";
  std::cout << *pPizzas << "\n";


  return 0;
}