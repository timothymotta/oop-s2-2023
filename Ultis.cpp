#include "Utils.h"
#include <cstdlib>
#include <ctime>
#include <cmath>

std::tuple<int, int> Utils::generateRandomPos(int gridWidth, int gridHeight) {
    int x = rand() % gridWidth;
    int y = rand() % gridHeight;
    return std::make_tuple(x, y);
}

double Utils::calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
    int x1, y1, x2, y2;
    std::tie(x1, y1) = pos1;
    std::tie(x2, y2) = pos2;
    return std::sqrt(std::pow(x1 - x2, 2) + std::pow(y1 - y2, 2));
}
