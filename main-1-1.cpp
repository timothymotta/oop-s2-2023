#include <iostream>

// calling the function
int array_sum(int array[], int n);

int main() {
    const int size = 5;
    int myArray[size] = {1, 2, 3, 4, 5};

    // Call the function and print the result
    int result = array_sum(myArray, size);
    std::cout << "Sum of the elements: " << result << std::endl;

    return 0;
}