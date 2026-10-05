#include <iostream>
#include <random>

using namespace std;

int rollDice(int sides) {
    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<int> distribution(1, sides);

    return distribution(generator);
}

int main()
{
    cout << "cursed console\n"; 
    cout << "welcome to this crooked console\n";

    int roll = rollDice(6);
    cout << "You rolled a " << roll << "!\n";
    
    return 0;
}   