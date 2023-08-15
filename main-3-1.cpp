#include <iostream>

using namespace std;

bool equalsArray(int *numbers1, int *numbers2, int length);
int *readNumbers();

int main() {
    int *numbers1 = readNumbers();
    int *numbers2 = readNumbers();
    
    int length = 5; // manually declaring length

    bool result = equalsArray(numbers1, numbers2, length);
    
    if (result) {
        cout << "The arrays are equal! :)" << endl;
    } else {
        cout << "The arrays are not equal! :(" << endl;
    }

    delete[] numbers1;
    delete[] numbers2;

    return 0;
}
