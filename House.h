#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"

class House {
public:
    House();
    House(int numAppliances);
    ~House(); // Destructor to deallocate appliances

    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption() const;

private:
    Appliance** appliances;
    int numAppliances;
    int numAddedAppliances; // Keep track of the number of added appliances
};

#endif // HOUSE_H