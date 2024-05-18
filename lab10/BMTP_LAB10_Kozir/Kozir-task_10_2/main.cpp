#include <iostream>
#include <fstream>
#include <ctime>
#include <bitset>

int countDots(const std::string& text) {
    int count = 0;
    for (char c : text) {
        if (c == '.') {
            count++;
        }
    }
    return count;
}

std::string getCurrentDateTime() {
    std::time_t now = std::time(nullptr);
    char buf[80];
    std::strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", std::localtime(&now));
    return std::string(buf);
}

std::string toBinary(int number) {
    return std::bitset<32>(number).to_string(); // 32-����� �������������
}

int main() {
    setlocale (LC_ALL, "ukr");
    std::string inputFileName = "input.txt";
    std::ifstream inputFile(inputFileName);
    if (!inputFile.is_open()) {
        std::cerr << "�� ������� ������� ���� ��� �������." << std::endl;
        return 1;
    }

    std::string content((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());
    inputFile.close();

    int dotCount = countDots(content);
    std::string dateTime = getCurrentDateTime();
    int number = 123; // ������ 123 ����� �������� ����-��� �����
    std::string binaryNumber = toBinary(number);

    std::ofstream outputFile(inputFileName, std::ios_base::app); // ³�������� ���� ��� ��������
    if (!outputFile.is_open()) {
        std::cerr << "�� ������� ������� ���� ��� ������." << std::endl;
        return 1;
    }

    outputFile << "\nʳ������ ������: " << dotCount << std::endl;
    outputFile << "���� � ��� ��������: " << dateTime << std::endl;
    outputFile << "����� � ��������� ���: " << binaryNumber << std::endl;

    outputFile.close();

    return 0;
}
