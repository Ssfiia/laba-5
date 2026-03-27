#include "s.h"
#include <iostream>
#include <fstream>
#include <ctime>

#ifndef NOMINMAX
#define NOMINMAX
#endif
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>

using namespace std;

string incon() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "ru_RU.1251");
    string text;
    cout << "¬ведите строку: ";
    getline(cin, text);
    return text;
}

string ffile(const string& filename) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251); 
    setlocale(LC_ALL, "ru_RU.1251");
    ifstream file(filename);
    if (!file.is_open()) {
        return "";
    }
    string text;
    getline(file, text);
    file.close();
    return text;
}

string randomom(int wordc){
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);   
    setlocale(LC_ALL, "ru_RU.1251"); 
    vector<string> words = {
        "привет", "котик", "ананас", "дом", 
        "закат", "море", "рассвет", "мандарин", 
        "банан", "родители", "отдых", "телефон",
        "компьютер", "магнит", "собака"   
    };
    srand(time(0));
    string res = "";
    for (int i = 0; i < wordc; i++){
        if (i>0) res += " ";
        res += words[rand()%words.size()];
    }
    return res;
}