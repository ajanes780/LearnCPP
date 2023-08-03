
#include <iostream>

using namespace std;


int main() {


    string name = "Aaron Janes";
    string name2 = "John Janes";

    cout << boolalpha << name.starts_with("A") << "\n";
    cout << boolalpha << name.ends_with("s") << "\n";
    cout << name.back() << "\n";
    cout << name.front() << "\n";

    cout << name.size() << endl;
    cout << name.length() << endl;
    cout << name.insert(0, "I am ") << endl;

    if (name.find("Aa") == 0) {
        cout << "Not found in this string" << endl;
    } else {
        cout << "fount it " << endl;
    }




    return 0;
}