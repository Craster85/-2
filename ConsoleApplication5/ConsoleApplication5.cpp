#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a, b, c, d;
    cout << "Введите четырёх значное число:\n";
    cin >> a;
    if (9999 <= a || a >= 1000)
    {
        b = a / 100 % 10;
        c = a / 10 % 10;
        d = a % 10;
        a /= 1000;
        cout << b << a << d << c;
    }
    else
    {
        cout << "Ошибка";
    }

    return 0;
}