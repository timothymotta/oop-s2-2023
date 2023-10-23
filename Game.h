#ifndef GAME_H
#define GAME_H

#include <vector>
#include "GameEntity.h"
#include "Utils.h"

class Game {
public:
    std::vector<GameEntity*> get_entities();
    void set_entities(const std::vector<GameEntity*>& entities);
    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight);
    void gameLoop(int maxIterations, double mineDistanceThreshold);
    ~Game(); // Destructor to clean up dynamically allocated entities

private:
    std::vector<GameEntity*> entities;
};

#endif
