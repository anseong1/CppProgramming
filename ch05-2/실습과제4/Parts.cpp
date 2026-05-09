// Title: Parts
// Date: 2026.05.10
// Author: 안성일

#include<iostream>
using namespace std;

void get_parts(double num, int& integer, double& decimal);
int main(void)
{
    double num;
    int integer;
    double decimal;
    cout << "실수를 입력하시오 : ";
    cin >> num;
    get_parts(num, integer, decimal);
    cout << "정수부 : " << integer << endl;
    cout << "소수부 : " << decimal << endl;
}

void get_parts(double num, int& integer, double& decimal)
{
    integer = (int)num;
    decimal = num - integer;
}
