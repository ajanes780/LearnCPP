#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>

using namespace std;

float cal_commission(float rate, float salary) {
    float comm = salary * rate;

    return comm;
}

int main() {

    cout << "What is your salary ? " << endl;
    float sales;
    cin >> sales;
    float commission;


    if (sales <= 10'000) {
        commission = cal_commission(.10, sales);
        cout << "Your commission is equal to: " << commission << endl;

    }
    if (sales >= 10'001 && sales <= 15'000) {
        commission = cal_commission(.15, sales);
        cout << "Your commission is equal to: " << commission << endl;
    }
    if (sales >= 15'001) {
        commission = cal_commission(.20, sales);
        cout << "Your commission is equal to: " << commission << endl;
    }
}