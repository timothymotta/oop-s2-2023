// Timothy Motta a1831126

// Given a binary number represented as an array, write a function that takes
// the array and its size as a parameter, and returns the integer value. You may
// assume that there are at least 1 and no more than 30 numbers in the array and
// that all the values are either 0 or 1. The array is ordered with most
// significant binary digit at the start (index 0) and the least significant
// digit at the end.

#include <iostream>
using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits) {
  int result = 0;

  for (int i = 0; i < number_of_digits; i++) {
    // << left shifts bits and in this case means result * 2^1
    result = (result << 1) + binary_digits[i];
  }

  return result;
}