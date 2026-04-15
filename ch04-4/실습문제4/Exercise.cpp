// Title: Exercise 2
// Date: 2026.04.15
// Author: 안성일

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "구입할 물품의 개수>>";
    cin >> n;

    int* prices = new int[n];

    cout << "물품 " << n << "개의 가격 입력>>";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int minPrice = prices[0];
    int maxPrice = prices[0];

    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice) minPrice = prices[i];
        if (prices[i] > maxPrice) maxPrice = prices[i];
    }

    cout << "제일 싼 가격은 " << minPrice << endl;
    cout << "제일 비싼 가격은 " << maxPrice << endl;

    delete[] prices;
    return 0;
}


// Title: Exercise 4
// Date: 2026.04.15
// Author: 안성일

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    string result;

    cout << "텍스트 입력(한글 안 됨)>>";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (isalpha(ch) || ch == ' ') {
            result += ch;
        }
    }

    cout << result << endl;
    return 0;
}


// Title: Exercise 5
// Date: 2026.04.15
// Author: 안성일

#include <iostream>
using namespace std;

class Container {
    int* p;
    int size;
public:
    Container(int size);
    ~Container();
    void read();
    void write();
    void rotate();
    double avg();
};

Container::Container(int size) {
    this->size = size;
    p = new int[size];
}

Container::~Container() {
    delete[] p;
}

void Container::read() {
    cout << "정수 " << size << "개 입력>>";
    for (int i = 0; i < size; i++)
        cin >> p[i];
}

void Container::write() {
    for (int i = 0; i < size; i++)
        cout << p[i] << " ";
    cout << endl;
}

void Container::rotate() {
    int last = p[size - 1];
    for (int i = size - 1; i > 0; i--)
        p[i] = p[i - 1];
    p[0] = last;
}

double Container::avg() {
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += p[i];
    return sum / size;
}

int main() {
    Container c(10);
    c.read();
    c.write();
    c.rotate();
    c.write();
    cout << "평균은 " << c.avg() << endl;
    return 0;
}


// Title: Exercise 11
// Date: 2026.04.15
// Author: 안성일

#include <iostream>
using namespace std;

class Container {
    int size;
public:
    Container() { size = 10; }

    void fill(int n) {
        size += n;
        if (size > 10) size = 10;
    }

    bool consume(int n) {
        if (size < n) return false;
        size -= n;
        return true;
    }

    int getSize() { return size; }
};

class CoffeeVendingMachine {
    Container tong[3];

    void fill() {
        tong[0].fill(10);
        tong[1].fill(10);
        tong[2].fill(10);
    }

    void getEspresso() {
        if (tong[0].getSize() < 1 || tong[1].getSize() < 1) {
            cout << "원료가 부족합니다." << endl;
            return;
        }
        tong[0].consume(1);
        tong[1].consume(1);
        cout << "에스프레소 드세요" << endl;
    }

    void getAmericano() {
        if (tong[0].getSize() < 1 || tong[1].getSize() < 2) {
            cout << "원료가 부족합니다." << endl;
            return;
        }
        tong[0].consume(1);
        tong[1].consume(2);
        cout << "아메리카노 드세요" << endl;
    }

    void getSugarCoffee() {
        if (tong[0].getSize() < 1 || tong[1].getSize() < 2 || tong[2].getSize() < 1) {
            cout << "원료가 부족합니다." << endl;
            return;
        }
        tong[0].consume(1);
        tong[1].consume(2);
        tong[2].consume(1);
        cout << "설탕커피 드세요" << endl;
    }

    void show() {
        cout << "커피 " << tong[0].getSize()
            << ", 물 " << tong[1].getSize()
            << ", 설탕 " << tong[2].getSize() << endl;
    }

public:
    void run() {
        cout << "***** 커피자판기를 작동합니다. *****" << endl;
        tong[0].fill(10);
        tong[1].fill(10);
        tong[2].fill(10);

        while (true) {
            int choice;
            cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>>";
            cin >> choice;

            switch (choice) {
            case 1: getEspresso(); break;
            case 2: getAmericano(); break;
            case 3: getSugarCoffee(); break;
            case 4: show(); break;
            case 5:
                fill();
                show();
                break;
            default:
                cout << "잘못된 입력입니다." << endl;
            }
        }
    }
};

int main() {
    CoffeeVendingMachine machine;
    machine.run();
    return 0;
}
