#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
using namespace std;

// constructor that sets the data members to the given values
class Player {
 protected:
  string name;
  int health;
  int damage;

 public:
  Player(string name, int health, int damage);
  void attack(Player* opponent, int damage);
  void takeDamage(int damage);
  string getName() const;
  int getHealth() const;
  int getDamage() const;
  void setHealth(int newHealth);
};

#endif