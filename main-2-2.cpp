// Timothy Motta a1831126

// Given a binary number represented as an array, write a function that takes
// the array and its size as a parameter, and returns the integer value. You may
// assume that there are at least 1 and no more than 30 numbers in the array and
// that all the values are either 0 or 1. The array is ordered with most
// significant binary digit at the start (index 0) and the least significant
// digit at the end.

#include <iostream>
using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
  // declare binary array
  int binary_digits[] = {1, 0, 1, 0, 1};
  int number_of_digits = sizeof(binary_digits) / sizeof(binary_digits[0]);

  int integer_value = binary_to_int(binary_digits, number_of_digits);
  cout << "The integer value is: " << integer_value << endl;

  return 0;
}