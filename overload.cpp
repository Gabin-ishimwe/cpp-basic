#include <iostream>

class Pizza {

  private:
    std::string secrete = "ishimwe";

  public:

      std::string topping1;
      std::string topping2;

      Pizza(std::string topping1) {
        this -> topping1 = topping1;
      }

      Pizza(std::string topping1, std::string topping2) {
        this -> topping1 = topping1;
        this -> topping2 = topping2;
      }

      Pizza() {
      }

      std::string getSecrete() {
        return secrete;
      }

      void setSecrete(std::string change) {
        this->secrete = change;
      }

};

int main() {

  Pizza pizza1("cheesse");
  Pizza pizza2("cheesse", "break");
  Pizza pizza3;
  std::cout << pizza1.getSecrete() << "\n";
  pizza1.setSecrete("changed");
  std::cout << pizza1.getSecrete() << "\n";
  return 0;
}