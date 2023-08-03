
#include <iostream>

using namespace std;

struct Birthday {
    short year = 1990;
    short day = 01;
    string month = "january";

    void tostring() {
        cout << "customer DOB : " << month << day << year << endl;
    }
};

struct Customer {
    int id{};
    string name;
    string email;
    Birthday DOB;
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
        cout << c.DOB.day << endl;
    }




    return 0;
}