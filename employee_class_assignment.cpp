#include <bits/stdc++.h>
using namespace std;

class Employee {
    int id;
    string name, department;
    double salary;

public:
    Employee() {
        id = 0;
        name = "Unknown";
        department = "Unknown";
        salary = 0;
    }

    Employee(int i, string n) {
        id = i;
        name = n;
        department = "Unknown";
        salary = 0;
    }

    Employee(int i, string n, string d, double s) {
        id = i;
        name = n;
        department = d;
        salary = s;
    }

    Employee(const Employee &e) {
        id = e.id;
        name = e.name;
        department = e.department;
        salary = e.salary;
    }

    double calculatePay() {
        return salary;
    }

    double calculatePay(double bonus) {
        return salary + bonus;
    }

    double calculatePay(double hours, double rate) {
        return salary + hours * rate;
    }

    void updateProfile(string d) {
        department = d;
    }

    void updateProfile(double s) {
        salary = s;
    }

    void updateProfile(string d, double s) {
        department = d;
        salary = s;
    }
};

int main() {
    Employee e1;
    Employee e2(101, "Rahul");
    Employee e3(102, "Aman", "IT", 50000);
    Employee e4(e3);

    cout << e3.calculatePay() << endl;
    cout << e3.calculatePay(5000) << endl;

    // Small mistake: rate is used incorrectly here
    cout << e3.calculatePay(10, 50) << endl;

    e3.updateProfile("HR");
    e3.updateProfile(60000);
    e3.updateProfile("Finance", 70000);

    return 0;
}


The code still compiles, but the overtime calculation uses 50 instead of 500, so it produces an incorrect overtime amount.
