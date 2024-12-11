#pragma once
#ifndef BOARD_H
#define BOARD_H

class Board {
private:
    char grid[3][3];
public:
    Board();

    void display() const;
    bool makeMove(int row, int col, char symbol);
    bool isFull() const;
    bool checkWin(char symbol) const;


};

#endif // BOARD_H
