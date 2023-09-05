#include <iostream>
#include "TV.h"

int main() {
    // Create a TV object
    TV tv(120, 55.0); // Power rating: 120 watts, Screen size: 55 inches

    // Display attributes
    std::cout << "Power Rating: " << tv.get_powerRating() << " watts" << std::endl;
    std::cout << "Screen Size: " << tv.getScreenSize() << " inches" << std::endl;

    // Calculate and display power consumption
    double consumption = tv.getPowerConsumption();
    std::cout << "Power Consumption: " << consumption << " watts" << std::endl;

    return 0;
}
