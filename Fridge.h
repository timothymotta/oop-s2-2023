#ifndef FRIDGE_H
#define FRIDGE_H

#include "Appliance.h"

class Fridge : public Appliance {
public:
    Fridge();
    Fridge(int powerRating, double volume);

    // Getter and setter for volume
    void setVolume(double volume);
    double getVolume() const;

    // Override the getPowerConsumption method
    double getPowerConsumption() override;

private:
    double volume; // volume in litres
};

#endif // FRIDGE_H