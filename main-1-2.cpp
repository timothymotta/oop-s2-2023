// // Timothy Motta a1831126

// Given a matrix of integers with 10 rows and 10 columns,
// write a function and program to determine if the matrix is an identity matrix
// or not. Return a 1 if it is an identity matrix and a 0 if not. (Definition:
// An identity matrix is one with 1's down the main diagonal and 0's elsewhere)

#include <stdio.h>
#include <iostream>
// so I dont have to use "std" infront of cout print statements
using namespace std;

int is_identity(int array[10][10]);

int main() {
  int matrix[10][10] = {
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 1}
    };

cout << "Matrix:" << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int result = is_identity(matrix);
    cout << "\nThe given matrix is an identity matrix." << endl;

  return 0;
}