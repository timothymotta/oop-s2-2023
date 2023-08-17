#ifndef Person_h
#define Person_h
#include <string>

using namespace std;

// structure for part 1
struct Person {
  string name;
  int age;
};

// structure for part 2
struct PersonList {
  Person* people;
  int numPeople;
};

#endif