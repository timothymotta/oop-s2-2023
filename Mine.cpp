#include "Mine.h"

Mine::Mine(int x, int y) : GameEntity(x, y, 'M') {}

Explosion Mine::explode() {
    return Explosion(std::get<0>(position), std::get<1>(position));
}
