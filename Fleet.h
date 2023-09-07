#ifndef FLEET_H
#define FLEET_H
#include "Car.h"

class Fleet : Car {
 private:
  Fleet(int* Tesla, int* Car, int* Ford);
  /* creates a fleet containing pointers to 5 Car objects as an array;
  the array should have Tesla, Ford, Car, Ford, Tesla.
  */
  Car** fleet;

  Car** get_fleet();  // Returns the array of pointers to the five Car objects

 public:
};

#endif  // FLEET_H