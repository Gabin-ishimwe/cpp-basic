#include <iostream>

int main() {
  // fill() function 
  int nums[100];
      // start indext , // end range, // range
  fill(nums, nums+100, 5);
  for (int i = 0; i < sizeof(nums)/sizeof(nums[0]); i++) {
    std::cout << nums[i] << "\n";
  }
  return 0;
}