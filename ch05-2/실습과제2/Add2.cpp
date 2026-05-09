// Title: Add2
// Date: 2026.05.10
// Author: 안성일

#include<iostream>
using namespace std;

void add2(int &value);
int main(void)
{
    int number;
    cout << "정수를 입력하세요 : ";
    cin >> number;
    add2(number);
    cout << "2만큼 증가한 값 :" << number << endl;
}

void add2(int &value)
{
    value += 2;
}
