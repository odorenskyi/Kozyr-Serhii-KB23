#include <iostream>
#include <cstdlib> // ��� ������������ ������� system("pause")
#include <Windows.h> // ��� ������������ ������� Beep

using namespace std;

// ������� ��� ������� ������� "u"
void s_calculation() {
    cout << "������ ������� s_calculation()" << endl;
    // ��� ��� ��� ������� ������� "u" ���
}

// ������� ��� ������� ������� "�"
void task_9_1() {
    cout << "������ ������� ������ 9.1" << endl;
    // ��� ��� ��� ������� ������� "�" ���
}

// ������� ��� ������� ������� "p"
void task_9_2() {
    cout << "������ ������� ������ 9.2" << endl;
    // ��� ��� ��� ������� ������� "p" ���
}

// ������� ��� ������� ������� "a"
void task_9_3() {
    cout << "������ ������� ������ 9.3" << endl;
    // ��� ��� ��� ������� ������� "a" ���
}

int main() {
    char choice;
    do {
        cout << "������ ������ ('u', 'o', 'p', 'a') ��� 's' ��� ����������: ";
        cin >> choice;

        switch (choice) {
            case 'u':
                s_calculation();
                break;
            case 'o':
                task_9_1();
                break;
            case 'p':
                task_9_2();
                break;
            case 'a':
                task_9_3();
                break;
            case 's':
            case 'S':
                return 0; // ����� � ��������
            default:
                // ���� �������� ������ �� ������� ������� � �������, ���������� �������� ������ �������
                Beep(1000, 500); // ������ �������� - ������� ����� (� ������), ������ - ��������� (� ����������)
                cout << "��������� ��������. ��������� �� ���." << endl;
        }
    } while (true);

    //system("pause"); // �������������� ��� �����, ���� �� ������������� Windows � ������ �������� ������� ����� �����������
    return 0;
}
