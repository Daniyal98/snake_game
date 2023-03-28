#pragma once

#include <iostream>
using namespace std;

class Board
{
    private:
    int height;
    int width;

    public:
    Board(int height, int width);
    void drawBoard();
};