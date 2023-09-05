#include <iostream>
#include "Fridge.h"

int main() {
    // Create a Fridge object
    Fridge fridge(150, 300); // Power rating: 150 watts, Volume: 300 litres

    // Display attributes
    std::cout << "Power Rating: " << fridge.get_powerRating() << " watts" << std::endl;
    std::cout << "Volume: " << fridge.getVolume() << " litres" << std::endl;

    // Calculate and display power consumption
    double consumption = fridge.getPowerConsumption();
    std::cout << "Power Consumption: " << consumption << " watts" << std::endl;

    return 0;
}