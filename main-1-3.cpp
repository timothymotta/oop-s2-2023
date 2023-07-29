#include <iostream>

// calling function
int num_count(int array[], int n, int number);

int main() {
  int arr[] = {5, 10, 15, 5, 30, 35, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int number = 5;

  int result = num_count(arr, n, number);
  std::cout << "Number of occurrences of " << number << " is: " << result
            << std::endl;

  return 0;
}