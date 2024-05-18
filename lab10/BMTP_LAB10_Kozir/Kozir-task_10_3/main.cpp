#include <iostream>
#include <fstream>
#include <bitset>
#include <cmath>

// ���������� ������� � "Modules.h"
double s_calculation(double x, double y, int z) {
    // ������� ���������, ��� �������� ����� ������� �� x, y � z
    return x * y + std::pow(z, 2);
}

std::string toBinary(int number) {
    return std::bitset<32>(number).to_string(); // 32-����� �������������
}

int main() {
    std::string inputFileName = "input.txt";
    std::string outputFileName = "output.txt";

    double x, y;
    int z;

    std::ifstream inputFile(inputFileName);
    if (!inputFile.is_open()) {
        std::cerr << "�� ������� ������� ������� ����." << std::endl;
        return 1;
    }

    // ������� x, y, v � �����
    inputFile >> x >> y >> z;
    inputFile.close();

    // �������� ���������� �� ��������� �������
    double result = s_calculation(x, y, z);
    std::string binaryV = toBinary(z);

    std::ofstream outputFile(outputFileName, std::ios_base::app); // ³�������� ���� ��� ��������
    if (!outputFile.is_open()) {
        std::cerr << "�� ������� ������� �������� ����." << std::endl;
        return 1;
    }

    // �������� ���������� � �������� ����
    outputFile << "��������� s_calculation: " << result << std::endl;
    outputFile << "����� z � ��������� ���: " << binaryV << std::endl;

    outputFile.close();

    return 0;
}
