
#include <iostream>
#include <string>
using namespace std;

class basic_info {
public:
    string name;
    int age;

    void accept_basic_info() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void disp_basic_info() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class dept_info {
public:
    string dept_name;
    int dept_id;

    void accept_dept_info() {
        cout << "Enter Department Name: ";
        cin >> dept_name;
        cout << "Enter Department ID: ";
        cin >> dept_id;
    }

    void disp_dept_info() {
        cout << "Department Name: " << dept_name << endl;
        cout << "Department ID: " << dept_id << endl;
    }
};

class employee : public basic_info, public dept_info {
public:
    double salary;

    void accept_employee() {
        accept_basic_info();
        accept_dept_info();
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void disp_employee() {
        disp_basic_info();
        disp_dept_info();
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    employee emp;
    emp.accept_employee();
    cout << "\n--- Employee Details ---" << endl;
    emp.disp_employee();
    return 0;
}
