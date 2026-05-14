// Title: Collector
// Date: 2026.05.14
// Author: 안성일

#include <iostream>
using namespace std;

class Collector {
    int* p;
    int size = 0;
public:
    Collector(int size, int values[]) {
        this->size = size;
        p = new int[size];
        for (int i = 0; i < size; i++)
            p[i] = values[i];
    }

    ~Collector() {
        delete[] p;
    }

    void show() {
        cout << "데이터 수 " << size << ": ";
        for (int i = 0; i < size; i++)
            cout << p[i] << " ";
        cout << endl;
    }

    int getSize() { return size; }
    int get(int index) { return p[index]; }
};

double calcAvg(Collector& c) {
    double sum = 0;
    for (int i = 0; i < c.getSize(); i++)
        sum += c.get(i);
    return sum / c.getSize();
}

int main() {
    int temp[] = { 69, 70, 71, 72, 74 };
    Collector weight(4, temp);
    double avg = calcAvg(weight);
    weight.show();
    cout << "평균은 " << avg << endl;
}
