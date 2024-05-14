#include <iostream>
#include <map>

using namespace std;

// ������� ��� ����������� ������ ��������� � ��������� ������� � ����� � ���
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
        return -1; // ��������� -1, ���� ����� �� ��������
    }
}

// ������� ��� ����������� ������ ��������� � ��������� ������� � ����� � ��
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
        return "���i�����"; // ��������� "��������", ���� ����� �� ��������
    }
}

int main() {
    setlocale (LC_ALL, "ukr");
    int ukrSize;
    cout << "����i�� ����i� �����i��� ��������� �� ���������� �������� (23, 25, 27, 29, 31): ";
    cin >> ukrSize;

    int usSize = convertToUS(ukrSize);
    string euSize = convertToEU(ukrSize);

    if (usSize != -1) {
        cout << "�i����i���� ����i� � ���: " << usSize << endl;
    } else {
        cout << "����i� � ���: ���i�����" << endl;
    }

    cout << "�i����i���� ����i� � �����i: " << euSize << endl;

    return 0;
}
