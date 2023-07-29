#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;


short rollDice(short a, short b ) {
    return (rand() % (a - b + 1) + a);
}

int main() {

    srand(time(nullptr));
    short minValue{1};
    short maxValue{6};

    short dice1 = rollDice(minValue, maxValue);
    short dice2 = rollDice(minValue, maxValue);

    std::cout << "Dice one equals: " << dice1 << endl;
    std::cout << "Dice two equals: " << dice2 << endl;


    return 0;
}

