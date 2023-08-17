// Timothy Motta a1831126

// In a file called function-1-2.cpp,
// include Person.h and write a function called createPersonList that takes an
// integer argument n and returns a PersonList struct. The numPeople field of
// the struct should be set to n, and the people field should be set to an array
// of n Person structs. The name and age fields of each struct should be set to
// "Jane Doe" and 1, respectively.

#include <iostream>

#include "Person.h"
using namespace std;

PersonList createPersonList(int n);

int main() {
  int n = 3;  // Change this value to the desired number of Person structs
  PersonList list = createPersonList(n);

  std::cout << "Person List:" << std::endl;
  for (int i = 0; i < list.numPeople; ++i) {
    std::cout << "Person " << i + 1 << ": "
              << "Name: " << list.people[i].name
              << ", Age: " << list.people[i].age << std::endl;
  }

  delete[] list.people;  // Don't forget to free the memory

  return 0;
}