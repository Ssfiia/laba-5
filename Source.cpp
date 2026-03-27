#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <vector>
#include <Windows.h>
#include "Header.h"
string incon() {
    using namespace std;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    string text;
    cout << "Введите строку: ";
    getline(cin, text);
    return text;
}
string ffile(const string& filename) {
    using namespace std;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    ifstream file(filename);
    if (!file.is_open()) {
        return "";
    }
    string text;
    getline(file, text);
    file.close();
    return text;
}
string random1(int wordc) {
    using namespace std;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    vector<string> words = {
        "привет", "котик", "ананас", "дом",
        "закат", "море", "рассвет", "мандарин",
        "банан", "родители", "отдых", "телефон",
        "компьютер", "магнит", "собака"
    };
    srand(time(0));
    string res = "";
    for (int i = 0; i < wordc; i++) {
        if (i > 0) res += " ";
        res += words[rand() % words.size()];
    }
    return res;
}
string random2() {
    using namespace std;
    vector<string> words = {
        "C:\\Users\\User\\Documents\\laba 5\\Header.h",
        "C:\\Users\\User\\Documents\laba 5\\laba 5.cpp",
        "C:\\Users\\User\\Documents\\laba 5\laba 5.slnx",
        "C:\\Users\\User\\Documents\\laba 5\\Source.cpp",
        "C:\\Users\\User\\Documents\\laba 5\\Source1.cpp"
    };
    srand(time(0));
    string res = words[rand() % words.size()];
    return res;
}
string random3() {
    using namespace std;
    vector<string> words = {
        "54961654", "4979849984654", "9986543148",
        "3216549849", "794654687", "19876561"
    };
    srand(time(0));
    string res = words[rand() % words.size()];
    return res;
}
string random4() {
    using namespace std;
    vector<string> words = {
        "fcvigviyvасемпш.бю56178iuuegyup,.!,.",
        "ieuehvb?,.rugyg498лпвмарц87685468",
        "iurghuyebh984687,./5786192387!,"
    };
    srand(time(0));
    string res = words[rand() % words.size()];
    return res;
}
string random5() {
    using namespace std;
    vector<string> words = {
        "985486", "abcdfg", "46a5f",
        "784ji", "89BC7", "7559EIf"
    };
    srand(time(0));
    string res = words[rand() % words.size()];
    return res;
}
string random6(int wordc) {
    using namespace std;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    vector<string> words = {
        "привет", "котик", "ананас", "дом",
        "закат", "море", "рассвет", "мандарин",
        "банан", "родители", "отдых", "телефон",
        "компьютер", "магнит", "собака",
        "hello", "cat", "pineapple", "house",
        "sunset", "sea", "dawn", "tangerine",
        "banana", "parents", "rest", "phone",
        "computer", "magnet", "dog"
    };
    srand(time(0));
    string res = "";
    for (int i = 0; i < wordc; i++) {
        if (i > 0) res += " ";
        res += words[rand() % words.size()];
    }
    return res;
}
