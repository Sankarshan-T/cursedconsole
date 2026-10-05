#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
private:
    std::string name;
    int hp;
    int maxHp;
    int attack;

public:
    Player(std::string playerName);

    void showStats();

    std::string getName();
    int getHp();
    int getAttack();
};

#endif