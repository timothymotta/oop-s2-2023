#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
public:
    Appliance();
    Appliance(int powerRating);

    // Getters
    int get_powerRating() const;
    bool get_isOn() const;

    // Setters
    void set_powerRating(int powerRating);
    void set_isOn(bool isOn);

    void turnOn();
    void turnOff();
    virtual double getPowerConsumption();
    
private:
    int powerRating;
    bool isOn;
};

#endif // appliance_h