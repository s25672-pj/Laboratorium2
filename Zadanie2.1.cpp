#include <iostream>

using namespace std;

int main()
{
    int liczba;
    int x = 0;
    int y = 0;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    for (int i = 1; i <= liczba; i++) {
        x = x + i;
        
        y = y + x;
    }
    cout << "Suma szeregu dla liczby " << liczba << " wynosi " << y << endl;

    return 0;
}
