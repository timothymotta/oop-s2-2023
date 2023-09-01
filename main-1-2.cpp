#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"

int main() {
    int maxCapacity;
    std::cout << "Enter the maximum capacity of the parking lot: ";
    std::cin >> maxCapacity;

    ParkingLot parkingLot(maxCapacity);

    while (true) {
        int choice;
        std::cout << "=== Choose an option: ===\n";
        std::cout << "1. Park a vehicle\n";
        std::cout << "2. Unpark a vehicle\n";
        std::cout << "3. Quit\n";
        std::cin >> choice;

        if (choice == 1) {
            int id;
            std::cout << "Enter vehicle ID: ";
            std::cin >> id;
            Vehicle* vehicle = new Vehicle(id);
            parkingLot.parkVehicle(vehicle);
        } else if (choice == 2) {
            int id;
            std::cout << "Enter vehicle ID to unpark: ";
            std::cin >> id;
            parkingLot.unparkVehicle(id);
        } else if (choice == 3) {
            break;
        } else {
            std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}