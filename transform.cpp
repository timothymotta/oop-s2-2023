// Write a C++ program to transform a number from base 10 to base 2

#include <iostream>
using namespace std;

int main() {
  // declare variables
  int num;
  string binary = "";

  // prompts the user to enter a non-negative integer
  cout << "Please enter a non-negative integer: ";
  cin >> num;

  // Convert decimal_number to binary and print the binary representation
  cout << "The binary representation is: ";
  // if user enters 0, then output 0, else if while input is greater than 0, modulus of num into remainder
  if (num == 0) {
    cout << "0";
  } else {
    while (num > 0) {
      int remainder = num % 2;
    // takes int and converts to string
      binary = to_string(remainder) + binary;
      num = num / 2;
    }
    // display the binary (in 1s and 0s)
    cout << binary;
  }
  // skip a line
  cout << endl;
  return 0;
}
