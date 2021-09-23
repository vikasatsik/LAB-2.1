// LAB-02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// LAB_02.cpp
// Сацик Вікторія
// Лабораторна робота №2.1.
// Лінійні програми.
// Варіант 17

#include <iostream>;
#include <cmath>;

using namespace std;

int main()
{
    double m;
    double z1;
    double z2;

    cout << "m = "; cin >> m;

    z1 = (sqrt((pow((3 * m + 2), 2)) - 24 * m)) / (3 * sqrt(m) - 2 / sqrt(m));
    z2 = sqrt(m);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}