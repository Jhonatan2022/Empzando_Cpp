// Importamos las librerias necesarias
#include <iostream>
#include <conio.h>

using namespace std;

main()
{

    // Declaracion de variables
    int a, b, c, temp;

    // Pedimos los numeros
    cout << "Ingrese un numero: ";
    cin >> a;

    cout << "Ingrese un segundo numero: ";
    cin >> b;

    cout << "Ingrese un tercer numero: ";
    cin >> c;

    // Ordenamos los numeros
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    // Ordenamos los numeros
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }

    // Ordenamos los numeros
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }

    // Mostramos los numeros ordenados
    cout << "Ordenado: " << a << " , " << b << " , " << c << "";

    getch();
}