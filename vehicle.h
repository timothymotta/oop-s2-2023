#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>
#include <iostream>
#include <string>

class Vehicle {
 private:
  std::time_t timeofEntry;
  int ID;

 public:
  Vehicle(int id);
  int getID() const;
  virtual int getParkingDuration() const;
};

#endif
