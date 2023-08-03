
#include <iostream>

using namespace std;

struct Customer {
    int id{};
    string name;
    string email;
};

int main() {
    Customer customer;
    customer.id = 22;
    customer.name = "Aaron";
    customer.email = "aaron@g.com";

    Customer cust1 = {33, "roger", "roger@gmail.com"};

//    cout << "cust id " << customer.id << endl;

    vector<Customer> customers;
    customers.push_back(customer);
    customers.push_back(cust1);
    customers.push_back({104, "Frank", "frank@xzt.com"});

    for (const auto &c: customers) {
        cout << c.name << endl;
    }




    return 0;
}