#include <iostream>

using namespace std;

int *readNumbers();
int *reverseArray(int *numbers1, int length);


int main() {
    int *numbers1 = readNumbers();
    
    int length = 5; 

    int *reversedArray = reverseArray(numbers1, length);

    cout << "Original array:" << endl;
    for (int i = 0; i < length; ++i) {
        cout << numbers1[i] << " ";
    }
    cout << endl;

    cout << "Reversed array:" << endl;
    for (int i = 0; i < length; ++i) {
        cout << reversedArray[i] << " ";
    }
    cout << endl;

    delete[] numbers1;
    delete[] reversedArray;

    return 0;
}