#include <iostream>
#include <random>

using namespace std;

int rollDice(int sides)
{
    random_device randomDevice;
    mt19937 generator(randomDevice());
    uniform_int_distribution<int> distribution(1, sides);

    return distribution(generator);
}

int main()
{
    cout << "X - CURSED CONSOLE - X\n";
    cout << "Welcome to this cursed cli ;)\n";

    int roll = rollDice(6);

    std::cout << "You rolled a " << roll << "!\n";

    return 0;
}