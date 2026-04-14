# 실습과제

## 소스코드설명

```
#include <iostream>
```
- <iostream> 헤더 파일 포함, 입출력 사용

```
#include <string>
```
- string 클래스와 to_string() 함수 사용을 위해 포함

```
using namespace std;
```
- std 네임스페이스 사용 (cout, endl 등을 std:: 없이 사용 가능)

```
int main() {
```
- 메인함수 정의 시작

```
string str;
```
- 사용자가 입력한 문자열을 저장하는 변수

```
cout << "문자열 입력 : ";
getline(cin, str);
```
- 문자열을 입력받고 str에 저장

```
int count = 0;
```
- 문자 'a'의 개수를 세는 변수, 0으로 초기화

```
for (int i = 0; i < str.length(); i++) {
```
- 문자열의 첫 글자부터 마지막 글자까지 하나씩 순회

```
if (str[i] == 'a') {
    count++;
}
```
- i번째 문자가 'a'이면 count 1 증가

```
cout << "문자 a는 " << count << "개 있습니다." << endl;
```
- 최종적으로 세어진 'a'의 개수 출력

```
return 0;
```
- 0을 반환하고 프로그램 종료

<br>

## 실행결과

<img width="1721" height="236" alt="스크린샷 2026-04-13 103741" src="https://github.com/user-attachments/assets/e04698c1-2e4a-4508-b0bf-54f5a466c0ba" />
