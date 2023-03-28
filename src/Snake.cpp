#include "Snake.h"

Snake::Snake(int x, int y)
{
    size = 1;
    this->x = x;
    this->y = y;
}

int Snake::getX() const
{
    return x;
}

int Snake::getY() const
{
    return y;
}

void Snake::move()
{
    this->x++;
}