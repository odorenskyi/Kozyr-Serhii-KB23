#include <iostream>
#include <string>

using namespace std;

// Функція для визначення характеристики вітру
string determineWindCharacteristics(int beaufortScale) {
    switch(beaufortScale) {
        case 0:
            return "Штиль";
        case 1:
            return "Тихий";
        case 2:
            return "Легкий";
        case 3:
            return "Слабкий";
        case 4:
            return "Помiрний";
        case 5:
            return "Свiжий";
        case 6:
            return "Сильний";
        case 7:
            return "Мiцний";
        case 8:
            return "Дуже мiцний";
        case 9:
            return "Шторм";
        case 10:
            return "Сильний шторм";
        case 11:
            return "Шквальний шторм";
        case 12:
            return "Ураган (буревiй)";
        default:
            return "Невiдомий";
    }
}

// Функція для визначення швидкості вітру за шкалою Бофорта
double determineWindSpeed(int beaufortScale) {
    switch(beaufortScale) {
        case 0:
            return 0.3;
        case 1:
            return 1.5;
        case 2:
            return 3.4;
        case 3:
            return 5.4;
        case 4:
            return 7.9;
        case 5:
            return 10.7;
        case 6:
            return 13.7;
        case 7:
            return 17.1;
        case 8:
            return 20.7;
        case 9:
            return 24.4;
        case 10:
            return 28.4;
        case 11:
            return 32.6;
        case 12:
            return 32.7; // Для випадку буревію
        default:
            return -1; // Повертаємо -1, якщо значення не відоме
    }
}

int main() {
    setlocale(LC_ALL, "ukr");
    int beaufortScale;
    cout << "Введiть бал Бофорта (вiд 0 до 12): ";
    cin >> beaufortScale;

    double windSpeed = determineWindSpeed(beaufortScale);
    string windCharacteristics = determineWindCharacteristics(beaufortScale);

    if (windSpeed != -1) {
        cout << "Швидкiсть руху: " << windSpeed << " м/с" << endl;
        cout << "Характеристика: " << windCharacteristics << endl;
    } else {
        cout << "Невiдомий бал Бофорта." << endl;
    }

    return 0;
}
