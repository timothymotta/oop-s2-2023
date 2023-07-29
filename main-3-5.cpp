#include <iostream>

double sum_even(double array[], int n);

int main() {
  double arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = sizeof(arr) / sizeof(arr[0]);

  double result = sum_even(arr, n);

  std::cout << "The sum of elements at even positions is: " << result << std::endl;
  return 0;
}