#include "Game.h"
#include <iostream>
using namespace std;

Game::Game(Player player1, Player player2, Player* currentPlayer) : player1(player1), player2(player2), currentPlayer(&player1) {}

// Function to clear the terminal screen
static void clearScreen() {
#ifdef _WIN32
    std::system("cls");
#else
    std::system("clear");
#endif
}
void Game::start() {
    while (true) {
        board.display();
        if (playTurn()) break;
        switchPlayer();
        clearScreen();
    }
}

bool Game::playTurn() {
    int row, col;
    cout << currentPlayer->getName() << " (" << currentPlayer->getSymbol() << "), enter your move (row and column): ";
    cin >> row >> col;
    while (!board.makeMove(row - 1, col - 1, currentPlayer->getSymbol())) {
        cout << "Invalid move. Try again: ";
        cin >> row >> col;
    }

    if (board.checkWin(currentPlayer->getSymbol())) {
        board.display();
        cout << currentPlayer->getName() << " wins!" << endl;
        return true;
    }

    if (board.isFull()) {
        board.display();
        cout << "It's a draw!" << endl;
        return true;
    }

    return false;
}

void Game::switchPlayer() {
    currentPlayer = (currentPlayer->getSymbol() == player1.getSymbol()) ? &player2 : &player1;
}
