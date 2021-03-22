#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

int main()
{

    float a,b;
    float c;
    long oper;

    system("chcp 65001");
    cout << "Введите числа а и b"<<endl;
    cin >> a >> b;
    cout <<
            "1.Умножение"<<endl<<
            "2.Сложение"<<endl<<
            "3.Деление"<<endl;
    cin >> oper;

    switch (oper)
    {
        case 1:
            c = a * b;
            cout << c << endl;
            cout << &c << endl;
            break;
        case 2:
            c = a + b;
            cout << c << endl;
            cout << &c << endl;
            break;
        case 3:
            c = a / b;
            cout << c << endl;
            cout << &c << endl;
            break;
        default:
            cout << "Ammm..."<< endl;
            break;
    }

    system("pause");
    cout <<"Введите число"<<endl;
    int z;
    cin >> z;
    int y{1};

    if (z & 1)
    {
    cout<<"Нечетное"<<endl;
    }
    else
    {
    cout<<"Четное"<<endl;
    }

    cout << "Квадрат числа "<<z*z<<endl;

    if (z == 0) {
        cout<<"Ноль"<<endl;
    }
    else if (z < 0) {
        cout<<"Отрицательное"<<endl;
    }
    else if (z > 0) {
        cout<<"Положительное"<<endl;
    }

    while (z > 1)
    {

        y *= z--;
    }
    cout<<"Факториал "<<y<<endl;
    system("pause");
}
