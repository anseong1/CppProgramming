// Title: Picture
// Date: 2026.03.31
// Author: 안성일

#include <iostream>
using namespace std;

class Picture {
private:
    int width;
    int height;
    char place[20];

public:
    Picture();
    Picture(int w, int h, const char* p);

    int getWidth();
    int getHeight();
    const char* getPlace();
};


Picture::Picture() {
    width = 5;
    height = 7;

    const char* temp = "모름";
    int i = 0;
    while (temp[i] != '\0') {
        place[i] = temp[i];
        i++;
    }
    place[i] = '\0';
}


Picture::Picture(int w, int h, const char* p) {
    width = w;
    height = h;

    int i = 0;
    while (p[i] != '\0') {
        place[i] = p[i];
        i++;
    }
    place[i] = '\0';  
}


int Picture::getWidth() {
    return width;
}

int Picture::getHeight() {
    return height;
}

const char* Picture::getPlace() {
    return place;
}


int main() {
    Picture pic;
    Picture mt(10, 14, "한라산");

    cout << pic.getWidth() << "x" << pic.getHeight() << " " << pic.getPlace() << endl;
    cout << mt.getWidth() << "x" << mt.getHeight() << " " << mt.getPlace() << endl;

    return 0;
}
