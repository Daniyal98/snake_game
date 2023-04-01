#include "Board.h"

Board::Board(int height, int width)
{
    this->height = height;
    this->width = width;
    snake = new Snake(15, 15);
    food = new Food();
}

void Board::drawBoard()
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == snake->getX() && j == snake->getY())
            {
                printw("@");
            }

            else if (i == food->getX() && j == food->getY())
            {
                printw("*");
            }

            else if (i == 0 || j == 0 || i == height - 1 || j == width - 1)
            {
                printw("#");
            }

            else
            {
                printw(" ");
            }
        }
        printw("\n");
    }
}

void Board::moveSnake()
{
    snake->move();
}

void Board::changeSnakeDirection(Direction direction) 
{
    snake->changeDirection(direction);
}

bool Board::checkForCollision()
{
    if (snake->getX() == 0 || snake->getX() == height - 1 || snake->getY() == 0 || snake->getY() == width - 1)
        return true;

    return false;
}

void Board::generateFood()
{
    srand(time(NULL));
    int x = 0;
    int y = 0;
    while ((x == snake->getX() && y == snake->getY()) || (food->getX() == 0 || food->getX() == 29) || (food->getY() == 0 || food->getY() == 29))
    {
        x = rand() % 30;
        y = rand() % 30;
        food->setX(x);
        food->setY(y);
    }
}