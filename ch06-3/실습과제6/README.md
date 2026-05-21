# 실습과제

## 소스코드설명

```
#include <iostream>
#include <string>
```
- 입출력과 string 클래스 사용을 위한 헤더파일 포함

```
using namespace std;
```
- std:: 없이 표준 라이브러리 사용

```
class WordUtility {
```
- WordUtility 클래스 정의 시작

```
public:
```
- 외부에서 접근 가능한 멤버 영역

```
static int wordCount(string str);
```
- 문자열의 단어 개수를 반환하는 static 함수 선언

```
static string getWord(string str, int n);
```
- 문자열에서 n번째 단어를 반환하는 static 함수 선언

```
int WordUtility::wordCount(string str) {
```
- wordCount 함수 정의 시작, 문자열을 매개변수로 받음

```
int count = 0;
bool inWord = false;
```
- count : 단어 개수 저장, inWord : 현재 단어 안에 있는지 여부 저장

```
for (int i = 0; i < str.size(); i++) {
```
- 문자열을 처음부터 끝까지 한 글자씩 순회

```
if (str[i] != ' ' && !inWord) {
    count++;
    inWord = true;
```
- 공백이 아니고 단어 시작이면 count 증가, inWord를 true로 설정

```
} else if (str[i] == ' ')
    inWord = false;
```
- 공백을 만나면 inWord를 false로 설정

```
return count;
```
- 단어 개수 반환

```
string WordUtility::getWord(string str, int n) {
```
- getWord 함수 정의 시작, 문자열과 n번째를 매개변수로 받음

```
int count = 0;
string word = "";
```
- count : 단어 순서 저장, word : 현재 단어를 쌓을 변수

```
for (int i = 0; i <= str.size(); i++) {
```
- 문자열을 처음부터 끝까지 순회

```
if (i < str.size() && str[i] != ' ')
    word += str[i];
```
- 공백이 아니면 word에 문자를 하나씩 추가

```
else {
    if (word != "") {
        count++;
        if (count == n)
            return word;
    }
    word = "";
}
```
- 공백을 만나거나 끝에 도달하면 단어 끝, count가 n과 같으면 해당 단어 반환 후 word 초기화

```
return "";
```
- n번째 단어가 없으면 빈 문자열 반환

```
int main() {
```
- 메인함수 시작점

```
int n = WordUtility::wordCount("I love C++");
```
- 객체 없이 클래스명으로 wordCount 호출, 단어 개수 3 반환

```
cout << "단어 개수는 " << n << endl;
```
- 단어 개수는 3 출력

```
string word = WordUtility::getWord("I love C++", 3);
```
- 객체 없이 클래스명으로 getWord 호출, 3번째 단어 "C++" 반환

```
if (word == "")
    cout << "3번째 단어는 없습니다." << endl;
else
    cout << "3번째 단어는 " << word << endl;
```
- word가 빈 문자열이면 없다고 출력, 아니면 3번째 단어는 C++ 출력

<br>

## 실행결과

<img width="855" height="129" alt="스크린샷 2026-05-21 224636" src="https://github.com/user-attachments/assets/e99a117a-d60a-4e00-9304-082a5aa83e59" />



