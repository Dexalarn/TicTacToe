/*               MY C++ TicTacToe
*               Have been done with love by Aleksandr Kuznetsov
*/
#include "Game.h"
#include "Player.h"
#include "Board.h"

int main() {
    Player player1("Player 1", 'X');
    Player player2("Player 2", 'O');
    Game game(player1, player2,&player1);
    game.start();
    return 0;
}
