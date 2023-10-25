#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"
#include <iostream>

int main() {
    Ship ship(1, 1);
    Mine mine(5, 5);

    ship.move(1, 0);
    Explosion explosion(5, 5);
    explosion.apply(ship);

    std::cout << "Ship Type: " << ship.getType() << ", Position: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")\n";
    std::cout << "Mine Type: " << mine.getType() << ", Position: (" << std::get<0>(mine.getPos()) << ", " << std::get<1>(mine.getPos()) << ")\n";

    return 0;
}
