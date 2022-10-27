#include <iostream>
struct Student {
  std::string name;
  double jpa;
  bool enrolled;
};
void printStudent(Student &student);
int main() {
  Student student1 = {
    "gabin",
    1.4,
    true
  };
  Student student2;
  student2.name = "spongebob";
  student2.jpa = 4;
  student2.enrolled= true;

  printStudent(student2);

  
  return 0;
}

void printStudent(Student &student) {
std::cout << student.name << "\n";
std::cout << student.jpa << "\n";
std::cout << student.enrolled << "\n";
}
