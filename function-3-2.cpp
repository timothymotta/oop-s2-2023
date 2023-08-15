#include <iostream>

using namespace std;

int *reverseArray(int *numbers1, int length) {
    int *reversed = new int[length];

    for (int i = 0; i < length; ++i) {
        reversed[i] = numbers1[length - i - 1];
    }

    return reversed;
}

int *readNumbers() {
    int *num;
    num = new int[5];

    for (int i = 0; i < 5; i++) {
        cout << "Please enter number into array: ";
        cin >> num[i];
    }
    return num;
}