// You must write two functions. The first function, readNumbers,
// is to read a set of 10 numbers from std::cin and use them to initialise a
// dynamically allocated array of int of length 10. The function must return a
// pointer to the array. You may assume that the input contains 10 integer
// values and nothing else. The second function, printNumbers, takes an int
// array of any length greater than 0 and prints all numbers in the array, one
// per line. The numbers must be printed in order starting with the first entry.
// Each line of output should start with the array index of the number being
// written out, followed by a space, then the number and finally a newline.

#include <iostream>

using namespace std;

int *readNumbers() {
  int *num;           // declare the dynamic array
  num = new int[10];  // giving size to it

  for (int i = 0; i < 10; i++) {  // taking the input from the user
    cout << "Please enter a number: ";
    cin >> num[i];
  }
  return num;  // return the pointer of the array
}

void printNumbers(int *numbers, int length) {
  cout << "Your array is :" << endl;

  for (int i = 0; i < length; i++) {  // prints the array
    cout << i << " " << numbers[i] << endl;
  }
}
