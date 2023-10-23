#include "Ship.h"

Ship::Ship(int x, int y) : GameEntity(x, y, 'S') {}

void Ship::move(int dx, int dy) {
    // Update the ship's position
    std::tuple<int, int> currentPosition = getPos();
    int currentX = std::get<0>(currentPosition);
    int currentY = std::get<1>(currentPosition);

    int newX = currentX + dx;
    int newY = currentY + dy;

    // Update the ship's position
    position = std::make_tuple(newX, newY);
}
