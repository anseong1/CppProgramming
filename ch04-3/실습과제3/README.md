# 실습과제

## 아래 코드의 문제점을 설명하고 해결방법을 설명하시오.

<img width="1397" height="861" alt="스크린샷 2026-04-08 214424" src="https://github.com/user-attachments/assets/c4761b82-60ec-4608-b6de-9c64ad680b55" />

반복문에서 `pArray++`를 수행하면 포인터가 다음 객체를 가리키는데 이로 인해 처음에 할당받은 메모리의 시작 주소를 잃어버리게 된다.
```
delete[] pArray;
```
결국, 이 코드에서 delete[]는 반드시 **처음 할당받은 주소**를 사용해야 하는데
변경된 주소로 해제하려 하기 때문에 정상적인 메모리 해제가 이루어지지 않는다.

<br>

## 해결방법

1) **인덱스 사용**

```
Circle* pArray = new Circle[3];

for (int i = 0; i < 3; i++) {
    cout << pArray[i].getArea() << "\n";
}
delete[] pArray;
```
- 포인터를 이동시키지 않고 배열 인덱스로 접근한다.

2) **별도의 포인터 사용**

```
Circle* pArray = new Circle[3];
Circle* temp = pArray;

for (int i = 0; i < 3; i++) {
    cout << temp->getArea() << "\n";
    temp++;
}
delete[] pArray;
```
- 원래 주소를 보존하기 위해 다른 포인터(temp)를 사용한다.

