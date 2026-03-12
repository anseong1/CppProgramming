// Title : c-string
// Date : 2026.03.12
// Author : 안성일

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[100];

    while (true) {
        cout << "영문 텍스트를 입력하세요>> ";
        cin.getline(text, 100);

        if (strcmp(text, "exit") == 0) {
            break;
        }

        int count = 0;
        bool inWord = false;

        for (int i = 0; i < strlen(text); i++) {
            if (text[i] != ' ') {
                if (!inWord) {
                    count++;
                    inWord = true;
                }
            }
            else {
                inWord = false;
            }
        }

        cout << "단어의 개수는 " << count << "개이다." << endl;
    }

    return 0;
}
