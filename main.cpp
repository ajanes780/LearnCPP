#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {

    string names[2];

    cout << "what is your name ?";
    getline(cin, names[0]);

    cout << "what is your name ?";
    getline(cin, names[1]);

    cout << names[0] << " " << names[1] << endl;

    return 0;
}

