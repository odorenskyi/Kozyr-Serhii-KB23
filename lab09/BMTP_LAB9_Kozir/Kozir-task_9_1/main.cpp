#include <iostream>
#include <string>

using namespace std;

// ������� ��� ���������� �������������� ����
string determineWindCharacteristics(int beaufortScale) {
    switch(beaufortScale) {
        case 0:
            return "�����";
        case 1:
            return "�����";
        case 2:
            return "������";
        case 3:
            return "�������";
        case 4:
            return "���i����";
        case 5:
            return "��i���";
        case 6:
            return "�������";
        case 7:
            return "�i����";
        case 8:
            return "���� �i����";
        case 9:
            return "�����";
        case 10:
            return "������� �����";
        case 11:
            return "��������� �����";
        case 12:
            return "������ (�����i�)";
        default:
            return "���i�����";
    }
}

// ������� ��� ���������� �������� ���� �� ������ �������
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
            return 32.7; // ��� ������� ������
        default:
            return -1; // ��������� -1, ���� �������� �� �����
    }
}

int main() {
    setlocale(LC_ALL, "ukr");
    int beaufortScale;
    cout << "����i�� ��� ������� (�i� 0 �� 12): ";
    cin >> beaufortScale;

    double windSpeed = determineWindSpeed(beaufortScale);
    string windCharacteristics = determineWindCharacteristics(beaufortScale);

    if (windSpeed != -1) {
        cout << "�����i��� ����: " << windSpeed << " �/�" << endl;
        cout << "��������������: " << windCharacteristics << endl;
    } else {
        cout << "���i����� ��� �������." << endl;
    }

    return 0;
}
