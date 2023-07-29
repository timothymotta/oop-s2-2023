#include <iostream>

bool is_ascending(int array[], int n);

int main() {
    int arr[] = {3, 6, 9, 12, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool result = is_ascending(arr, n);

    std::cout << "The array is in ascending order: " << std::boolalpha << result << std::endl;

    return 0;
}