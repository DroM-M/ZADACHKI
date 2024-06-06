using namespace std;

#include <iostream>
#include<Windows.h>
int main()
{
    setlocale(LC_ALL, "RU");
    cout << "Введите число: ";
    int A, k=0, s=0;
    cin >> A;
    while (A % 10 != 0) {
        k++;
        s = s + (A % 10);
        A = A / 10;
    }
    cout << "Количество цифр - " << k << " Сумма цифр -  " << s;
}

