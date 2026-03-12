# 실습과제

## 소스코드설명

```
#include <iostream>
```
- `cout`, `ebdl` 입출력 기능을 사용하기 위해 헤더파일에 포함

```
#include <cstring>
```
- `strcmp`, `strlen` 문자열 처리 함수를 사용하기 위해 헤더파일에 포함

```
using namespace std;
```
- cout, cin을 바로 사용하기 위해 std namespace를 사용

```
int main()
```
- 메인함수 시작

```
char text[100];
```
- 최대 99글자의 문자열을 저장할 수 있는 문자 배열 `text`를 선언

```
while (true) {
```
- 무한 반복문 시작

```
cout << "영문 텍스트를 입력하세요>> ";
```
- 문장 출력

```
cin.getline(text, 100);
```
- 한 줄의 문자열을 입력받아 `text` 배열에 저장

```
if (strcmp(text, "exit") == 0) {
```
- 입력한 문자열이 `exit`와 같은지 비교, `strcmp`는 문자열이 같으면 0을 반환

```
break;
```
- 입력이 `exit`이면 반복문을 종료

```
입력이 "exit"이면 반복문을 종료
```
- 단어 개수를 저장할 변수 `count`를 선언하고 0으로 초기화

```
bool inWord = false;
```
- 현재 문자가 단어 안에 있는지 확인하기 위한 변수

```
for (int i = 0; i < strlen(text); i++) {
```
- 문자열의 첫 글자부터 마지막 글자까지 하나씩 검사하는 반복문

```
if (text[i] != ' ') {
```
- 현재 문자가 공백이 아닌 경우를 검사

```
if (!inWord) {
```
- 새로운 단어가 시작되는 순간

```
count++;
```
- 새로운 단어가 시작되었으므로 단어 개수를 1 증가

```
}
else {
```
- 현재 문자가 공백일 때 실행

```
inWord = false;
```
- 공백을 만나면 단어가 끝났다고 표시

```
cout << "단어의 개수는 " << count << "개이다." << endl;
```
- 단어의 개수를 문장으로 출력

```
return 0;
```
- 프로그램 종료를 알리는 반환값

<br>

## 실행결과


<img width="1719" height="409" alt="스크린샷 2026-03-12 124123" src="https://github.com/user-attachments/assets/9e89e55b-52ca-4ced-86f1-e2242e04008b" />


