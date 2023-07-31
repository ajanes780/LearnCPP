
#include <iostream>

using namespace std;


int main() {
    int capactiy = 5;
    int *numbers = new int[capactiy];
    int entries = 0;

    while (true) {
        cout << "Number: ";
        cin >> numbers[entries];
        if (cin.fail()) break;
        entries++;
        if (entries == capactiy) {

            // create a temp array (twice the size )
            int *temp = new int[capactiy * 2];

            // copy all the elements
            for (int i = 0; i < entries - 1; i++) {
                temp[i] = numbers[i];
            }
            delete[] numbers;
            numbers = temp;

            // Have the numbers pointer point to the new array

        }
    }

    for (int i = 0; i < entries; i++) {
        cout << numbers[i] << endl;
    }

    delete[] numbers;
    return 0;
}