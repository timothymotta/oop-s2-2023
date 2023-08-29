#include "warrior.h"
#include <iostream>

using namespace std;

Warrior::Warrior(std::string name, int health, int damage, std::string weapon)
    : Player(name, health, damage), weapon(weapon) {}

void Warrior::swingWeapon(Player* opponent) {
    int weaponDamage = damage + 5;
    opponent->takeDamage(weaponDamage);
    std::cout << name << " swings a " << weapon << " at " << opponent->getName() << " for " << weaponDamage << " damage." << std::endl;
}

std::string Warrior::getWeapon() const {
    return weapon;
}