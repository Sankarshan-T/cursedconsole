#include <iostream>
#include <random>

#include "Player.h"

using namespace std;

int rollDice(int sides)
{
    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<int> distribution(1, sides);

    return distribution(generator);
}

int main()
{
    cout << "cursed console\n";
    cout << "welcome to this crooked console\n";

    Player player("cream :)");
    player.showStats();

    cout << "You rolled a " << rollDice(6) << "!\n";

    return 0;
}