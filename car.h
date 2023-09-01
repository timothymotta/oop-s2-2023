#ifndef CAR_H
#define CAR_H

#include <ctime>
#include <iostream>
#include <string>

#include "vehicle.h"

class Car : public Vehicle {
 public:
  Car(int id) : Vehicle(id) {}
  int getParkingDuration() const override {
    return static_cast<int>(Vehicle::getParkingDuration() * 0.9);
  }
};

#endif
