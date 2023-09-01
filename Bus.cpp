#include "Bus.h"

// commenting so i can commit
Bus::Bus(int id) : Vehicle(id) {}

int Bus::getParkingDuration() const {
  return static_cast<int>(Vehicle::getParkingDuration() * 0.75);
}
