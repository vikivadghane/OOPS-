
#include <iostream>
using namespace std;

class shape {
public:
    virtual void draw() {
        cout << "\nDrawing random shape";
    }
};

class rectangle : public shape {
public:
    void draw() override {
        cout << "\nDrawing rectangle\n";

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 15; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};

class circle : public shape {
public:
    void draw() override {
        cout << "\nDrawing circle\n";

        int r = 5;

        for (int i = -r; i <= r; i++) {
            for (int j = -2 * r; j <= 2 * r; j++) {
                if (4 * i * i + j * j <= 4 * r * r &&
                    4 * i * i + j * j >= 3 * r * r) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    rectangle r1;
    circle c1;

    r1.draw();
    c1.draw();

    return 0;
}
