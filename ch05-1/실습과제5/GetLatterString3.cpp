// Title: GetLatterString3
// Date: 2026.05.06
// Author: 안성일

#include <iostream>
#include <string>
using namespace std;

string GetLastString(string arr[], int size);

int main() {
    string names[5];
    for (int i = 0; i < 5; i++) {
        cout << "이름 >> ";
        getline(cin, names[i], '\n');
    }
    
    string res = GetLastString(names, 5);
    cout << "사전에서 가장 뒤에 나오는 문자열은 " << res << endl;
}

string GetLastString(string arr[], int size) {
    string last = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > last)
            last = arr[i];
    }
    return last;
}
