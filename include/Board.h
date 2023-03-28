#pragma once

#include <iostream>
#include "Snake.h"
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
};