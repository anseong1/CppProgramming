// Title : add
// Date : 2026.03.12
// Author : 안성일

#include <iostream>
using namespace std;

int main() {
    double nums[5];
    double sum = 0;

    cout << "실수 5개를 입력하세요>> ";
    for (int i = 0; i < 5; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < 5; i++) {
        if (nums[i] > 0) {
            sum += nums[i];
        }
    }

    cout << "양수 합은 " << sum << "입니다" << endl;

    return 0;
}
