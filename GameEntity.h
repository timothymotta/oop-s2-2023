#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <tuple>

class GameEntity {
public:
    GameEntity(int x, int y, char type);
    std::tuple<int, int> getPos();
    char getType();
    
private:
    std::tuple<int, int> position;
    char type;
};

class Effect {
public:
    virtual void apply(GameEntity& entity) = 0;
};

class Utils {
public:
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight);
    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2);
};

#endif // GAMEENTITY_H
