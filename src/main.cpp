#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <thread>
#include <curses.h>
#include "Board.h"
using namespace std;

void checkForInput(Board* board)
{              
    while (1)
    {
        int c = 0;
        switch(c = getch()) 
        {
        case KEY_UP:
            board->changeSnakeDirection(Direction::UP);
            break;
        case KEY_DOWN:
            board->changeSnakeDirection(Direction::DOWN);
            break;
        case KEY_LEFT:
            board->changeSnakeDirection(Direction::LEFT);
            break;
        case KEY_RIGHT:
            board->changeSnakeDirection(Direction::RIGHT);
            break;
        }
    }
}

int main()
{
    initscr();                  /* curses initialization */
    keypad(stdscr, TRUE);       /* enable KEY_UP/KEY_DOWN/KEY_RIGHT/KEY_LEFT */
    Board* board = new Board(30, 30);
    std::thread t(checkForInput, board);
    while (1)
    {
        clear();
        if (board->checkForCollision())
        {
            printw("Game Over!\n");
            refresh();
            exit(0);
        }

        board->drawBoard();
        refresh();
        board->moveSnake();
        usleep(500000);
    }
}