// Timothy Motta a1831126

// Given a multi-dimensional array of integers, print all its elements.
// You may assume that the dimensions are 10x10, as in the signature.
// Elements should be printed by row, with a space separating elements on a row,
// and a newline separating rows (use `std::endl`).

#include <iostream>
using namespace std;

void print_matrix(int array[10][10]) {
  // loop through rows and columns to store array
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      std::cout << array[i][j] << " ";
    }
    std::cout << std::endl;
  }
}