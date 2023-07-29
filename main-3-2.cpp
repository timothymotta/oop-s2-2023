#include <iostream>

int median_array(int array[], int n);

int main() {
    int arr[] = {3, 5, 2, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    double result = median_array(arr, n);

    std::cout << "The median of array is: " << result << std::endl;

    return 0;
}