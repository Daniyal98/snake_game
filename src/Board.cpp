#include "Board.h"

Board::Board(int height, int width)
{
    this->height = height;
    this->width = width;
    snake = new Snake(15, 15);
}

void Board::drawBoard()
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == snake->getX() && j == snake->getY())
            {
                cout << "@";
            }

            else if (i == 0 || j == 0 || i == height - 1 || j == width - 1)
            {
                cout << "#";
            }

            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void Board::moveSnake()
{
    snake->move();
}