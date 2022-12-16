#include <iostream>
#include <iomanip>
#include <conio.h>
#include <ctype.h>

using namespace std;

int detectarpar(int numero);

int main(int argc, char const *argv[])
{
    int numero;
    char rpt;

    for (;;)
    {
        cout << "\nIngrese un numero: ";
        cin >> numero;

        if (detectarpar(numero))
        {
            cout << "\nEl numero es par...";
        }
        else
        {
            cout << "\nEl numero es impar...";
        }
        cout << "Desea salir [s] o [n]? ";
        rpt = getch();
        rpt = toupper(rpt);

        if (rpt == 'S')
            break;
    }
}
int detectarpar(int numero)
{
    if (numero % 2 == 0)
        return (1);
    else
        return (0);
}