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
    for (int i = 0; i < n ; i++) {
        a[i] =   rand() %  10;
        cout << a[i]<< " ";
    }
    cout<< endl;
    for (int i = n-1 ; i >= 0; i--) {
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[j + 1])
            {
                int foo = a[j];
                a[j] = a[j + 1];
                a[j + 1] = foo;

            }
        }cout << a[i] << " ";
    }delete [] a;
}

