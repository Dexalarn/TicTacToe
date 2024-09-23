/*               MY C++ TicTacToe
*               Have been done with love by Aleksandr Kuznetsov
*/

#include <iostream>
#include <vector>
#include <string>
#define size 3
#include "Mapping.h"
#include "Rules.h"
using namespace std;



std::vector<std::vector<tile>> Map = {
        { tile(0), tile(0), tile(0) },
        { tile(0), tile(0), tile(0) },
        { tile(0), tile(0), tile(0) }
};


int main() {
    DrawMap(Map);
    bool playerTurn = true;   //true if X turn false if O turn
    for (int i = 0; i < 9; i++) {
        if (playerTurn) {
            cout << "X player turn" << endl;
        }
        else {
            cout << "O player turn" << endl;
        }
        if (Move(playerTurn,Map)) {
            playerTurn = !playerTurn;
        }
        DrawMap(Map);
        if (WinCheck(Map)==true) {
            cout << "X won" << endl;
            break;
        }
        else if(WinCheck(Map) == false){
            cout << "O won" << endl;
            break;
        }
        else {
            if (i == 8) {
                cout << "Draw" << endl;
            }
            
        }
    }
    return 0;
}