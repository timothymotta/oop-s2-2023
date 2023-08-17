// Timothy Motta a1831126

// in a file called function-1-3.cpp, include Person.h and write a function
// called deepCopyPersonList that takes a PersonList struct and returns a new
// PersonList struct that is a deep copy of the original. That is, the people
// field of the new struct should point to a new array of n Person structs, each
// with the same name and age fields as the original.

#include <iostream>

#include "Person.h"
using namespace std;

PersonList deepCopyPersonList(PersonList pl);

int main() {
  int n = 4;  // number of person structs

  // creating original PersonList
  PersonList originalList;
  originalList.numPeople = n;
  originalList.people = new Person[n];
  for (int i = 0; i < n; ++i) {
    originalList.people[i].name = "Original Name";
    originalList.people[i].age = 10;
  }

  // Deep copy the original PersonList
  PersonList copiedList = deepCopyPersonList(originalList);

  // Updating the copiedList to have different values
  for (int i = 0; i < n; ++i) {
    copiedList.people[i].name = "Copied Name";
    copiedList.people[i].age = 20;
  }

  cout << "Original Person List:" << endl;
  for (int i = 0; i < originalList.numPeople; ++i) {
    cout << "Person " << i + 1 << ": "
         << "Name: " << originalList.people[i].name
         << ", Age: " << originalList.people[i].age << endl;
  }

  cout << "\nCopied Person List:" << endl;
  for (int i = 0; i < copiedList.numPeople; ++i) {
    cout << "Person " << i + 1 << ": "
         << "Name: " << copiedList.people[i].name
         << ", Age: " << copiedList.people[i].age << endl;
  }

  // unallocating memory
  delete[] originalList.people;
  delete[] copiedList.people;

  return 0;
}