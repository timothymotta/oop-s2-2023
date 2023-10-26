#ifndef INFLUENCE_H
#define INFLUENCE_H

#include "Spot.h"
#include <iostream>

class Influence : public Spot { 
    public:
    virtual void implement(Spot & spot);

    private:

};


#endif