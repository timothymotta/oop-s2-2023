#ifndef SNARE_H
#define SNARE_H

#include <iostream>
#include "Spot.h"
#include "Influence.h"

class Snare : public Spot, public Influence {
    public:
    Snare(int x, int y);
    bool operative;
    bool isOperative();
    void implement();
};

#endif