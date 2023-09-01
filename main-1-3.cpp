#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
    // Create a parking lot with a capacity of 10 vehicles
    ParkingLot parkingLot(10);

    // Park 5 Car objects, 3 Bus objects, and 2 Motorbike objects in the parking lot
    for (int i = 0; i < 5; i++) {
        Car* car = new Car(i + 1);
        parkingLot.parkVehicle(car);
    }
    for (int i = 0; i < 3; i++) {
        Bus* bus = new Bus(i + 6);
        parkingLot.parkVehicle(bus);
    }
    for (int i = 0; i < 2; i++) {
        Motorbike* motorbike = new Motorbike(i + 9);
        parkingLot.parkVehicle(motorbike);
    }

    // Count the number of vehicles that have overstayed in the parking lot for more than 15 seconds
    int overstayingCount = parkingLot.countOverstayingVehicles(15);

    // Print the result
    std::cout << "Number of overstaying vehicles: " << overstayingCount << std::endl;

    return 0;
}