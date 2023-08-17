// Timothy Motta a1831126

// In a file called function-1-1.cpp, include Person.h and write a function
// called createPersonArray that takes an integer argument n and returns an
// array of n Person structs. The name and age fields of each struct should be
// set to "John Doe" and 0, respectively

#include <iostream>

#include "Person.h"
using namespace std;

Person* createPersonArray(int n);

int main() {
  int n = 5;
  Person* peopleArray = createPersonArray(n);

  // Print the created array
  for (int i = 0; i < n; ++i) {
    cout << "Person " << i + 1 << ": Name: " << peopleArray[i].name
         << ", Age: " << peopleArray[i].age << endl;
  }

  // Don't forget to deallocate the memory allocated with new
  delete[] peopleArray;

  return 0;
}