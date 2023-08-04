// Timothy Motta a1831126

// Given a positive integer decimal number (i.e. base-10), write a function that
// transforms it into binary (base-2), and prints out the result. You may assume
// that the string contains at least 1 and no more than 9 digits. Each digit in
// the string is 0-9. Examples of input strings: "0", "789" or "123456789". The
// output should only include the binary digits (ie 0-1) followed by a new line.
// Example outputs: "1101", "101", "1110111"

#include <iostream>
using namespace std;
// call the function
void print_binary_str(string decimal_number);

int main() {
  string input;
  cout << "Enter a positive integer: ";
  cin >> input;

  print_binary_str(input);

  return 0;
}