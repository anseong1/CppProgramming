// Title: Exercise5
// Date: 2026.05.21
// Author: 안성일

#include <iostream>
using namespace std;

class Vector {
    int* mem;
    int size;
public:
    Vector();
    Vector(int size, int val);
    void show();
    void show(int n);
};

Vector::Vector() {
    size = 5;
    mem = new int[size];
    for (int i = 0; i < size; i++)
        mem[i] = 0;
}

Vector::Vector(int size, int val) {
    this->size = size;
    mem = new int[size];
    for (int i = 0; i < size; i++)
        mem[i] = val;
}

void Vector::show() {
    for (int i = 0; i < size; i++)
        cout << mem[i] << " ";
    cout << endl;
}

void Vector::show(int n) {
    for (int i = 0; i < n; i++)
        cout << mem[i] << " ";
    cout << endl;
}

int main() {
    Vector x;
    Vector y(10, 8);
    x.show();
    y.show();
    y.show(3);

}
