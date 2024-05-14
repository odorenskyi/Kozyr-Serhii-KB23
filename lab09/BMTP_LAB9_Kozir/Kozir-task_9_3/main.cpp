#include <iostream>
#include <bitset>

using namespace std;

// ������� ��� ��������� ������� �������� ���� � ����
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

// ������� ��� ��������� ���� �������� ������� � ����
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
    cout << "����i�� ���������� ����� N (�i� 0 �� 7483650): ";
    cin >> N;

    // ��������, �� ������� ����� �� �������� 7483650
    if (N > 7483650) {
        cout << "������� ����� �������� ����������� ��������� �������� (7483650)." << endl;
        return 1; // ��������� 1, ��� ��������� �������
    }

    // �������� ��� D7
    if (N & (1 << 7)) {
        // ���� �� D7 ����� 1
        int zeroesCount = countZeroes(N);
        cout << "�i���i��� ��i������ ���i�: " << zeroesCount << endl;
    } else {
        // ���� �� D7 ����� 0
        int onesSum = sumOnes(N);
        cout << "���� ��i������ �������: " << onesSum << endl;
    }

    return 0;
}
