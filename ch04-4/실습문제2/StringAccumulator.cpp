// Title: StringAccumulator
// Date: 2026.04.14
// Author: 안성일

#include <iostream>
#include <string>
using namespace std;

int main() {
    string result = "";
    string input;
    int count = 0;

    while (true) {
        cout << "문자열 입력 : ";
        getline(cin, input, '\n');

        if (input == "quit")
            break;

        count++;
        result = result + "<" + to_string(count) + ">" + input;

        cout << "이어진 문자열: " << result << endl;
    }

    return 0;
}
