#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>

using namespace std;


short rollDice(short a, short b ) {
    return (rand() % (a - b + 1) + a);
}

int main() {

//    srand(time(nullptr));
//    short minValue{1};
//    short maxValue{6};
//
//    short dice1 = rollDice(minValue, maxValue);
//    short dice2 = rollDice(minValue, maxValue);
//
//    cout << left;
//    cout << "Dice one equals: " <<  dice1 << endl;
//    cout << "Dice two equals: " << dice2 << endl;
//    cout << fixed << setprecision(4) << 12.345678;


    cout << left << setw(10) << "Course" << setw(10) << "Students" << endl;
    cout << left << setw(10) << "C++" << right << setw(10) << "100" << endl;
    cout << left << setw(10) << "JavaScript" << setw(10) << right << "50" << endl;

    return 0;
}

