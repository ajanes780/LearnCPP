#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>

using namespace std;


//short rollDice(short a, short b ) {
//    return (rand() % (a - b + 1) + a);
//}

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


//    cout << left << setw(15) << "Course" << setw(10) << "Students" << endl
//         << left << setw(15) << "C++" << right << setw(10) << "100" << endl
//         << left << setw(15) << "JavaScript" << setw(10) << right << "50" << endl;
//
//    bool isPassing {true};
//    cout << boolalpha << isPassing << endl;


    string street, city, state, zipcode;
    cout << "What street do you live on? ";
    getline(cin, street);
    cout << "What city do you live in ?";
    getline(cin, city);
    cout << "what state do you live in ?";
    getline(cin, state);
    cout << "What is your zipcode ?";
    getline(cin, zipcode);

    cout
            << street << endl
            << city << ", " << state << ", " << zipcode << endl;


    return 0;
}

