#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <tuple>

class GameEntity {
public:
    GameEntity(int x, int y, char type);
    std::tuple<int, int> getPos();
    char getType();
    virtual void apply(GameEntity& entity) = 0;

private:
    std::tuple<int, int> position;
    char type;
};

#endif
