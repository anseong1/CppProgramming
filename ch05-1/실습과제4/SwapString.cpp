// Title: SwapString
// Date: 2026.05.06
// Author: 안성일

#include <iostream>
#include <string>
using namespace std;

void SwapString(string* a, string* b);

int main() {
    string s1("hello");
    string s2("world");
    cout << "호출전 s1:" << s1 << " s2:" << s2 << endl;
    SwapString(&s1, &s2);  
    cout << "호출후 s1:" << s1 << " s2:" << s2 << endl;
}

void SwapString(string* a, string* b) {
    string temp = *a;
    *a = *b;
    *b = temp;
}
