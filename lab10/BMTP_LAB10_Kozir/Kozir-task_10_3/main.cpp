#include <iostream>
#include <fstream>
#include <bitset>
#include <cmath>

// Оголошення функції з "Modules.h"
double s_calculation(double x, double y, int z) {
    // Приклад реалізації, яка обчислює якусь функцію від x, y і z
    return x * y + std::pow(z, 2);
}

std::string toBinary(int number) {
    return std::bitset<32>(number).to_string(); // 32-бітове представлення
}

int main() {
    std::string inputFileName = "input.txt";
    std::string outputFileName = "output.txt";

    double x, y;
    int z;

    std::ifstream inputFile(inputFileName);
    if (!inputFile.is_open()) {
        std::cerr << "Не вдалося відкрити вхідний файл." << std::endl;
        return 1;
    }

    // Зчитуємо x, y, v з файлу
    inputFile >> x >> y >> z;
    inputFile.close();

    // Виконуємо обчислення за допомогою функції
    double result = s_calculation(x, y, z);
    std::string binaryV = toBinary(z);

    std::ofstream outputFile(outputFileName, std::ios_base::app); // Відкриваємо файл для дозапису
    if (!outputFile.is_open()) {
        std::cerr << "Не вдалося відкрити вихідний файл." << std::endl;
        return 1;
    }

    // Дописуємо результати у вихідний файл
    outputFile << "Результат s_calculation: " << result << std::endl;
    outputFile << "Число z у двійковому коді: " << binaryV << std::endl;

    outputFile.close();

    return 0;
}
