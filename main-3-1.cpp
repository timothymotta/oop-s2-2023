#include <iostream>

bool is_fanarray(int array[], int n);

int main() {
  int arr[] = {1, 2, 3, 2, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  bool result = is_fanarray(arr, n);

  std::cout << "Array 1 is a fan array: " << std::boolalpha << result
            << std::endl;
  return 0;
}
