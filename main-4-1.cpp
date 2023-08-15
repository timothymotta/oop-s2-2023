#include <iostream>

using namespace std;

int *readNumbers();
int secondSmallestSum(int *numbers, int length);

int main() {
    int *numbers = readNumbers();
    int length = 5; 

    int result = secondSmallestSum(numbers, length);
    
    cout << "Second smallest sum of sub-arrays: " << result << endl;

    delete[] numbers;

    return 0;
}