#include <iostream>
#include "House.h"
#include "Fridge.h" 
#include "TV.h"
#include "Appliance.h"

int main() {
    // Create a House object with space for 3 appliances
    House myHouse(3);

    // Create Appliance objects and add them to the House
    Appliance* fridge = new Fridge(150, 300); // Power rating: 150 watts, Volume: 300 litres
    Appliance* tv = new TV(120, 55.0);        // Power rating: 120 watts, Screen size: 55 inches

    bool applianceAdded1 = myHouse.addAppliance(fridge);
    bool applianceAdded2 = myHouse.addAppliance(tv);

    if (applianceAdded1 && applianceAdded2) {
        std::cout << "Appliances added successfully to the house." << std::endl;
    } else {
        std::cout << "House is full. Cannot add more appliances." << std::endl;
    }

    // Calculate and display total power consumption of all appliances in the House
    double totalConsumption = myHouse.getTotalPowerConsumption();
    std::cout << "Total Power Consumption in the House: " << totalConsumption << " watts" << std::endl;

    // Clean up allocated memory
    delete fridge;
    delete tv;

    return 0;
}
