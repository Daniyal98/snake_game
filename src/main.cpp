#include <iostream>
#include <stdlib.h>
#include "Board.h"
using namespace std;

int main()
{
    Board* board = new Board(30, 30);
    while (1)
    {
        system("cls");
        board->drawBoard();
    }
}