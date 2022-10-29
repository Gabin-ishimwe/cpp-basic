#include <iostream>

class Animal {
  public:
    std::string name;
    void eat() {
      std::cout << this->name << " eats";
    }
};

class Dog : public Animal {
  public:
    void bark() {
      std::cout << "dog barks \n";
    }

};

class Cat : public Animal {
  public:
    void meow() {
      std::cout << "cat mewos\n";
    }
};

int main() {
  Dog dog;
  dog.name = "bobo";
  dog.eat();
  dog.bark();

  Cat cat;
  cat.name = "catyy";
  cat.eat();
  return 0;
}