#ifndef EXPLOSION_H
#define EXPLOSION_H

#include "GameEntity.h"

class Explosion : public GameEntity, public Effect {
public:
    Explosion(int x, int y);
    void apply(GameEntity& entity) override;
};

#endif // EXPLOSION_H
