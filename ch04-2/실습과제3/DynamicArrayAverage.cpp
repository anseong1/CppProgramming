// Title: DynamicArrayAverage
// Date: 2026.04.06
// Author: 안성일

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "입력할 정수의 개수를 입력하세요: ";
    cin >> n;
    cout << n << "개의 실수를 입력하시오." << endl;

    int* p = new int[n];

    for (int i = 0; i < n; i++) {
        cout << i + 1 << "번째 정수: ";
        cin >> p[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += p[i];

    cout << "평균값은 " << sum / n << "입니다." << endl;

    delete[] p;
    return 0;
}
