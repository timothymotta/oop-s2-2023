#include <iostream>

using namespace std;

// calling functions
void hexDigits(int *numbers, int length);
int *readNumbers();
void printNumbers(int *numbers, int length);

int main() {
  int *numbers = readNumbers();
  // displaying numbes;
  hexDigits(numbers, 10);

  // deallocate memory
  delete[] numbers;

  return 0;
}