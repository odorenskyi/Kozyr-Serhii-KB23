#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

bool containsWord(const std::string &text, const std::string &word) {
    std::string delimiters = " ,.!?;:\n\t";
    size_t pos = text.find(word);
    while (pos != std::string::npos) {
        if ((pos == 0 || delimiters.find(text[pos - 1]) != std::string::npos) &&
            (pos + word.length() == text.length() || delimiters.find(text[pos + word.length()]) != std::string::npos)) {
            return true;
        }
        pos = text.find(word, pos + 1);
    }
    return false;
}

void searchWords(const std::string &text, bool &hasUkraine, bool &hasUniversity, bool &hasNotepad) {
    hasUkraine = containsWord(text, "������");
    hasUniversity = containsWord(text, "����������") || containsWord(text, "�����������");
    hasNotepad = containsWord(text, "�������");
}

int main() {
    std::ifstream inputFile("input.txt");
    std::ofstream outputFile("output.txt");

    if (!inputFile.is_open()) {
        std::cerr << "�� ������� ������� ������� ����!" << std::endl;
        return 1;
    }

    // ��������� ����������
    std::string authorName = "����� ������";
    std::string organization = "�������������������� ������������ �������� ����������";
    std::string city = "�������������";
    std::string country = "������";
    std::string year = "2024";

    // ���������� �������� �����
    std::stringstream buffer;
    buffer << inputFile.rdbuf();
    std::string text = buffer.str();

    // ʳ������ �������
    size_t paragraphCount = std::count(text.begin(), text.end(), '\n') + 1;

    // �������� �������� ���
    bool hasUkraine = false;
    bool hasUniversity = false;
    bool hasNotepad = false;
    searchWords(text, hasUkraine, hasUniversity, hasNotepad);

    // ����� ���������� � �������� ����
    outputFile << "��������� ����������: " << authorName << ", " << organization << ", " << city << ", " << country << ", " << year << std::endl;
    outputFile << "ʳ������ �������: " << paragraphCount << std::endl;
    outputFile << "�������� ����� '������': " << (hasUkraine ? "���" : "ͳ") << std::endl;
    outputFile << "�������� ����� '����������': " << (hasUniversity ? "���" : "ͳ") << std::endl;
    outputFile << "�������� ����� '�������': " << (hasNotepad ? "���" : "ͳ") << std::endl;
    outputFile << "������ ���� ���������� ��������� ��������������������� ������������� ��������� ����������� ������ �����, �. �������������. ������. 2024 ��." << std::endl;

    inputFile.close();
    outputFile.close();

    return 0;
}
