// Title: MyStack
// Date: 2026.05.14
// Author: 안성일

#include <iostream>
using namespace std;

class MyStack {
    int* p;
    int size = 0;
    int tos = 0;
public:
    MyStack() {
        p = nullptr;
        size = 0;
        tos = 0;
    }

    MyStack(int size) {
        this->size = size;
        p = new int[size];
        tos = 0;
    }

    MyStack(const MyStack& src) {
        size = src.size;
        tos = src.tos;
        p = new int[size];
        for (int i = 0; i < tos; i++) {
            p[i] = src.p[i];
        }
    }

    ~MyStack() {
        if (p != nullptr)
            delete[] p;
    }

    bool push(int n) {
        if (tos == size)
            return false;
        p[tos++] = n;
        return true;
    }

    bool pop(int& n) {
        if (tos == 0)
            return false;
        n = p[--tos];
        return true;
    }
};

int main() {
    MyStack a(10);
    a.push(10); a.push(20);

    MyStack b = a;
    b.push(30);

    int n;
    a.pop(n);
    cout << "스택 a에서 팝한 값 " << n << endl;
    b.pop(n);
    cout << "스택 b에서 팝한 값 " << n << endl;
}
