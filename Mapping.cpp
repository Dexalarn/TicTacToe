#include <iostream>
#include <vector>
#include <string>
#define size 3
#include "Mapping.h"
using namespace std;




tile::tile(int val) : value(val) {}

std::string tile::DrawTile() const {
    if (value == 1) {
        return "X ";
    }
    else if (value == 2) {
        return "O ";
    }
    else {
        return "[]"; // Unicode character for a filled square
    }
}





bool Move(bool Turn, std::vector<std::vector<tile>>& Map) {
    int placeX;
    int placeY;
    cin >> placeX >> placeY;
    if (placeX < 4 && placeY < 4 && placeX>0 && placeY>0) {
        if (Map[placeX - 1][placeY - 1].value == 0) {
            Map[placeX - 1][placeY - 1].value = (Turn) ? 1 : 2;
            return true;
        }
        else {
            cout << "This tile already occupied, chose another one" << endl;
            return false;
        }
    }
    else {
        cout << "incorrect input, please input value like this: Line Column. (for example 1 2)" << endl;
        return false;
    }


}


void DrawMap(std::vector<std::vector<tile>>& Map) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "  " << Map[i][j].DrawTile();
        }
        cout << endl;
    }
}