#include <iostream>
#include <string>
#include "windows.h"
using namespace std;
int main()
{
	/*
    double n, p, m, s, T;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    cout << "Введіть n (всього деталей): ";
    cin >> n;
    cout << "Введіть p (годин): ";
    cin >> p;
    cout << "Введіть m (деталей/год): ";
    cin >> m;
    cout << "Введіть s (деталей/год далі): ";
    cin >> s;
    T = p + (n - p * m) / s;
    cout << "Загальний час T = " << T << endl;
    return 0;
    */
    double n, p, m, s, T;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("input n: ");
    scanf_s("%lf", &n);
    printf("input p: ");
    scanf_s("%lf", &p);
    printf("input m: ");
    scanf_s("%lf", &m);
    printf("input s: ");
    scanf_s("%lf", &s);
    T = p + (n - p * m) / s;
    printf("T = %lf\n", T);
}