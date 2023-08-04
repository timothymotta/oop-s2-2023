// Timothy Motta a1831126

// Given an array of integers, write a function to determine its maximum and
// minimum elements and then return their sum. Your function must call separate
// functions to identify the maximum and minimum elements. If the length is 0 or
// negative each function must return -1 as its result.

#include <iostream>
using namespace std;

// declaring functions
int array_min(int integers[], int length) {
  if (length <= 0) {
    return -1;
  }

  int min_element = integers[0];
  for (int i = 1; i < length; i++) {
    if (integers[i] < min_element) {
      min_element = integers[i];
    }
  }

  return min_element;
}

int array_max(int integers[], int length) {
  if (length <= 0) {
    return -1;
  }

  int max_element = integers[0];
  for (int i = 1; i < length; i++) {
    if (integers[i] > max_element) {
      max_element = integers[i];
    }
  }

  return max_element;
}

int sum_min_max(int integers[], int length) {
  if (length <= 0) {
    return -1;
  }

  int min_value = array_min(integers, length);
  int max_value = array_max(integers, length);

  return min_value + max_value;
}