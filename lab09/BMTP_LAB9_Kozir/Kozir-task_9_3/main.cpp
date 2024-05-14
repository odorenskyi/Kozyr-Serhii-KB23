#include <iostream>
#include <bitset>

using namespace std;

// Функція для підрахунку кількості двійкових нулів у числі
int countZeroes(int num) {
    bitset<32> binary(num);
    int count = 0;
    for (int i = 0; i < 32; ++i) {
        if (binary[i] == 0) {
            count++;
        }
    }
    return count;
}

// Функція для підрахунку суми двійкових одиниць у числі
int sumOnes(int num) {
    bitset<32> binary(num);
    int sum = 0;
    for (int i = 0; i < 32; ++i) {
        if (binary[i] == 1) {
            sum++;
        }
    }
    return sum;
}

int main() {
    setlocale(LC_ALL, "ukr");
    int N;
    cout << "Введiть натуральне число N (вiд 0 до 7483650): ";
    cin >> N;

    // Перевірка, чи введене число не перевищує 7483650
    if (N > 7483650) {
        cout << "Введене число перевищує максимально допустиме значення (7483650)." << endl;
        return 1; // Повертаємо 1, щоб позначити помилку
    }

    // Перевірка біту D7
    if (N & (1 << 7)) {
        // Якщо біт D7 рівний 1
        int zeroesCount = countZeroes(N);
        cout << "Кiлькiсть двiйкових нулiв: " << zeroesCount << endl;
    } else {
        // Якщо біт D7 рівний 0
        int onesSum = sumOnes(N);
        cout << "Сума двiйкових одиниць: " << onesSum << endl;
    }

    return 0;
}
