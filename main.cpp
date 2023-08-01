
#include <iostream>

using namespace std;


int main() {


    string name = "Aaron Janes";
    string name2 = "John Janes";

    cout << boolalpha << name.starts_with("A") << "\n";
    cout << boolalpha << name.ends_with("A") << "\n";
    cout << name.back() << "\n";
    cout << name.front() << "\n";

    cout << name.size() << endl;


    return 0;
}