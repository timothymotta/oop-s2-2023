#ifndef FORD_H
#define FORD_H

#include "Car.h"

class Ford : public Car {
public:
  Ford();
  Ford(int badgeNumber, int price);
 
  int badgeNumber;
  float litresOfFuel;  // Initially 60L

  // getters
  void get_badgenumber() const;
  void get_litresOfFuel() const;

  // setters
  void set_badgenumber() const;
  void set_litresOfFuel() const;

  void refuel(int litres);
  void drive(int kms);
};

#endif  // FORD_H