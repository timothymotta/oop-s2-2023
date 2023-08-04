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

// calling functions
bool is_palindrome(int integers[], int length);
int sum_array_elements(int integers[], int length);
int sum_if_palindrome(int integers[], int length);

int main() {
  int arr1[] = {1, 2, 3, 2, 1};  // Palindrome array
  int arr2[] = {1, 3, 13, 65, 5};  // Non-palindrome array
  int arr3[] = {};               // Empty array

  int length1 = sizeof(arr1) / sizeof(arr1[0]);
  int length2 = sizeof(arr2) / sizeof(arr2[0]);
  int length3 = sizeof(arr3) / sizeof(arr3[0]);

  cout << "Sum if palindrome: " << sum_if_palindrome(arr1, length1) << endl;
  cout << "Sum if palindrome: " << sum_if_palindrome(arr2, length2) << endl;
  cout << "Sum if palindrome: " << sum_if_palindrome(arr3, length3) << endl;

  return 0;
}
