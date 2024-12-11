#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Board.h"

class Game {
private:
    Board board;
    Player player1;
    Player player2;
    Player* currentPlayer;

    bool playTurn();
    void switchPlayer();
public:
    Game(Player player1, Player player2,Player* currentPlayer);

    void start();


};

#endif // GAME_H
