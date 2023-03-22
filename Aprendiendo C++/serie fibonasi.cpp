#include <iostream>
#include <iomanip>
#include <conio.h>
#include <ctype.h>

using namespace std;

main()
{
    // Declaración de variables
    int a1, a2, i, n, termino;
    a1 = 0;
    a2 = 1;

    // Pedimos los datos
    cout << "Ingrese la cantidad de valores que desea: ";
    cin >> n;
    cout << "" << a1 << " , " << a2 << " ";

    // Inicializamos las variables
    i = 3;

    // Declaramos un ciclo para calcular los valores
    while (i <= n)
    {
        termino = a2 + a1;
        a1 = a2;
        a2 = termino;
        i = i + 1;
        cout << ", " << termino << "";
    }
    getch();
}