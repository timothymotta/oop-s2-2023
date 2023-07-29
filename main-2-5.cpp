#include <iostream>

bool is_descending(int array[], int n);

int main() {
  int arr[] = {50, 40, 30, 20, 10};
  int n = sizeof(arr) / sizeof(arr[0]);

  bool result = is_descending(arr, n);

  std::cout << "Array is in descending order: " << std::boolalpha << result
            << std::endl;

  return 0;
}