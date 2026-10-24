#include <iostream>
#include <string>
using namespace std;

class String {
    string str;

public:

    String() {
        str = "";
    }

    // Parameterized constructor
    String(string s) {
        str = s;
    }

    // Function to accept a string
    void accept() {
        cout << "Enter a string: ";
        getline(cin >> ws, str);
    }

    // Function to display a string
    void display() {
        cout << "String: " << str << endl;
    }

    // Destructor
    ~String() {
        cout << "Destructor called." << endl;
    }
};

int main() {
    String s1;

    cout << "Default constructor:\n";
    s1.display();

    s1.accept();
    s1.display();

    cout << "\nParameterized constructor:\n";
    String s2("Hello World");
    s2.display();

    return 0;
}
