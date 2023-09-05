#include "House.h"
#include <iostream>

House::House() : appliances(nullptr), numAppliances(0), numAddedAppliances(0) {}

House::House(int numAppliances) : numAppliances(numAppliances), numAddedAppliances(0) {
    appliances = new Appliance*[numAppliances];
    for (int i = 0; i < numAppliances; ++i) {
        appliances[i] = nullptr;
    }
}

House::~House() {
    // Deallocate appliances
    for (int i = 0; i < numAddedAppliances; ++i) {
        delete appliances[i];
    }
    delete[] appliances;
}

bool House::addAppliance(Appliance* appliance) {
    if (numAddedAppliances < numAppliances) {
        appliances[numAddedAppliances] = appliance;
        numAddedAppliances++;
        return true;
    }
    return false; // House is full, cannot add more appliances
}

double House::getTotalPowerConsumption() const {
    double totalConsumption = 0.0;
    for (int i = 0; i < numAddedAppliances; ++i) {
        totalConsumption += appliances[i]->getPowerConsumption();
    }
    return totalConsumption;
}
