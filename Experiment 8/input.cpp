#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int id;
    string name;

public:
    void getEmployee() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Name: ";
        cin >> ws;
        getline(cin, name);
    }

    void displayEmployee() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
    }
};

class Salary {
protected:
    float basic, hra, da, deductions;

public:
    void getSalary() {
        cout << "Enter Basic Salary: ";
        cin >> basic;
        cout << "Enter HRA: ";
        cin >> hra;
        cout << "Enter DA: ";
        cin >> da;
        cout << "Enter Deductions: ";
        cin >> deductions;
    }

    float calculateNetSalary() {
        return basic + hra + da - deductions;
    }
};

class EmployeeSalary : public Employee, public Salary {
public:
    void display() {
        cout << "\n--- Employee Salary Details ---\n";
        displayEmployee();
        cout << "Basic Salary: " << basic << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Deductions: " << deductions << endl;
        cout << "Net Salary: " << calculateNetSalary() << endl;
    }
};

int main() {
    EmployeeSalary e;

    e.getEmployee();
    e.getSalary();
    e.display();

    return 0;
}
