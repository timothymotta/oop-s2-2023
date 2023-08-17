// Timothy Motta a1831126

// In a file called function-1-1.cpp, include Person.h and write a function
// called createPersonArray that takes an integer argument n and returns an
// array of n Person structs. The name and age fields of each struct should be
// set to "John Doe" and 0, respectively

#include "Person.h"
using namespace std;

Person* createPersonArray(int n) {
  Person* people = new Person[n];  // Allocate an array of Person structs

  for (int i = 0; i < n; ++i) {
    people[i].name = "John Doe";
    people[i].age = 0;
  }

  return people;
}