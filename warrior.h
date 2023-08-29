#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>
#include <string>

#include "player.h"
using namespace std;

#include "player.h"  // Include the base class header

class Warrior : public Player {
 private:
  string weapon;

 public:
  Warrior(string name, int health, int damage, string weapon);
  void swingWeapon(Player* opponent);
  string getWeapon() const;
};

#endif  // WARRIOR_H