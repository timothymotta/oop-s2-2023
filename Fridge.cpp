#include "Fridge.h"

Fridge::Fridge() : volume(0.0) {}

Fridge::Fridge(int powerRating, double volume) : Appliance(powerRating), volume(volume) {}

void Fridge::setVolume(double volume) {
    this->volume = volume;
}

double Fridge::getVolume() const {
    return volume;
}

double Fridge::getPowerConsumption() {
    // Calculate power consumption based on the formula
    return get_powerRating() * 24 * (volume / 100.0);
}
