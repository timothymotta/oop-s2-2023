#include <iostream>

// call function
int sum_diagonal(int array[4][4]);

int main() {
    // declare matrices
  int matrix[4][4] = {
      {2, 4, 6, 8}, {10, 12, 14, 16}, {18, 20, 22, 24}, {26, 28, 30, 32}};

  int result = sum_diagonal(matrix);
  printf("Sum of elements along the main diagonal: %d\n", result);

  return 0;
}