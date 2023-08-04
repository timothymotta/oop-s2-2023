// Timothy Motta a1831126

//  Given a matrix, print out the scaled version of the matrix,
// where you multiply every element in the matrix by the same numeric value.
// Elements should be printed by row, with a space separating elements on a row,
// and a newline character separating rows.

// calling function
void print_scaled(int array[3][3], int scale);

int main() {
  // declare variable and matrix
  int scale = 3;
  int threebythree[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};

  // display
  print_scaled(threebythree, scale);

  return 0;
}