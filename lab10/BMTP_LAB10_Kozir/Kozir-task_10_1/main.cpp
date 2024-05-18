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
    hasUkraine = containsWord(text, "Україна");
    hasUniversity = containsWord(text, "університет") || containsWord(text, "університету");
    hasNotepad = containsWord(text, "блокнот");
}

int main() {
    std::ifstream inputFile("input.txt");
    std::ofstream outputFile("output.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Не вдалося відкрити вхідний файл!" << std::endl;
        return 1;
    }

    // Авторська інформація
    std::string authorName = "Сергій Козирь";
    std::string organization = "Центральноукраїнський національний технічний університет";
    std::string city = "Кропивницький";
    std::string country = "Україна";
    std::string year = "2024";

    // Зчитування вхідного файлу
    std::stringstream buffer;
    buffer << inputFile.rdbuf();
    std::string text = buffer.str();

    // Кількість абзаців
    size_t paragraphCount = std::count(text.begin(), text.end(), '\n') + 1;

    // Перевірка наявності слів
    bool hasUkraine = false;
    bool hasUniversity = false;
    bool hasNotepad = false;
    searchWords(text, hasUkraine, hasUniversity, hasNotepad);

    // Запис результатів у вихідний файл
    outputFile << "Авторська інформація: " << authorName << ", " << organization << ", " << city << ", " << country << ", " << year << std::endl;
    outputFile << "Кількість абзаців: " << paragraphCount << std::endl;
    outputFile << "Наявність слова 'Україна': " << (hasUkraine ? "Так" : "Ні") << std::endl;
    outputFile << "Наявність слова 'університет': " << (hasUniversity ? "Так" : "Ні") << std::endl;
    outputFile << "Наявність слова 'блокнот': " << (hasNotepad ? "Так" : "Ні") << std::endl;
    outputFile << "Модуль було розроблено студентом Центральноукраїнського національного технічного університету Козирь Сергій, м. Кропивницький. Україна. 2024 рік." << std::endl;

    inputFile.close();
    outputFile.close();

    return 0;
}
