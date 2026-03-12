#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "정수 x를 입력 하시오: ";
    cin >> x;
    
    int y = x*x + 2*x - 5;
    
    cout << "x=" << x << "일 때 y의 값은 " << y << "입니다." << endl;
    
    return 0;
}
