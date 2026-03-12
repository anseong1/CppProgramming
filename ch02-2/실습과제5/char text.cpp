// TItie : char text
// Date : 2026.03.12
// Author : 안성일

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[100];

    cout << "빈칸 없이 문자열을 입력하세요>> ";
    cin >> text;

    int len = strlen(text);

    for (int i = 0; i < len; i++) {
        cout << text[i] << " ";
    }
    cout << endl;

    return 0;
}
