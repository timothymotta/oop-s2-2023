#include <iostream>

// call function
int count_evens(int number);

int main() {
  int number = 10;  // You can change this value to test different numbers.

  int result = count_evens(number);
  std::cout << "The number of even numbers between 1 and " << number
            << " is: " << result << std::endl;

  return 0;
}