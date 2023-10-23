#include <iostream>
#include "Game.h"

int main() {
    Game game;
    std::vector<GameEntity*> entities = game.initGame(3, 2, 10, 10);
    game.set_entities(entities);

    // Run the game loop with a maximum of 5 iterations and a mine distance threshold of 3.0
    game.gameLoop(5, 3.0);

    return 0;
}
