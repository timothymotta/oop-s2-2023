#include <iostream>
#include <climits>

using namespace std;

int secondSmallestSum(int *numbers, int length) {
    if (length <= 1) {
        return INT_MAX; 
    }

    int secondSmallest = INT_MAX;

    for (int start = 0; start < length; ++start) {
        // declare sum as 0
        int currentSum = 0;
        for (int end = start; end < length; ++end) {
            currentSum = currentSum + numbers[end];
            if (currentSum < secondSmallest && currentSum != 0) {
                secondSmallest = currentSum;
            }
        }
    }
    return secondSmallest;
}

int *readNumbers() {
    int *num;
    num = new int[5];

    for (int i = 0; i < 5; i++) {
        cout << "Please enter a number into array: ";
        cin >> num[i];
    }
    return num;
}