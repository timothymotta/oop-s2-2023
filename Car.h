#ifndef CAR_H
#define CAR_H

class Car {
 public:
  Car();
  Car(int price);
  int price;
  int emissions;  // CO2
  // getters
  void get_price();
  void get_drive();

  // setters
  void set_price();
  void set_drive();

  virtual int drive() const;

 private:
  void drive(int kms);
};

#endif  // CAR_H