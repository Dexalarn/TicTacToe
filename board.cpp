#include "Board.h"
#include <iostream>
using namespace std;

Board::Board() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            grid[i][j] = ' ';
        }
    }
}

void Board::display() const {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << grid[i][j];
            if (j < 2) cout << " | ";
        }
        cout << endl;
        if (i < 2) cout << "--|---|--" << endl;
    }
}

bool Board::makeMove(int row, int col, char symbol) {
    if (row >= 0 && row < 3 && col >= 0 && col < 3 && grid[row][col] == ' ') {
        grid[row][col] = symbol;
        return true;
    }
    return false;
}

bool Board::isFull() const {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (grid[i][j] == ' ') return false;
        }
    }
    return true;
}

bool Board::checkWin(char symbol) const {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if ((grid[i][0] == symbol && grid[i][1] == symbol && grid[i][2] == symbol) ||
            (grid[0][i] == symbol && grid[1][i] == symbol && grid[2][i] == symbol)) {
            return true;
        }
    }
    // Check diagonals
    if ((grid[0][0] == symbol && grid[1][1] == symbol && grid[2][2] == symbol) ||
        (grid[0][2] == symbol && grid[1][1] == symbol && grid[2][0] == symbol)) {
        return true;
    }
    return false;
}

