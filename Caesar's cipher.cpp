#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;

int main()
{
    setlocale(0, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int i = 0, j = 0, k;
    char ABC[] = {'�','�','�','�','�','�','�','�','�',
                '�','�','�','�','�','�','�','�','�',
                '�','�','�','�','�','�','�','�','�',
                '�','�','�','�','�','_','.',',','0',
                '1','2','3','4','5','6','7','8','9'};
    char ABC1[]={'�','�','�','�','�','�','�','�','�',
                '�','�','�','�','�','�','�','�','�',
                '�','�','�','�','�','�','�','�','�',
                '�','�','�','�','�','_','.',',','0',
                '1','2','3','4','5','6','7','8','9'};
    char msg[80];

    cout << "������� ���������, ������� ����� ������������: " << endl;
    cin.getline(msg, sizeof(msg)); // �� ���������� getline ��� ������ ������ � ���������.

    cout << "\n������� �����:" << endl;
    cin >> k;
    cout << endl;

    for (i = 0; i < strlen(msg); i++) {
        if (msg[i] == ' ') {
            msg[i] = ' ';
        } else {
            bool found = false;
            for (j = 0; j < 45; j++) {
                if (msg[i] == ABC[j]) {
                    msg[i] = ABC[(j + k) % 45];
                    found = true;
                    break;
                } else if (msg[i] == ABC1[j]) {
                    msg[i] = ABC1[(j + k) % 45];
                    found = true;
                    break;
                }
            }

            // ���� ������ �� ��� ������ � ��������, �� �������� ��� ���������
            if (!found) {
                msg[i] = msg[i];
            }
        }
    }

    cout << "���������� �������������� ���������: " << endl;
    cout << msg << endl;

    return 0;
}
