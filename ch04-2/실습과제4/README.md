# 실습과제

## 소스코드설명


```
#include <iostream>
```
- 입출력 스트림 헤더파일 포함
  
```
using namespace std;
```
- std 네임스페이스 사용 (cout, endl 등을 std:: 없이 사용 가능)

```
int main() {
```
- main 함수 정의

```
int n;
```
- 입력받을 실수의 개수를 저장할 변수 n 선언

```
cout << "입력할 실수의 개수를 입력하세요: ";
cin >> n;
```
- 실수의 개수 안내 후 사용자로부터 n 입력

```
cout << n << "개의 실수를 입력하시오." << endl;
```
- 입력할 개수를 안내하는 메시지 출력

```
double* p = new double[n];
```
- n개의 실수를 저장할 메모리를 힙에 동적 할당하고 포인터 p가 가리키게 함

```
for (int i = 0; i < n; i++) {
    cin >> p[i];
}
```
- n번 반복하며 입력값을 배열 p[i]에 저장

```
double max = p[0];
```
- 최대값을 저장할 변수 max를 배열의 첫 번째 값으로 초기화

```
for (int i = 1; i < n; i++) {
    if (p[i] > max) {
        max = p[i];
    }
}
```
- 두 번째 요소부터 순회하며 현재 max보다 큰 값이 있으면 max 교체

```
cout.setf(ios::fixed);
```
- 출력 형식을 고정 소수점 방식으로 설정

```
cout.precision(2);
```
- 소수점 이하 2자리까지 출력하도록 설정

```
cout << "최대값은 " << max << "입니다." << endl;
```
- 최대값 출력

```
delete[] p;
```
- 동적 할당한 배열 메모리 해제하여 메모리 누수 방지

```
return 0;
```
- 0을 반환하고 프로그램 종료

<br>

## 실행결과

<img width="1714" height="398" alt="스크린샷 2026-04-06 201249" src="https://github.com/user-attachments/assets/a63a640c-b6a6-4c93-8209-14e85e94158d" />
