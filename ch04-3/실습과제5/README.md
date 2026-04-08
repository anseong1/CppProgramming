# 실습과제

## 소스코드설명

```
#include <iostream>
```
- `<iostream>` 헤더 파일 포함, 입출력 사용

```
#include <cmath>
```
- `<cmath>` 헤더 파일 포함, pow() 함수 사용

```
using namespace std;
```
- std 네임스페이스 사용 (cout, endl 등을 std:: 없이 사용 가능)

```
class Sphere {
private:
    double radius;
```
- 반지름 멤버 변수 선언

```
double getRadius();
double getVolume();
void setRadius(double r);
Sphere(double r);
Sphere();
```
- 멤버 함수 및 생성자 선언

```
double Sphere::getRadius() {
    return radius;
}
```
- 반지름 반환

```
double Sphere::getVolume() {
    return 4.0 / 3.0 * 3.14 * pow(radius, 3);
}
```
- 구의 부피 공식 계산 후 반환

```
void Sphere::setRadius(double r) {
    radius = r;
}
```
- 반지름 값 설정

```
Sphere::Sphere(double r) : radius(r) {}
```
- 반지름을 r로 초기화하는 생성자

```
Sphere::Sphere() : Sphere(1) {}
```
- 기본 생성자 → 반지름 1로 위임 생성자 호출

```
int main(void) {
```
- main 함수 정의

```
int n, r;
Sphere* arr;
```
- 구의 개수(n), 반지름(r), Sphere 포인터 선언

```
cin >> n;
arr = new Sphere[n];
```
- n개의 정수를 저장할 메모리를 힙에 동적 할당하고 포인터 arr가 가리키게 함

```
arr[i].setRadius(r);
```
- 입력받은 반지름으로 각 구의 반지름 설정

```
cout << arr[i].getVolume() << endl;
```
- 각 구의 부피 출력

```
delete[] arr;
```
- 동적 할당한 배열 메모리 해제하여 메모리 누수 방지

```
return 0;
```
- 0을 반환하고 프로그램 종료

<br>

## 실행결과

<img width="1726" height="380" alt="스크린샷 2026-04-08 221629" src="https://github.com/user-attachments/assets/0f0306b2-4828-4043-9cc7-2e60a91346f4" />

