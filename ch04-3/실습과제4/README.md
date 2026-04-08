# 실행결과

## 소스코드설명

```
#include <iostream>
```
- `<iostream>` 헤더 파일 포함, 입출력 사용

```
using namespace std;
```
- std 네임스페이스 사용 (cout, endl 등을 std:: 없이 사용 가능)

```
class Triangle {
private:
    double w, h;
```
- 밑변(w), 높이(h) 멤버 변수 선언

```
Triangle(double _w, double _h);
~Triangle();
double getArea();
```
- 생성자, 소멸자, 멤버 함수 선언

```
Triangle::Triangle(double _w, double _h) : w(_w), h(_h) {
    cout << "밑변" << _w << " 높이" << _h << "인 삼각형 생성" << endl;
}
```
- 밑변과 높이를 초기화하는 생성자, 생성 메시지 출력

```
Triangle::~Triangle() {
    cout << "밑변" << w << " 높이" << h << "인 삼각형 소멸" << endl;
}
```
- 소멸자, 소멸 메시지 출력

```
double Triangle::getArea() {
    return w * h / 2;
}
```
- 삼각형 넓이 공식 계산 후 반환

```
int main(void) {
```
- main 함수 정의

```
Triangle* arr = new Triangle[3]{ {1, 1}, {2, 2}, {3, 3} };
```
- n개의 Triangle 객체를 힙에 동적 할당하고 초기값 설정, 포인터 arr가 가리키게 함

```
for (int i = 0; i < 3; i++) cout << i << "번째 삼각형의 넓이는 " << arr[i].getArea() << endl;
```
- 배열의 모든 요소를 순회하며 각 삼각형의 넓이 출력

```
delete[] arr;
```
- 동적 할당한 배열 메모리 해제

```
return 0;
```
- 0을 반환하고 프로그램 종료

<br>

## 실행결과

<img width="1730" height="426" alt="스크린샷 2026-04-08 221432" src="https://github.com/user-attachments/assets/a04d03b8-fee3-4a9a-91d2-1902b339b3eb" />

