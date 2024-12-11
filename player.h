#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    std::string name;
    char symbol;
public:
    //constructor
    Player(std::string name, char symbol) : name(name), symbol(symbol) {}

    //encapsulation
    std::string getName() const {
        return name;
    }

    char getSymbol() const {
        return symbol;
    }

};

#endif // PLAYER_H
