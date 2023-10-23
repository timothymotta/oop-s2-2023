#include <iostream>
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"

int main() {
    // Create a Ship and a Mine
    Ship myShip(3, 4);
    Mine myMine(7, 7);

    // Move the Ship
    myShip.move(2, 3);

    // Explode the Mine and apply the Explosion effect to the Ship
    Explosion explosion = myMine.explode();
    explosion.apply(myShip);

    // Display Ship's new position and type
    std::cout << "Ship Position: (" << std::get<0>(myShip.getPos()) << ", " << std::get<1>(myShip.getPos()) << ")" << std::endl;
    std::cout << "Ship Type: " << myShip.getType() << std::endl;

    return 0;
}
