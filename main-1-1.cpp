#include <iostream>

using namespace std;

int *readNumbers();
void printNumbers(int *numbers, int length);

int main()

{
  int *arry;  // declare the array of pointer

  arry = readNumbers();  // calling the function that return the pointer of
                         // array
  printNumbers(arry, 10);  // calling the function for printing the array

  return 0;
}