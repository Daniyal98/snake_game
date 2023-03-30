#pragma once

#include <iostream>
#include "Snake.h"
#include <curses.h>
using namespace std;

class Board
{
    private:
    int height;
    int width;
    Snake* snake;

    public:
    Board(int height, int width);
    void drawBoard();
    void moveSnake();
    void changeSnakeDirection(Direction direction);
    bool checkForCollision();
};