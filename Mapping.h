#pragma once


#ifndef MAPPING_H
#define MAPPING_H

#include <string>

class tile {
public:
    int value; // 0 - empty, 1- 'X', 2 - 'O'

    tile(int val); // Constructor

    std::string DrawTile() const; // DrawTile method
};

void DrawMap(std::vector<std::vector<tile>>& Map);
bool Move(bool Turn, std::vector<std::vector<tile>>& Map);

#endif // MAPPING_H