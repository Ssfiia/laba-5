#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>

// Избегаем конфликта с std::byte
#ifndef NOMINMAX
#define NOMINMAX
#endif
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>

#include "s.h"

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "ru_RU.1251");    
    string text;
    cout << "\n ВЫБЕРИ СПОСОБ ВВОДА \n";
    cout << "1 - Руками с консоли\n";
    cout << "2 - Из файла\n";
    cout << "3 - Рандомом\n";
    cout << "0 - Выход\n";
    cout << "Твой выбор: ";
    
    int choice;
    cin >> choice;
    cin.ignore();
    
    switch (choice) {
        case 1: {
            text = incon(); 
            cout << "\nВведенная строка: " << text << endl;
            break;
        }
        case 2: { 
            string filename;
            cout << "Введите имя файла: ";
            getline(cin, filename);
            text = ffile(filename);
            if (text.empty()) {
                cout << "Файл не найден или пустой!" << endl;
            } else {
                cout << "Прочитано из файла: " << text << endl;
            }
            break;
        }
        case 3: { 
            int wordc;
            cout << "Введите количество слов в строке: ";
            cin >> wordc;
            cin.ignore();
            text = randomom(wordc);
            cout << "Сгенерированная строка: " << text << endl;
            break;
        }
        case 0: { 
            return 0;
        }
        default: cout << "Не правильно выбран способ ввода.\n";
    }

    while (true) {
        cout << "\n ВЫБЕРИ ЗАДАЧУ \n";
        cout << "1 - Самое длинное слово (String55)\n";
        cout << "2 - Замена пути (Str18)\n";
        cout << "3 - Число с пробелами (Str25)\n";
        cout << "4 - Уникальные символы (Str39)\n";
        cout << "5 - Из 20-й в 10-ю систему (Str30)\n";
        cout << "6 - Азбука Морзе\n";
        cout << "7 - Проверка примеров (Five5)\n";
        cout << "0 - Выход\n";
        cout << "Твой выбор: ";
        
        int taskChoice;
        cin >> taskChoice;
        cin.ignore();
        
        switch (taskChoice) {
            case 1: {
                string longest = String55(text);
                cout << "Самое длинное слово: " << longest << endl;
                break;
            }
            case 0: { 
                cout << "\nВыход. До свидания!\n";
                return 0;
            }
            default: cout << "Нет такой задачи!\n";
        }
    }
}