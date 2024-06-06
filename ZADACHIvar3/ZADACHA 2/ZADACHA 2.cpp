using namespace std;

#include <iostream>
#include<Windows.h>
int main()
{
    setlocale(LC_ALL, "RU");
    char x;
    double sum, raz, pr, ch;
    double a, b;
    cout << "Введите A :";
    cin >> a;
    cout << "Введите B :";
    cin >> b;
    sum = a + b;
    raz = a - b;
    pr = a * b;
    ch = a / b;
    
    cout << "Какое действие вы ходитие совершить(+,-,*,/): ";
    cin >> x;
    switch (x) {
    case '+':
        cout << sum;
        break;
    case '-' :
        cout << raz;
        break;
    case '*':
        cout << pr;
        break;
    case '/':
        cout << ch;
        break;
    }
}

