#include "Header.h"

class tile{       // The class
public:             // Access specifier
    int val;        // 0 - empty, 1- 'X' , 2 - 'O'
    char DrawTile() {
        if (val == 1) {
            return 'X';
        }
        else if (val == 2) {
            return 'O';
        }

    };
};