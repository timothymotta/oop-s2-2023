#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int maxCapacity) : maxCapacity(maxCapacity), count(0) {
    vehicles = new Vehicle*[maxCapacity];
}

ParkingLot::~ParkingLot() {
    for (int i = 0; i < count; i++) {
        delete vehicles[i];
    }
    delete[] vehicles;
}

int ParkingLot::getCount() const {
    return count;
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (count < maxCapacity) {
        vehicles[count] = vehicle;
        count++;
        std::cout << "Vehicle parked successfully\n";
    } else {
        std::cout << "The lot is full\n";
    }
}

void ParkingLot::unparkVehicle(int id) {
    int index = -1;
    for (int i = 0; i < count; i++) {
        if (vehicles[i]->getID() == id) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        std::cout << "Vehicle not in the lot\n";
    } else {
        delete vehicles[index];
        count--;
        for (int i = index; i < count; i++) {
            vehicles[i] = vehicles[i + 1];
        }
        std::cout << "Vehicle unparked successfully\n";
    }
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
    int count = 0;
    for (int i = 0; i < this->count; i++) {
        if (vehicles[i]->getParkingDuration() > maxParkingDuration) {
            count++;
        }
    }
    return count;
}