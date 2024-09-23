#include <iostream>
#include <vector>
#include <string>
#define size 3
#include "Rules.h"
#include "Mapping.h"
using namespace std;

bool WinCheck(std::vector<std::vector<tile>>& Map) {  //returns true if X won, false id O won, NaN if nobody won

    for (int i = 0; i < size; i++) {
        if (Map[i][0].value == 1 && Map[i][1].value == 1 && Map[i][2].value == 1) { //X won horizontaly
            return true;
        }
        if (Map[0][i].value == 1 && Map[1][i].value == 1 && Map[2][i].value == 1) { //X won Verticaly
            return true;
        }
        if (Map[i][0].value == 2 && Map[i][1].value == 2 && Map[i][2].value == 2) { //O won horizontaly
            return false;
        }
        if (Map[0][i].value == 2 && Map[1][i].value == 2 && Map[2][i].value == 2) { //O won Verticaly
            return false;
        }
    }
    if (Map[0][0].value == 1 && Map[1][1].value == 1 && Map[2][2].value == 1) {
        return true;

    }
    if (Map[0][0].value == 2 && Map[1][1].value == 2 && Map[2][2].value == 2) {
        return false;

    }
    if (Map[0][2].value == 1 && Map[1][1].value == 1 && Map[2][0].value == 1) {
        return true;

    }
    if (Map[0][2].value == 2 && Map[1][1].value == 2 && Map[2][0].value == 2) {
        return false;

    }
}