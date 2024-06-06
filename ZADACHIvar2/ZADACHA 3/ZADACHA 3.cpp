using namespace std;

#include <iostream>
#include<Windows.h>

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Введите число: ";
    int a,count=0;
    cin >> a;

    for (int i = 1; i <= a; i++) {
        if (a % i == 0)
            count++;
    }
    if (count > 2)
        cout << "Число не является простым";
    else
        cout << "Число являеся простым";
}

