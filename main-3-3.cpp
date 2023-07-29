#include <iostream>

double weighted_average(int array[], int n);

int main() {
  int arr[] = {1, 2, 1, 4, 1, 3};
  int n = sizeof(arr) / sizeof(arr[0]);

  double result = weighted_average(arr, n);

  std::cout << "The weighted average is: " << result << std::endl;

  return 0;
}