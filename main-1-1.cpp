#include <iostream>
#include "Appliance.h"

int main() {
    // Create an Appliance object
    Appliance appliance1(100); // Set power rating to 100

    // Display initial state
    std::cout << "Power Rating: " << appliance1.get_powerRating() << std::endl;
    std::cout << "Is On: " << (appliance1.get_isOn() ? "Yes" : "No") << std::endl;

    // Turn on the appliance
    appliance1.turnOn();
    std::cout << "Is On: " << (appliance1.get_isOn() ? "Yes" : "No") << std::endl;

    // Turn off the appliance
    appliance1.turnOff();
    std::cout << "Is On: " << (appliance1.get_isOn() ? "Yes" : "No") << std::endl;

    // Get power consumption
    double consumption = appliance1.getPowerConsumption();
    std::cout << "Power Consumption: " << consumption << " watts" << std::endl;

    return 0;
}