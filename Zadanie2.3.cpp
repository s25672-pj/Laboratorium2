#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Podaj liczbe z zakresu 1-12: ";
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "Styczen\n";
        cout << "Liczba dni w miesiacu: 31\n";
        break;
    case 2:
        cout << "Luty\n";
        cout << "Liczba dni w miesiacu: 27\n";
        break;
    case 3:
        cout << "Marzec\n";
        cout << "Liczba dni w miesiacu: 31\n";
        break;
    case 4:
        cout << "Kwiecien\n";
        cout << "Liczba dni w miesiacu: 30\n";
        break;
    case 5:
        cout << "Maj\n";
        cout << "Liczba dni w miesiacu: 31\n";
        break;
    case 6:
        cout << "Czerwiec\n";
        cout << "Liczba dni w miesiacu: 30\n";
        break;
    case 7:
        cout << "Lipiec\n";
        cout << "Liczba dni w miesiacu: 31\n";
        break;
    case 8:
        cout << "Siepien\n";
        cout << "Liczba dni w miesiacu: 31\n";
        break;
    case 9:
        cout << "Wrzesien\n";
        cout << "Liczba dni w miesiacu: 30\n";
        break;
    case 10:
        cout << "Pazdziernik\n";
        cout << "Liczba dni w miesiacu: 31\n";
        break;
    case 11:
        cout << "Listopad\n";
        cout << "Liczba dni w miesiacu: 30\n";
        break;
    case 12:
        cout << "Grudzien\n";
        cout << "Liczba dni w miesiacu: 31\n";
        break;
    default:
        cout << "Podales liczbe spoza zakresu\n";
    }
    if (x <= 0 or x >= 13) {

    }
    else {
        if (4 <= x and x <= 9) {
            cout << "Miesiac sloneczny";
        }
        else {
            cout << "Miesiac pochmurny";
        }
    }
    return 0;
}
