#include <iostream>

namespace constant {
  const int PI = 10;
}

int main() {
  using namespace constant;
  using namespace std;
  using std::cout;

  cout << PI << endl;

  return 0;
}