// Lab_04_6.cpp
// < Корнєєв Владислав >
// Лабораторна робота № 4.6
// Вкладені цикли.
// Варіант 12
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double P, S;
    int n, k;
    P = 1;
    n = 1;
    while (n <= 20)

    {
        S = 0;
        k = 1;
        while (k <= n)

        {
            S += k;
            k++;

        }
        P *= (n * n) + (S);
        n++;

    }
    cout << P << endl;
    P = 1;
    n = 1;
    do
    {
        S = 0;
        k = 1;
        do
        {
            S += k;
            k++;
        } while (k <= n);
        P *= (n * n) + (S);
        n++;
    } while (n <= 20);
    cout << P << endl;
    P = 1;
    for (n = 1; n <= 20; n++)

    {
        S = 0;
        for (k = 1; k <= n; k++)

        {
            S += k;

        }
        P *= (n * n) + (S);

    }
    cout << P << endl;
    P = 1;
    for (n = 20; n >= 1; n--)s

    {
        S = 0;
        for (k = n; k >= 1; k--)

        {
            S += k;
        }
        P *= (n * n) + (S);
    }
    cout << P << endl;
    return 0;
}
