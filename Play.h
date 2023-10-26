#ifndef PLAY_H
#define PLAY_H

#include <vector>
#include <iostream>
#include "Spot.h"
#include "Persona.h"

class Play {
    private:
    std::vector<Spot*> matrix;

    public:
    std::vector<Spot*>& getMatrix();
    Play(int numPersonas, int numSnares, int matrixWidth, int matrixHeight);
    playCycle(int maxCycles, double snareTriggerDistance);

};

#endif