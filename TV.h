#ifndef TV_H
#define TV_H

#include "Appliance.h"

class TV : public Appliance {
public:
    TV();
    TV(int powerRating, double screenSize);

    // Getter and setter for screen size
    void setScreenSize(double screenSize);
    double getScreenSize() const;

    // Override the getPowerConsumption method
    double getPowerConsumption() override;

private:
    double screenSize; // screen size in inches
};

#endif // TV_H