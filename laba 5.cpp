#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <Windows.h>
#include "Header.h"

string vvod() {
    using namespace std;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    string text;
    cout << "\n ВЫБЕРИ СПОСОБ ВВОДА \n";
    cout << "1 - Руками с консоли\n";
    cout << "2 - Из файла\n";
    cout << "3 - Рандомом\n";
    cout << "0 - Вернуться в меню задач\n";
    cout << "Твой выбор: ";
    int Choice1;
    cin >> Choice1;
    cin.ignore();

    switch (Choice1) {
    case 1: {
        text = incon();
        break;
    }
    case 2: {
        string filename;
        cout << "Введите имя файла: ";
        getline(cin, filename);
        text = ffile(filename);
        if (text.empty()) {
            cout << "Файл не найден или пустой!" << endl;
            return "";
        }
        else {
            cout << "Прочитано из файла: " << text << endl;
        }
        break;
    }
    case 3: {
        int n;
        cout << "Ещё раз ведите номер задания: ";
        cin >> n;
        cin.ignore();
        switch (n) {
        case 1: {
            int wordc;
            cout << "Введите количество слов в строке: ";
            cin >> wordc;
            cin.ignore();
            text = random1(wordc);
            cout << "Сгенерированная строка: " << text << endl;
            break;
        }
        case 2: {
            text = random2();
            cout << "Сгенерированная строка: " << text << endl;
            break;
        }
        case 3: {
            text = random3();
            cout << "Сгенерированная строка: " << text << endl;
            break;
        }
        case 4: {
            text = random4();
            cout << "Сгенерированная строка: " << text << endl;
            break;
        }
        case 5: {
            text = random5();
            cout << "Сгенерированная строка: " << text << endl;
            break;
        }
        case 6: {
            int wordc;
            cout << "Введите количество слов в строке: ";
            cin >> wordc;
            cin.ignore();
            text = random6(wordc);
            cout << "Сгенерированная строка: " << text << endl;
            break;
        }
        default:
            cout << "Не правильно выбран способ ввода.\n";
            return "";
        }
        break;
    }
    case 0: {
        return "";
    }
    default:
        cout << "Не правильно выбран способ ввода.\n";
        return "";
    }
    return text;
}

int main() {
    using namespace std;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    while (true) {
        cout << "\n ВЫБЕРИ ЗАДАЧУ \n";
        cout << "1 - Самое длинное слово (String55)\n";
        cout << "2 - Замена пути (Str18)\n";
        cout << "3 - Число с пробелами (Str25)\n";
        cout << "4 - Уникальные символы (Str39)\n";
        cout << "5 - Из 20-й в 10-ю систему (Str30)\n";
        cout << "6 - Азбука Морзе\n";
        cout << "7 - Проверка примеров (Five5)\n";
        cout << "0 - Выход из программы\n";
        cout << "Твой выбор: ";

        int Choice1;
        cin >> Choice1;
        cin.ignore();

        switch (Choice1) {
        case 1: {
            cout << " Задача 1: Самое длинное слово \n";
            string text = vvod();
            if (!text.empty()) {
                string longest = String55(text);
                cout << "\nСамое длинное слово строки: " << longest << endl;
            }
            break;
        }
        case 2: {
            cout << " Задача 2: Замена пути \n";

            string put = vvod();
            if (!put.empty()) {
                put = Str18(put);
                cout << "\nПуть в ОС Unix: " << put << endl;
            }
            break;
        }
        case 3: {
            cout << " Задача 3: Число с разделителями \n";
            string num = vvod();
            if (!num.empty()) {
                string res = Str25(num);
                cout << "\nРезультат: " << res << endl;
            }
            break;
        }
        case 4: {
            cout << " Задача 4: Уникальные символы \n";
            string text = vvod();
            if (!text.empty()) {
                string res = Str39(text);
                cout << "\nУникальные символы:  " << res << endl;
            }
            break;
        }
        case 5: {
            cout << " Задача 5: Из 20-ричной в десятичную \n";
            string num20 = vvod();
            if (!num20.empty()) {
                string res = Str30(num20);
                cout << "\nРезультат: " << res << endl;
            }
            break;
        }
        case 6: {
            cout << " Задача 6: Азбука Морзе \n";
            string mes = vvod();
            if (!mes.empty()) {
                string morse = t63(mes);
                cout << "\nРезультат: " << morse << endl;
            }
            break;
        }
        case 7: {
            cout << " Задача 7: Проверка примеров \n";
            Five5();
            break;
        }
        case 0: {
            cout << "\nВыход из программы. До свидания!\n";
            return 0;
        }
        default:
            cout << "Нет такой задачи!\n";
            break;
        }
    }
}