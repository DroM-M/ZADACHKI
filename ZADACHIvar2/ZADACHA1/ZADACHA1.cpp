using namespace std;

#include <iostream>
#include <Windows.h>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "RU");
    cout << "Введите радиус: ";
    double r;
    cin >> r;
    double p = 3.14;
    double S;
    S = p * (r * r);
    cout << "Площадь равна: " << S;
}

