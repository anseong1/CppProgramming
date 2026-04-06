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
- 입력받을 정수의 개수를 저장할 변수 n 선언

```
cout << "입력할 정수의 개수를 입력하세요: ";
cin >> n;
```
- 정수의 개수 안내 후 사용자로부터 n 입력

```
cout << n << "개의 실수를 입력하시오." << endl;
```
- 입력할 개수를 안내하는 메시지 출력

```
int* p = new int[n];
```
- n개의 정수를 저장할 메모리를 힙에 동적 할당하고 포인터 p가 가리키게 함

```
for (int i = 0; i < n; i++) {
    cout << i + 1 << "번째 정수: ";
    cin >> p[i];
}
```
- n번 반복하며 각 순서를 안내하고 입력값을 배열 p[i]에 저장
  
```
int sum = 0;
```
- 합계를 저장할 변수 sum을 0으로 초기화
  
```
for (int i = 0; i < n; i++)
    sum += p[i];
```
- 배열의 모든 요소를 순회하며 sum에 누적 합산
  
```
cout << "평균값은 " << sum / n << "입니다." << endl;
```
- 합계를 개수로 나눈 평균값 출력
  
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

<img width="1713" height="417" alt="스크린샷 2026-04-06 193015" src="https://github.com/user-attachments/assets/acbc2907-5d71-4e52-85a9-2dbaf777d914" />

