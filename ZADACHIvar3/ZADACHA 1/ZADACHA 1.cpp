using namespace std;

#include <iostream>
#include<iostream>
int main()
{
    setlocale(LC_ALL, "RU");
    std::cout << "Введите температуру в C: ";
    int C;
    cin >> C;
    int F;
    F = (C * 9 / 5) + 32;
    cout << "Данная температура в Фаренгейтах равна: " << F;
}
