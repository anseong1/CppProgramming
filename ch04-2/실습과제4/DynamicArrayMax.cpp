// Title: DynamicArrayMax
// Date: 2026.04.06
// Author: 안성일

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "입력할 실수의 개수를 입력하세요: ";
    cin >> n;
    cout << n << "개의 실수를 입력하시오." << endl;

    double* p = new double[n];

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    double max = p[0];

    for (int i = 1; i < n; i++) {
        if (p[i] > max) {
            max = p[i];
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "최대값은 " << max << "입니다." << endl;

    delete[] p;
    return 0;
}
