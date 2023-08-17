// Timothy Motta a1831126

// In a file called function-1-2.cpp,
// include Person.h and write a function called createPersonList that takes an
// integer argument n and returns a PersonList struct. The numPeople field of
// the struct should be set to n, and the people field should be set to an array
// of n Person structs. The name and age fields of each struct should be set to
// "Jane Doe" and 1, respectively.

#include "Person.h"

PersonList createPersonList(int n) {
  PersonList personList;
  personList.numPeople = n;
  personList.people = new Person[n];
  for (int i = 0; i < n; ++i) {
    personList.people[i].name = "Jane Doe";
    personList.people[i].age = 1;
  }
  return personList;
}