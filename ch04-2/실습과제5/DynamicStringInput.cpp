#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "저장할 문자열의 크기를 입력하세요: ";
    cin >> n;
    cin.ignore();

    char* p = new char[n + 1];

    cout << "문자열을 입력하시오: ";
    cin.getline(p, n + 1);

    cout << "입력한 문자열은 " << p << "입니다." << endl;

    delete[] p;
    return 0;
}
