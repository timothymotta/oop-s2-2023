#include <iostream>

int max_element(int array[], int n);

int main() {
  int arr[] = {20, 15, 13, 18, 40, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  int result = max_element(arr, n);
  std::cout << "The maximum element in the array is: " << result << std::endl;

  return 0;
}