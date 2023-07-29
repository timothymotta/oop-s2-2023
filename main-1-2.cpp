#include <iostream>

// callng function
double array_mean(int arr[], int n);

int main() {
  int arr[] = {5, 10, 15, 20, 30};
  int n = sizeof(arr) / sizeof(arr[0]);
  double result = array_mean(arr, n);
  std::cout << "The average is: " << result << std::endl;

  return 0;
}
