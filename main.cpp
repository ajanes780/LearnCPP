
#include <iostream>

using namespace std;

struct Birthday {
    short year = 1990;
    short day = 01;
    string month = "january";

    [[nodiscard]] string printBirthday() const {
        return "Customer DOB : " + month + " " + to_string(day) + " " + to_string(year);
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


    Customer Bob{
            232,
            "Bob",
            "bobby@hotmail.com",
            {1981, 27, "April"}
    };
    cout << Bob.DOB.printBirthday() << endl;

    vector<Customer> customers;
    customers.push_back(customer);
    customers.push_back(cust1);
    customers.push_back({104, "Frank", "frank@xzt.com"});
    customers.push_back(Bob);

    for (const auto &c: customers) {
        cout << "customer name: " << c.name << " " << c.DOB.printBirthday() << endl;

    }


    return 0;
}