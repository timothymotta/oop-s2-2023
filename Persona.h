#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include "Spot.h"

class Persona : public Spot{
    public:
    Persona(int x, int y);
    void shift(int dx, int dy);

};

#endif