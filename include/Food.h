#pragma once
#include <iostream>
using namespace std;

class Food
{
    private:
    int x;
    int y;

    public:
    Food();
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);
};