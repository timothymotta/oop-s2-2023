#ifndef WIZARD_H
#define WIZARD_H

#include <iostream>
#include <string>

using namespace std;

#include "player.h" // Include the base class header

class Wizard : public Player {
private:
    int mana;

public:
    Wizard(std::string name, int health, int damage, int mana);
    void castSpell(Player* opponent);
    int getMana() const;
};

#endif