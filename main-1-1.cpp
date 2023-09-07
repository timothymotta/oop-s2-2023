#include <iostream>
#include <string>
#include "Car.h"

int main(){

Car car;

std::cout << "The price is: ", car.price;

std::cout << "The emissions are: ", car.emissions;

std::cout << "The kms are: ", car.get_drive;



    return 0;
}