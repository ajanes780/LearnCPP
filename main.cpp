#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;



int main() {

    srand(time(nullptr));
    short minValue{1};
    short maxValue{6};

    int dice1 =   (rand() % (minValue - maxValue + 1) + minValue);
    int dice2 =   (rand() % (minValue - maxValue + 1) + minValue);

    std::cout << "Dice one equals: " << dice1 << endl;
    std::cout << "Dice two equals: " << dice2 << endl;


    return 0;
}

