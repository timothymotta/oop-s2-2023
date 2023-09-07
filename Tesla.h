#ifndef TESLA_H
#define TESLA_H
#include "Car.h"

class Tesla : public Car {
  public:
  Tesla();
  Tesla(char model, int price);

  // getters
  void get_model();
  void get_price();
  
   // setters
  void get_model();
  void get_price();

  char model;
  float batteryPercentage;  // Initially 100%

  private:
  void chargeBattery(int mins);
  void drive(int kms);

};

#endif  // TESLA_H