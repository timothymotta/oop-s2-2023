#include "wizard.h"

Wizard::Wizard(string name, int health, int damage, int mana)
    : Player(name, health, damage), mana(mana) {}

void Wizard::castSpell(Player* opponent) {
  if (mana >= 10) {
    mana -= 10;
    int spellDamage = damage + 10;
    opponent->takeDamage(spellDamage);
    cout << name << " casts a spell on " << opponent->getName() << " for "
         << spellDamage << " damage." << endl;
  } else {
    cout << name << " doesn't have enough mana to cast a spell." << endl;
  }
}

int Wizard::getMana() const { return mana; }