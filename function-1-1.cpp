// Write a function that returns the sum of all elements in an int array. 
// The parameters of the function are the array and the number of elements in the array. 
// The function should return 0 if the size parameter, n, is less than 1.

int array_sum(int array[], int n) {
    // Return 0 if the size parameter is less than 1
    if (n < 1) {
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }

    return sum;
}