#include "Car.h"

// commenting so i can commit
Car::Car(int id) : Vehicle(id) {}

    int Car::getParkingDuration() const {
        return static_cast<int>(Vehicle::getParkingDuration() * 0.9);
    }
