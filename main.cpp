
#include <iostream>
#include <fstream>

using namespace std;



int main() {
    ofstream file;
    file.open("test-data.txt");
    if (file.is_open()) {
        file << "Hello World" << endl;
        cout << "Finished" << endl;
        file.close();
    }

    return 0;
}