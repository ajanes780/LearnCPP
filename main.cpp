
#include <iostream>

using namespace std;

struct Customer {
    int id;
    string name;
    string email;
};

int main() {
    Customer customer;
    customer.id = 22;
    customer.name = "Aaron";
    customer.email = "aaron@g.com";


    return 0;
}