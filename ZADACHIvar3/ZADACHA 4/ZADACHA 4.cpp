using namespace std;

#include <iostream>
#include<Windows.h>
int main()
{
    setlocale(LC_ALL, "RU");
    cout << "Введите размер массива: ";
    int n;
    cin >> n;
    int* a = new int[n];


    srand(time(0));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 10;
        cout << a[i] << " ";
    }
    cout << endl;
    int maxlenght = 0;
    int count = 0;
    int min, max;
    for (int i = 0; i < n; i++) {
        if (a[i] < a[i + 1])
            count++;
        else {
            if (count > maxlenght) {
                maxlenght = count;
            }
            count = 0;
            max = i;
        }
    }cout<<maxlenght << ""
}
