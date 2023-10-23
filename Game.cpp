#include "Game.h"
using namespace std;

std::vector<GameEntity*> Game::get_entities() {
    return entities;
}

void Game::set_entities(const std::vector<GameEntity*>& entities) {
    this->entities = entities;
}

std::vector<GameEntity*> Game::initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
    for (int i = 0; i < numShips; i++) {
        std::tuple<int, int> shipPos = Utils::generateRandomPos(gridWidth, gridHeight);
        Ship* newShip = new Ship(std::get<0>(shipPos), std::get<1>(shipPos));
        entities.push_back(newShip);
    }

    for (int i = 0; i < numMines; i++) {
        std::tuple<int, int> minePos = Utils::generateRandomPos(gridWidth, gridHeight);
        Mine* newMine = new Mine(std::get<0>(minePos), std::get<1>(minePos));
        entities.push_back(newMine);
    }

    return entities;
}

void Game::gameLoop(int maxIterations, double mineDistanceThreshold) {
    for (int iteration = 1; iteration <= maxIterations; iteration++) {
        // Move all Ship objects to the right (1, 0)
        for (GameEntity* entity : entities) {
            if (entity->getType() == 'S') {
                dynamic_cast<Ship*>(entity)->move(1, 0);
            }
        }

        // Check for Ship proximity to Mines and explode if needed
        for (GameEntity* ship : entities) {
            if (ship->getType() == 'S') {
                for (GameEntity* mine : entities) {
                    if (mine->getType() == 'M') {
                        double distance = Utils::calculateDistance(ship->getPos(), mine->getPos());
                        if (distance <= mineDistanceThreshold) {
                            Explosion explosion = dynamic_cast<Mine*>(mine)->explode();
                            explosion.apply(*ship);
                        }
                    }
                }
            }
        }

        // Display the state of the game after each iteration
        std::cout << "Iteration " << iteration << ":\n";
        for (GameEntity* entity : entities) {
            std::tuple<int, int> position = entity->getPos();
            std::cout << "Entity Type: " << entity->getType() << ", Position: (" << std::get<0>(position) << ", " << std::get<1>(position) << ")\n";
        }
        std::cout << "---------------------------\n";
    }
}

Game::~Game() {
    for (GameEntity* entity : entities) {
        delete entity;
    }
    entities.clear();
}
