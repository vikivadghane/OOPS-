#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter a value for a: ";
    cin >> a;

    cout << "Enter a value for b: ";
    cin >> b;

    try {
        if (b == 0) {
            throw b;
        }

        c = a / b;
        cout << "The div \t << c";
    }
    catch (int x) {
        cout << "\nDiv by zero not permited";
        cout << "The error is div by: \t" << x;
    }

    cout << endl << "At the end of main() function";

    return 0;
}