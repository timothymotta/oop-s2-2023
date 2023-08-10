// Timothy Motta a1831126

// Given a multi-dimensional array of integers, print all its elements.
// You may assume that the dimensions are 10x10, as in the signature.
// Elements should be printed by row, with a space separating elements on a row,
// and a newline separating rows (use `std::endl`).

#include <iostream>
using namespace std;

// call function
void print_matrix(int array[10][10]);

int main() {
  // declare array
  array[10][10] = {1 2 3 4 5 6 7 8 9 10};

// display
  std::endl;
  cout << "Array: ", array[10][10];
  
  return 0;
}