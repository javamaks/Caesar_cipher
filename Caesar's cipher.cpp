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
    char ABC[] = {'А','Б','В','Г','Д','Е','Ж','З','И',
                'Й','К','Л','М','Н','О','П','Р','С',
                'Т','У','Ф','Х','Ц','Ч','Ш','Щ','Ъ',
                'Ы','Ь','Э','Ю','Я','_','.',',','0',
                '1','2','3','4','5','6','7','8','9'};
    char ABC1[]={'а','б','в','г','д','е','ж','з','и',
                'й','к','л','м','н','о','п','р','с',
                'т','у','ф','х','ц','ч','ш','щ','ъ',
                'ы','ь','э','ю','я','_','.',',','0',
                '1','2','3','4','5','6','7','8','9'};
    char msg[80];

    cout << "Введите сообщение, которое будет закодировано: " << endl;
    cin.getline(msg, sizeof(msg)); // Мы используем getline для чтения строки с пробелами.

    cout << "\nВведите сдвиг:" << endl;
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

            // Если символ не был найден в таблицах, он остается без изменений
            if (!found) {
                msg[i] = msg[i];
            }
        }
    }

    cout << "Полученное закодированное сообщение: " << endl;
    cout << msg << endl;

    return 0;
}
