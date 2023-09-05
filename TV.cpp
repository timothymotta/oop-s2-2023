#include "TV.h"

TV::TV() : screenSize(0.0) {}

TV::TV(int powerRating, double screenSize) : Appliance(powerRating), screenSize(screenSize) {}

void TV::setScreenSize(double screenSize) {
    this->screenSize = screenSize;
}

double TV::getScreenSize() const {
    return screenSize;
}

double TV::getPowerConsumption() {
    // Calculate power consumption based on the formula
    return get_powerRating() * (screenSize / 10.0);
}
