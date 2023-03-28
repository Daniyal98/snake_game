#pragma once

#include <iostream>
using namespace std;

class Snake
{
    private:
    int size;
    int x;
    int y;

    public:
    Snake(int x, int y);
    int getX() const;
    int getY() const;
    void move();
};