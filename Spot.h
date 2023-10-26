#ifndef SPOT_H
#define SPOT_H

#include <iostream>

class Spot {
    public:
    char category;
    Spot(int x, int y, char category);
    std::tuple<int, int> getLoc();
    char getCategory();
    void setLoc(int x, int y);
    void setCategory(char category);

    private:
};


#endif 