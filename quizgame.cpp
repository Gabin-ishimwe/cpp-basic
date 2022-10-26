#include <iostream>

int main() {

  std::string questions[] = {
    "1. Favorite prog language? ",
    "2. Favorite backend framework? ",
    "3. Favorite hobby? "
  };

  std::string answers[][3] = {
    {"A. c++", "B. java", "c. python"},
    {"A. spring", "B. nest js", "C. ruby"},
    {"A. baking", "B. guitar", "C. singing"}
  };

  std::string correctChoice[] = {
    "A", "B", "C"
  };

  int correctAns = 0;
  std::string choice;
  int totalQuestions = sizeof(questions)/sizeof(questions[0]);

  int row = sizeof(answers)/sizeof(answers[0]);
  std::cout << "QUIZ GAME IN C++";
  for(int i = 0; i < row; i++) {
    std::cout << questions[i] << "\n";
    for(int j = 0; j < sizeof(answers[i])/ sizeof(answers[i][0]); j++) {
      std::cout << answers[i][j] << "\n";
    }
    std::cout << "**************************\n";
    std::cout << "answer: ";
    std::cin >> choice;
    // choice= toupper(choice);
    if(choice == correctChoice[i]) {
      correctAns += 1;
      std::cout << "correct choice \n";
    } else {
      std::cout << "incorrect choice \n";
    }
  }

  std::cout << "you got " << correctAns << "/" << totalQuestions;

}