// Title: Swap
// Date: 2026.05.10
// Author: 안성일

#include<iostream>
using namespace std;

void swap(int &a, int &b);
int main(void)
{
    int x, y;
    cout << "정수x를 입력 하시오: ";
    cin >> x;
    cout << "정수y를 입력 하시오: ";
    cin >> y;
    cout << "swap함수 호출 전 x=" << x << ", y=" << y << endl;
    swap(x, y);
    cout << "swap함수 호출 후 x=" << x << ", y=" << y << endl;
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
