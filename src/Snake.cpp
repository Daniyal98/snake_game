#include "Snake.h"

Snake::Snake(int x, int y)
{
    size = 1;
    this->x = x;
    this->y = y;
    direction = RIGHT;
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
    if (direction == RIGHT)
        this->y++;
    else if (direction == LEFT)
        this->y--;
    else if (direction == UP)
        this->x--;
    else
        this->x++;
}

void Snake::changeDirection(Direction direction)
{
    this->direction = direction;
}

int Snake::getSize() const
{
    return this->size;
}

void Snake::setSize(int size)
{
    this->size = size;
}