#include <iostream>

// call function
int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
  int arr1[] = {2, 4, 6, 8, 10};
  int arr2[] = {12, 14, 16, 18, 20};
  int n = sizeof(arr1) / sizeof(arr1[0]);

  int result = sum_two_arrays(arr1, arr2, n);
  std::cout << "The sum of the two arrays is: " << result << std::endl;

  return 0;
}