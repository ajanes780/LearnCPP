#include "Rectangle.h"
#include <iostream>

using namespace std;


int main() {
    Rectangle rectangle;

    rectangle.height = 10;
    rectangle.width = 20;
    cout << rectangle.getArea() << endl;


    return 0;
}