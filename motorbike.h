#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include <ctime>
#include <iostream>
#include <string>

#include "vehicle.h"

class Motorbike : public Vehicle {
 public:
  Motorbike(int id) : Vehicle(id) {}
  int getParkingDuration() const override {
    return static_cast<int>(Vehicle::getParkingDuration() * 0.85);
  }
};

#endif