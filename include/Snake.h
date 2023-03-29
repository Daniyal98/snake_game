#pragma once

#include <iostream>
using namespace std;

enum Direction 
{
    UP = 0,
    DOWN,
    LEFT,
    RIGHT
};

class Snake
{
    private:
    int size;
    int x;
    int y;
    Direction direction;

    public:
    Snake(int x, int y);
    int getX() const;
    int getY() const;
    void move();
};