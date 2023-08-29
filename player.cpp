#include "player.h"

#include <iostream>

using namespace std;

Player::Player(string name, int health, int damage)
    : name(name), health(health), damage(damage) {}

void Player::attack(Player* opponent, int damage) {
  opponent->takeDamage(damage);
  cout << name << " attacks " << opponent->getName() << " for " << damage
       << " damage." << endl;
}

void Player::takeDamage(int damage) {
  health -= damage;
  cout << name << " takes " << damage << " damage. Remaining health: " << health
       << endl;
}

string Player::getName() const { return name; }

int Player::getHealth() const { return health; }

int Player::getDamage() const { return damage; }

void Player::setHealth(int newHealth) { health = newHealth; }