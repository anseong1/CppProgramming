// Title : information
// Data : 2026.03.12
// Author : 안성일

#include <iostream>
#include <string>
using namespace std;

int main() {
    int id;
    string name, address;

    cout << "학번을 입력하시오: ";
    cin >> id;

    cin.ignore();

    cout << "이름을 입력하시오: ";
    getline(cin, name);

    cout << "주소를 입력하시오: ";
    getline(cin, address);

    cout << endl;
    cout << "1. 학번:" << id << endl;
    cout << "2. 이름:" << name << endl;
    cout << "3. 주소:" << address << endl;

    return 0;
}
