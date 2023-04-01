#include "Food.h"

Food::Food()
{
    x = 0; 
    y = 0;
}

int Food::getX() const
{
    return x;
}

int Food::getY() const
{
    return y;
}

void Food::setX(int x)
{
    this->x = x;
}

void Food::setY(int y)
{
    this->y = y;
}