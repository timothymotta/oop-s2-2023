#ifndef ASSISTS_H
#define ASSISTS_H

#include <iostream>

class Assists {
public:
std::tuple<int, int> createRandomLoc(int matrixWidth, int matrixHeight);
double evaluateDistance(std::tuple<int, int> loc1, std::tuple<int, int> loc2);

};

#endif