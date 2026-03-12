# 실습과제

## 소스코드설명

```
#include<iostream>
```
- 입출력을 위한 헤더파일이며 `cout`, `endl` 등을 사용하기 위해 필수적

```
int main(void)
```
- 메인함수 시작점

```
for (int i = 0; i < 7; i++)
```
- 행 반복문

```
for (int j = 0; j < 7; j++)
```
- 열 반복문

```
if (i == j || i + j == 6) std::cout << "*";
```
- `i == j`: 왼쪽 위에서 오른쪽 아래로 내려가는 대각선
- `i + j == 6`: 오른쪽 위에서 왼쪽 아래로 내려가는 대각선
- `i`는 행 번호, `j`는 열 번호를 의미하며 (0부터 6까지), 다음 두 조건을 만족할 때 별`*`을 출력

```
else std::cout << " ";
```
- 두 조건중 한 가지라도 만족하지 않으면 공백 출력

```
std::cout << std::endl;
```
- 한 행이 끝나면 줄바꿈

```
return 0;
```
- 프로그램 종료를 알리는 반환값

<br>

## 실행결과

<img width="779" height="186" alt="스크린샷 2026-03-12 003956" src="https://github.com/user-attachments/assets/bc25b0cb-ce73-4e8f-b313-1d2dff04c3a9" />

