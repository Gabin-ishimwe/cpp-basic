#include <iostream>

class Human {
  public:
      std::string name;
      std::string occupation;
      int age;

      void eat() {
        std::cout << "This person is sleeping\n";
      }
      void drink() {
        std::cout << "This is person is drinking\n";
      }
      void sleep() {
        std::cout << "this is person is sleeping\n";
      }
};

int main() {
  Human human1;
  // human1.name = "Gabin";
  // human1.occupation = "developer";
  // human1.age = 20;

  std::cout << human1.name << "\n";
  std::cout << human1.occupation << "\n";
  std::cout << human1.age << "\n";

  human1.eat();

  return 0;
}