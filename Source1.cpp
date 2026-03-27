#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <Windows.h>
#include "Header.h"
string String55(string text) { 
    using namespace std;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    string mword = "";
    string word = "";
    int msize = 0;
    text += " ";
    for (int i = 0; i < text.size(); i++) {
        string simvol = text.substr(i, 1);
        if ((simvol>="¿" && simvol<="ˇ") || simvol=="∏" || simvol=="®"){
            word += simvol;
        }
        else {
            if (word.size() > 0) {
                if (word.size() > msize) {
                    msize = word.size();
                    mword = word;
                }
                word = "";
            }
            else {
                mword = "Õ≈ —ÀŒ¬Œ...\n";
                break;
            }
        }
    }
    return mword;
}

string Str18(string put) {
    using namespace std;
    int c = 0;
    for (int i = 0; i < put.size(); i++) {
        if (put[i] == '\\') {
            put[i] = '/';
            c++;
        }
    }
    if (c == 0) put = "\nƒ‡Ì ÌÂ ÔÛÚ¸: ¬ ÒÚÓÍÂ ÌÂÚ \\ \n";
    return put;
}

string Str25(string num){
    using namespace std;
    string res;
    int count = 0;
    for (int i = 0; i < num.size(); i++) {
        if (num[i] < '0' || num[i] > '9') {
            return "ÕÂ ˜ËÒÎÓ";
        }
    }
    for (int i = num.size() - 1; i >= 0; i--) { 
        res = num[i] + res;
        count++;
        if (count % 3 == 0 && i != 0) {
            res = " " + res;
        }
    }
    return res;
}

