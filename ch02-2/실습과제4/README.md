# 실습과제

## 소스코드설명

```
#include <iostream>
```
- 입출력을 위한 헤더파일이며 `cout`, `endl` 등을 사용하기 위해 필수적

```
using namespace std;
```
- std::를 생략하고 사용하기 위해 namespace 사용하겠다는 선언

```
int main()
```
- 메인함수 시작점

```
double nums[5];
double sum = 0;
```
- 변수 선언

```
cout << "실수 5개를 입력하세요>> ";
```
- 문장을 화면에 출력

```
for (int i = 0; i < 5; i++) {
    cin >> nums[i];
}
```
- for 반복문을 사용하여 5번 반복하면서 실수 값을 입력받아 `nums`에 저장

```
for (int i = 0; i < 5; i++) {
    if (nums[i] > 0) {
        sum += nums[i];
    }
}
```
- 배열에 저장된 값 중에서 양수만 골라 합을 구하는 반복문

```
cout << "양수 합은 " << sum << "입니다" << endl;
```
- `sum`을 문장과 함께 화면에 출력하고 `endl`은 줄바꿈 의미

```
return 0;
```
- 프로그램 종료를 알리는 반환값

<br>

## 실행결과

<img width="1688" height="272" alt="스크린샷 2026-03-12 113423" src="https://github.com/user-attachments/assets/4235041c-e217-4ecb-adb0-4c8d0d2215cd" />


