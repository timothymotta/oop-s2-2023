#ifndef BUS_H
#define BUS_H

#include <ctime>
#include <iostream>
#include <string>

#include "vehicle.h"

class Bus : public Vehicle {
public:
    Bus(int id) : Vehicle(id) {}
    int getParkingDuration() const override {
        return static_cast<int>(Vehicle::getParkingDuration() * 0.75);
    }
};

#endif