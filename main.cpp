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

void restart() {
  for (int i = 0; i < size; i++) {
      for (int j = 0; j < size; j++) {
          Map[i][j].value = 0;
      }
  }
}

int main() {
    while (true) {
        DrawMap(Map);
        bool playerTurn = true;   //true if X turn false if O turn
        for (int i = 0; i < 9; i++) {
            if (playerTurn) {
                cout << "X player turn" << endl;
            }
            else {
                cout << "O player turn" << endl;
            }
            if (Move(playerTurn, Map)) {
                playerTurn = !playerTurn;
            }
            DrawMap(Map);
            if (WinCheck(Map) == true) {
                cout << "X won" << endl;
                break;
            }
            else if (WinCheck(Map) == false) {
                cout << "O won" << endl;
                break;
            }
            else {
                if (i == 8) {
                    cout << "Draw" << endl;
                }

            }
        }
        cout << "type q to exit or r to restsrt " << endl;
        char input;
        cin >> input;
        if (input == 'r') {
            restart();
        }
        else if(input=='q') {
            break;
        }

    }
    
    return 0;
}