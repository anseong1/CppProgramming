# 실습과제

## 소스코드설명

```
#include <iostream>
#include <cstring>
```
- 입출력과 문자열 처리 함수를 사용하기 위해 필수적인 헤더파일

```
using namespace std;
```
- std::를 생략하고 사용하기 위해 namespace를 사용하겠다는 선언

```
int main()
```
- 메인함수 시작점

```
char text[100];
```
- 최대 100개 문자를 저장할 수 있는 문자 배열 선언

```
cout << "빈칸 없이 문자열을 입력하세요>> ";
```
- 문장을 화면에 출력

```
cin >> text;
```
- 사용자가 입력한 문자열을 `text`에 저장

```
int len = strlen(text);
```
- `strlen()` 함수를 사용하여 문자열 text의 길이를 계산하여 `len`에 저장

```
for (int i = 0; i < len; i++) {
```
- for 반복문을 사용하여 문자열 길이만큼 반복

```
cout << text[i] << " ";
```
- 입력된 문자열의 문자를 한 글자씩 띄어서 출력

```
cout << endl;
```
- 줄바꿈 출력

```
return 0;
```
- 프로그램 종료를 알리는 반환값

<br>

## 실행결과 

<img width="1701" height="261" alt="스크린샷 2026-03-12 114948" src="https://github.com/user-attachments/assets/2f15a355-327f-496c-a66d-9ca31288d062" />