string Str39(string text){
    using namespace std;
    string res = "";
    for (int i = 0; i < text.size(); i++) {
        string s = text.substr(i, 1);
        if (s!="." && s != "," && s != ";" && s != ":" && s != "!" && s != "?" && s != "(" && s != ")" && s != """") {
            int count = 0;
            for (int j = 0; j < text.size(); j++) {
                if (text.substr(j, 1) == s) {
                    count++;
                }
            }
            if (count == 1) {
                res += s + " ";
            }
        }
    }

    if (res.empty()) return "ÕÂÚ ÛÌËÍ‡Î¸Ì˚ı";
    return res;
}

string Str30(string n20) {
    using namespace std;
    for (int i = 0; i < n20.size(); i++) {
        string s = n20.substr(i, 1);
        bool v = false;
        if (s >= "0" && s <= "9") v = true;
        else if (s >= "A" && s <= "J") v = true;
        else if (s >= "a" && s <= "j") v = true;
        if (!v) {
            return "Œ¯Ë·Í‡: ÌÂ‰ÓÔÛÒÚËÏ˚È ÒËÏ‚ÓÎ '" + s + "'";
        }
    }
    int res = 0;
    for (int i = 0; i < n20.size(); i++) {
        string s = n20.substr(i, 1);
        int n;
        if (s >= "0" && s <= "9") {
            n = stoi(s); 
        }
        else if (s >= "A" && s <= "J") {
            n = 10 + (s[0] - 'A');
        }
        else if (s >= "a" && s <= "j") {
            n = 10 + (s[0] - 'a');
        }
        res = res * 20 + n;
    }
    return to_string(res);
}

string t63(string mes) {
    using namespace std;
    string let = "¿¡¬√ƒ≈∆«»… ÀÃÕŒœ–—“”‘’÷◊ÿŸ⁄€‹›ﬁﬂ‡·‚„‰ÂÊÁËÈÍÎÏÌÓÔÒÚÛÙıˆ˜¯˘˙˚¸˝˛ˇABWGDEVZIJKLMNOPRSTUFHCQYXabwgdevzijklmnoprstufhcqyx0123456789";
    string cod[] = {
        "._","_...",".__","__.","_..",".","..._","__..","..",".___",
        "_._","._..","__","_.","___",".__.","._.","...","_",".._",
        ".._.","....","_._.","___.","____","__._","__.__","_.__",
        "_.._",".._..","..__","._._",
        "._","_...",".__","__.","_..",".","..._","__..","..",".___",
        "_._","._..","__","_.","___",".__.","._.","...","_",".._",
        ".._.","....","_._.","___.","____","__._","__.__","_.__",
        "_.._",".._..","..__","._._",
        "._","_...",".__","__.","_..",".","..._","__..","..",".___",
        "_._","._..","__","_.","___",".__.","._.","...","_",".._",
        ".._.","....","_._.","___.","____","__._",
        "._","_...",".__","__.","_..",".","..._","__..","..",".___",
        "_._","._..","__","_.","___",".__.","._.","...","_",".._",
        ".._.","....","_._.","___.","____","__._",
        "_____",".____","..___","...__","...._",".....",
        "_....","__...","___..","____."
    };
    string res = "";
    for (int i = 0; i < mes.size(); i++) {
        string s = mes.substr(i, 1);
        if (s == " ") {
            res += "   ";
        }
        for (int j = 0; j < let.size(); j++) {
            if (s == let.substr(j, 1)) {
                res += cod[j] + " ";
            }
        }
    }
    return res;
}

void Five5() {
    using namespace std;
    ifstream fin("FN1.txt");
    ofstream fout("FN2.txt");

    if (!fin.is_open()) {
        cout << "Œ¯Ë·Í‡: ÌÂ ÏÓ„Û ÓÚÍ˚Ú¸ FN1.txt";
    }
    string prim;
    while (getline(fin, prim)) {
        string clean = "";
        for (char c : prim) {
            if (c != ' ') clean += c;
        }
        int oppos = -1;
        char oper = ' ';
        for (int i = 1; i < clean.size(); i++) {
            if (clean[i] == '+' || clean[i] == '-') {
                if (clean[i - 1] >= '0' && clean[i - 1] <= '7') {
                    oppos = i;
                    oper = clean[i];
                    break;
                }
            }
        }
        int ravpos = clean.find('=');
        if (oppos == -1) {
            fout << prim << " Œ¯Ë·Í‡: ÌÂÚ ÓÔÂ‡ˆËË\n";
            cout << "Œ¯Ë·Í‡: ÌÂÚ ÓÔÂ‡ˆËË\n";
            continue;
        }
        string num1 = clean.substr(0, oppos);
        string num2 = clean.substr(oppos + 1, ravpos - oppos - 1);
        if (num1.empty() || num2.empty()) {
            fout << prim << " Œ¯Ë·Í‡: ÔÛÒÚÓÂ ˜ËÒÎÓ\n";
            cout << "Œ¯Ë·Í‡: ÔÛÒÚÓÂ ˜ËÒÎÓ\n";
            continue;
        }
        bool vnum1 = true, vnum2 = true;
        for (char c : num1) if (c < '0' || c > '7') vnum1 = false;
        for (char c : num2) if (c < '0' || c > '7') vnum2 = false;

        if (!vnum1 || !vnum2) {
            fout << prim << " Œ¯Ë·Í‡: ÌÂ ‚ÓÒ¸ÏÂË˜ÌÓÂ ˜ËÒÎÓ\n";
            cout << "Œ¯Ë·Í‡: ÌÂ ‚ÓÒ¸ÏÂË˜ÌÓÂ ˜ËÒÎÓ\n";
            continue;
        }
        if (num1.size() > 3 || num2.size() > 3) {
            fout << prim << " Œ¯Ë·Í‡: ˜ËÒÎÓ ·ÓÎÂÂ ÚÂıÁÌ‡˜ÌÓ„Ó\n";
            cout << "Œ¯Ë·Í‡: ˜ËÒÎÓ ·ÓÎ¸¯Â ÚÂıÁÌ‡˜ÌÓ„Ó\n";
            continue;
        }
        int n1 = 0, n2 = 0;
        for (char c : num1) n1 = n1 * 8 + (c - '0');
        for (char c : num2) n2 = n2 * 8 + (c - '0');
        int res;
        if (oper == '+') {
            res = n1 + n2;
        }
        else {
            res = n1 - n2;
        }
        string resvv;
        if (res == 0) {
            resvv = "0";
        }
        else {
            string vos = "";
            while (res > 0) {
                vos = to_string(res % 8) + vos;
                res /= 8;
            }
            resvv = vos;
        }
        fout << prim << " " << resvv << endl;
        cout << prim << " " << resvv << endl;
    } 
    fin.close();
    fout.close();
    cout << "ŒÚ‚ÂÚ˚ Á‡ÔËÒ‡Ì˚ ‚ Ù‡ÈÎ FN2.txt" << endl;
}