using namespace std;

#include <iostream>
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "RU");
    cout << "Введите число: ";
    int a;
    cin >> a;
    if (a % 2 > 0) 
        cout << "Число нечетное,";
    else
        cout<< "Число четное,";
    if (a > 0)
        cout << "положительное";
    else
        cout << "отрицательное";
}

