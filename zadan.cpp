#include "s.h"
#include <string>
#include <iostream>

#ifndef NOMINMAX
#define NOMINMAX
#endif
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>

using namespace std;

string String55(const string& stroka) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "ru_RU.1251");
    string longest = "";
    string current = "";
    
    // Исправленная проверка русских символов для Windows-1251
    for (unsigned char c : stroka) {
        // Русские буквы в Windows-1251:
        // А-Я: 192-223, а-я: 224-255, Ё: 168, ё: 184
        bool isRussian = (c >= 192 && c <= 255) || c == 168 || c == 184;
        
        if (isRussian) {
            current += c;
        } else if (c == ' ' || c == '\t' || c == '\n') {
            if (current.length() > longest.length()) {
                longest = current;
            }
            current = "";
        }
    }
    
    if (current.length() > longest.length()) {
        longest = current;
    }
    
    return longest;
}