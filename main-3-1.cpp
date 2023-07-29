#include <iostream>

bool is_fanarray(int array[], int n);

int main() {
  int arr1[] = {1, 2, 3, 2, 1};
  int n1 = sizeof(arr1) / sizeof(arr1[0]);

  int arr2[] = {1, 3, 5, 4, 2};
  int n2 = sizeof(arr2) / sizeof(arr2[0]);

  bool result1 = is_fanarray(arr1, n1);
  bool result2 = is_fanarray(arr2, n2);

  std::cout << "Array 1 is a fan array: " << std::boolalpha << result1
            << std::endl;
  std::cout << "Array 2 is a fan array: " << std::boolalpha << result2
            << std::endl;

  return 0;
}