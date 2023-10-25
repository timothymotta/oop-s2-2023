#include "Game.h"
#include "GameEntity.h"
#include "Utils.h"
#include <iostream>

int main() {
    Game game;
    
    std::vector<GameEntity*> entities = game.initGame(3, 2, 10, 10);
    
    for (int i = 0; i < entities.size(); i++) {
        GameEntity* entity = entities[i];
        std::cout << "Entity Type: " << entity->getType() << ", Position: (" << std::get<0>(entity->getPos()) << ", " << std::get<1>(entity->getPos()) << ")\n";
    }

    game.gameLoop(10, 2.0);

    return 0;
}
