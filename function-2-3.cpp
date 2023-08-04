// Timothy Motta a1831126

// Given an array of integers, write a function to calculate the sum of the
// elements if it is a palindrome array. If this not a palindrome array, your
// function must return -2. Your function must call separate functions to check
// whether or not the array is a palindrome and to calculate the sum of its
// elements. If the length is 0 or negative each function must return -1 or
// false as its result.

// Signature: int sum_if_palindrome(int integers[], int length)
// Signature: bool is_palindrome (int integers[], int length)
// Signature: int sum_array_element int integers[], int length)

#include <iostream>
using namespace std;

bool is_palindrome(int integers[], int length) {
  if (length <= 0) {
    return false;
  }
  for (int i = 0; i < length / 2; i++) {
    if (integers[i] != integers[length - 1 - i]) {
      return false;
    }
  }
  return true;
}

int sum_array_elements(int integers[], int length) {
  if (length <= 0) {
    return -1;
  }

  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += integers[i];
  }
  return sum;
}

int sum_if_palindrome(int integers[], int length) {
  if (length <= 0) {
    return -1;
  }

  if (is_palindrome(integers, length)) {
    return sum_array_elements(integers, length);
  } else {
    return -2;
  }
}