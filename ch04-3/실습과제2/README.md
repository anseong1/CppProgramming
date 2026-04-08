# 실습과제

## 아래 코드의 문제점을 설명하고 해결방법을 설명하시오.

<img width="1337" height="895" alt="스크린샷 2026-04-08 210629" src="https://github.com/user-attachments/assets/a7201837-e353-48ed-af3a-c77a4fb91d0a" />

위 코드에서 `new`를 사용하여 객체를 동적 할당하였지만 반복문 내부에서 `delete`를 사용하여 메모리를 해제하지 않고 있다.  
이로 인해 반복문이 실행될 때마다 사용하지 않는 메모리가 계속 쌓이게 되어 **메모리 누수**가 발생하게 된다.

<br>

## 해결방법

1) **delete 사용**
```
Circle* p = new Circle(radius);
cout << "원의 면적:" << p->getArea() << endl;
delete p;
```
- 동적 할당 후 delete를 사용하면 메모리를 해제한다. 

2) **배열 인덱스로 접근**
```
Circle* p = new Circle(radius);
cout << "원의 면적:" << p[0].getArea() << endl;
```
- 배열 인덱스로 접근하면 delete를 사용하지 않아도 된다.

