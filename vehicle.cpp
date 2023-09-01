
#include "vehicle.h"

Vehicle::Vehicle(int id) : ID(id) { 
  timeofEntry = std::time(nullptr);
}

int Vehicle::getID() const { 
  return ID; 
}

int Vehicle::getParkingDuration() const {
  std::time_t now = std::time(nullptr);
  return difftime(now, timeofEntry);
}