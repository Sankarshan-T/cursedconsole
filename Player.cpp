#include <iostream>
#include "Player.h"

using namespace std;

Player::Player(string playerName)
{
    name = playerName;
    hp = 30;
    maxHp = 30;
    attack = 3;
}

void Player::showStats()
{
    cout << "\n Player Stats: \n";
    cout << "Name: " << name << "\n";
    cout << "HP: " << hp << "\n";
    cout << "Attack: " << attack << "\n";
}

string Player::getName()
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