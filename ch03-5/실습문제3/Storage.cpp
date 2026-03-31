// Title: Storage
// Date: 2026.03.31
// Author: 안성일

#include <iostream>
using namespace std;

class Storage {
private:
    double data[10];  
    int count;        

public:
    Storage();
    void put(double temp);
    void dump();
    double getAvg();
};


Storage::Storage() {
    count = 0;
    for (int i = 0; i < 10; i++)
        data[i] = 0;
}


void Storage::put(double temp) {
    if (count < 10) {
        data[count] = temp;
        count++;
    } else {
        cout << "저장 공간이 가득 찼습니다." << endl;
    }
}


void Storage::dump() {
    for (int i = 0; i < count; i++)
        cout << data[i] << endl;
    cout << endl;
}


double Storage::getAvg() {
    double sum = 0;
    for (int i = 0; i < count; i++)
        sum += data[i];
    return sum / count;
}

int main() {
    Storage a;

    a.put(36.7);   
    a.put(36.9);   
    a.put(36.4);   
    a.dump();     
    cout << "평균 체온은 " << a.getAvg() << "입니다." << endl;

    return 0;
}
