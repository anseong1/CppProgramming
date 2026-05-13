// Title: CharToString
// Date: 2026.05.13
// Author: 안성일

#include<iostream>
#include<string>
using namespace std;

class Person {
    string name;
    int id;
public:
    Person(int id, const string name);
    void changeName(const string name);
    void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const string name) {
    this->id = id;
    this->name = name;
}

void Person::changeName(const string name) {
    this->name = name;
}

int main() {
    Person father(1, "Kitae");
    Person daughter(father);
    cout << "daughter 객체 생성 직후 ----" << endl;
    father.show();
    daughter.show();
    daughter.changeName("Grace");
    cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
    father.show();
    daughter.show();

    return 0;
}
