# 실습과제
      
## 소스코드설명
```
#include <iostream>
```
- 입출력 기능을 사용하기 위한 헤더파일 포함

```
using namespace std;
```
- std::없이 표준 라이브러리 사용

```
class MyMath {
```
- MyMath 클래스 정의 시작

```
public:
```
- 외부에서 접근 가능한 멤버 영역

```
static int GetMax(int arr[], int size);
```
- 배열에서 최대값을 반환하는 static 함수 선언

```
static int GetMin(int arr[], int size);
```
- 배열에서 최소값을 반환하는 static 함수 선언

```
};
```
- 클래스 정의 끝

```
int MyMath::GetMax(int arr[], int size) {
```
- GetMax 함수 정의 시작, 배열과 크기를 매개변수로 받음

```
int max = arr[0];
```
- 첫 번째 원소를 최대값의 초기값으로 설정

```
for (int i = 1; i < size; i++) {
```
- 두 번째 원소부터 마지막까지 순회

```
if (arr[i] > max)
```
- 현재 원소가 max보다 크면

```
max = arr[i];
```
- max를 현재 원소로 갱신

```
return max;
```
- 최대값 반환

```
int MyMath::GetMin(int arr[], int size) {
```
- GetMin 함수 정의 시작, 배열과 크기를 매개변수로 받음

```
int min = arr[0];
```
- 첫 번째 원소를 최소값의 초기값으로 설정

```
for (int i = 1; i < size; i++) {
```
- 두 번째 원소부터 마지막까지 순회

```
if (arr[i] < min)
```
- 현재 원소가 min보다 작으면

```
min = arr[i];
```
- min을 현재 원소로 갱신

```
return min;
```
- 최소값 반환

```
int main() {
```
- 메인함수 시작점

```
int x[5] = { 20, 30, -5, 2, -30 };
```
- 크기 5짜리 정수 배열 초기화

```
cout << "최대값은 : " << MyMath::GetMax(x, 5) << endl;
```
- 객체 없이 클래스명으로 GetMax 호출 후 출력

```
cout << "최소값은 : " << MyMath::GetMin(x, 5) << endl;
```
- 객체 없이 클래스명으로 GetMin 호출 후 출력

```
return 0;
```
- 0을 반환하고 프로그램 종료

<br>

## 소스코드설명

<img width="877" height="126" alt="스크린샷 2026-05-21 162324" src="https://github.com/user-attachments/assets/49a46e65-2f94-4933-bc8b-e365d64cd454" />

