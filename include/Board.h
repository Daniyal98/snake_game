#pragma once

#include <iostream>
#include "Snake.h"
#include "Food.h"
#include <curses.h>
using namespace std;

class Board
{
    private:
    int height;
    int width;
    Snake* snake;
    Food* food;

    public:
    Board(int height, int width);
    void drawBoard();
    void moveSnake();
    void changeSnakeDirection(Direction direction);
    bool checkForCollision();
    void generateFood();
    void checkForFoodEaten();
};