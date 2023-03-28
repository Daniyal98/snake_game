#include <iostream>
#include "Board.h"
using namespace std;

int main()
{
    Board* board = new Board(30, 30);
    board->drawBoard();
}