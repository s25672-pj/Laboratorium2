#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;
    cout << "Podane wartosci to: " << a << " i " << b << endl;
    cout << "\n";
    cout << "Wiersz o dlugosci 'a'" << endl;
    for (int i = 1; i <= a; i++)
    {
        cout << "*";
    }
    cout << "\n";
    cout << "\n";
    cout << "Kolumna o dlugosci 'b'" << endl;
    for (int i = 1; i <= b; i++)
    {
        cout << "*" << endl;
    }
    cout << "\n";
    cout << "Prostokat gwiazdek o wymiarach 'a' na 'b':" << endl;
    for (int i = 0;i < a;i++)
    {
        for (int j = 0;j < b;j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
    cout << "Obwod prostakatu o wymiarach 'a' na 'b': " << endl;
    for (int i = 0; i < b; i++)
    {
        cout << "*";
    }
    cout << "\n";

    for (int i = 0; i < a - 2; i++)
    {
        cout << "*";
        for (int j = 0; j < b - 2; j++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }

    for (int i = 0; i < b; i++)
    {
        cout << "*";
    }

    return 0;
}