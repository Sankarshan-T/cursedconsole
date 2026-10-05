#include <iostream>
#include "Player.h"

Player::Player(std::string playerName)
{
    name = playerName;
    hp = 30;
    maxHp = 30;
    attack = 3;
}

void Player::showStats()
{
    std::cout << "\n PLAYER STATS :D \n";
    std::cout << "Name:   " << name << "\n";
    std::cout << "HP:     " << hp << "/" << maxHp << "\n";
    std::cout << "Attack: " << attack << "\n";
}

std::string Player::getName()
{
    return name;
}

int Player::getHp()
{
    return hp;
}

int Player::getAttack()
{
    return attack;
}