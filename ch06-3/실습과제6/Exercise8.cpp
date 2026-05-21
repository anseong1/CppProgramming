// Title: Exercise8
// Date: 2026.05.21
// Author: 안성일

#include <iostream>
#include <string>
using namespace std;

class WordUtility {
public:
    static int wordCount(string str);
    static string getWord(string str, int n);
};

int WordUtility::wordCount(string str) {
    int count = 0;
    bool inWord = false;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] != ' ' && !inWord) {
            count++;
            inWord = true;
        } else if (str[i] == ' ')
            inWord = false;
    }
    return count;
}

string WordUtility::getWord(string str, int n) {
    int count = 0;
    string word = "";
    for (int i = 0; i <= str.size(); i++) {
        if (i < str.size() && str[i] != ' ')
            word += str[i];
        else {
            if (word != "") {
                count++;
                if (count == n)
                    return word;
            }
            word = "";
        }
    }
    return "";
}

int main() {
    int n = WordUtility::wordCount("I love C++");
    cout << "단어 개수는 " << n << endl;
    string word = WordUtility::getWord("I love C++", 3);
    if (word == "")
        cout << "3번째 단어는 없습니다." << endl;
    else
        cout << "3번째 단어는 " << word << endl;
}
