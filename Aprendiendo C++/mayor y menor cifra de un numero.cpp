#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

main()
{

    // Declaracion de variables
    int n, digmenor, digmayor, digito;

    // Asignamos valores iniciales
    digmenor = 9;
    digmayor = 0;

    cout << "Ingrese un numero entero: ";
    cin >> n;

    // Calculamos el digito mayor y menor
    do
    {
        digito = n % 10;
        if (digito < digmenor)
        {
            digmenor = digito;
        }

        if (digito > digmayor)
        {
            digmayor = digito;
        }

        n = (n - digito) / 10;
    } while (n > 0);

    // Mostramos el resultado
    cout << "\nDigito menor es: " << digmenor << "\nMayor es: " << digmayor << "";
    getch();
}