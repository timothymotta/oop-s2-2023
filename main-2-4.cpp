// Timothy Motta a1831126

// Given an array of integers, write a function to determine its maximum and
// minimum elements and then return their sum. Your function must call separate
// functions to identify the maximum and minimum elements. If the length is 0 or
// negative each function must return -1 as its result.

#include <iostream>
using namespace std;

// calling functions
int array_min(int integers[], int length);
int array_max(int integers[], int length);
int sum_min_max(int integers[], int length);

int main() {
  int arr[] = {1, 2, 3, 6, 7, 5};  // Example array
  int length = sizeof(arr) / sizeof(arr[0]);

  // display
  int result = sum_min_max(arr, length);
  cout << "The sum of min and max is: " << result << endl;

  return 0;
}