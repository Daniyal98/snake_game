#include "Board.h"

Board::Board(int height, int width)
{
    this->height = height;
    this->width = width;
}

void Board::drawBoard()
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == 0 || j == 0 || i == height - 1 || j == width - 1)
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