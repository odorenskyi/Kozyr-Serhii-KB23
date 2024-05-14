#include <iostream>
#include <map>

using namespace std;

// Функція для конвертації розміру шкарпеток з української системи у розмір у США
int convertToUS(int size) {
    map<int, int> ukrToUS = {
        {23, 8},
        {25, 9},
        {27, 10},
        {29, 11},
        {31, 12}
    };

    if (ukrToUS.find(size) != ukrToUS.end()) {
        return ukrToUS[size];
    } else {
        return -1; // Повертаємо -1, якщо розмір не знайдено
    }
}

// Функція для конвертації розміру шкарпеток з української системи у розмір у ЄС
string convertToEU(int size) {
    map<int, string> ukrToEU = {
        {23, "37/38"},
        {25, "39/40"},
        {27, "41/42"},
        {29, "43/44"},
        {31, "45/46"}
    };

    if (ukrToEU.find(size) != ukrToEU.end()) {
        return ukrToEU[size];
    } else {
        return "Невiдомий"; // Повертаємо "Невідомий", якщо розмір не знайдено
    }
}

int main() {
    setlocale (LC_ALL, "ukr");
    int ukrSize;
    cout << "Введiть розмiр чоловiчих шкарпеток за українською системою (23, 25, 27, 29, 31): ";
    cin >> ukrSize;

    int usSize = convertToUS(ukrSize);
    string euSize = convertToEU(ukrSize);

    if (usSize != -1) {
        cout << "Вiдповiдний розмiр у США: " << usSize << endl;
    } else {
        cout << "Розмiр у США: Невiдомий" << endl;
    }

    cout << "Вiдповiдний розмiр у Європi: " << euSize << endl;

    return 0;
}
