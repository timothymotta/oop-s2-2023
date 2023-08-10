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
  array[10][10] = {
                 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
                 {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
                 {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
                 {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
                 {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
                 {51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
                 {61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
                 {71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
                 {81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
                 {91, 92, 93, 94, 95, 96, 97, 98, 99, 100}
  };

// display
 print_matrix(array)

  return 0;
}