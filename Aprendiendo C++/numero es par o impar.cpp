// Implementar una funcion que detecte si un numero es par o impar
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <ctype.h>

using namespace std;

// Prototipo de la funcion
int detectarpar(int numero);

int main(int argc, char const *argv[])
{
    // Declaracion de variables
    int numero;
    char rpt;


    // Inicio del programa
    for (;;)
    {
        // Pedimos el numero
        cout << "\nIngrese un numero: ";
        cin >> numero;

        // Detectamos si el numero es par o impar
        if (detectarpar(numero))
        {
            cout << "\nEl numero es par...";
        }
        else
        {
            cout << "\nEl numero es impar...";
        }

        // Preguntamos si desea salir
        cout << "Desea salir [s] o [n]? ";

        // Capturamos la respuesta
        rpt = getch();
        rpt = toupper(rpt);

        // Si la respuesta es S salimos del programa
        if (rpt == 'S')
            break;
    }
}

// Funcion para detectar si un numero es par o impar
int detectarpar(int numero)
{
    // Si el numero es par retorna 1
    if (numero % 2 == 0)
        return (1);
    // Si el numero no es par retorna 0
    else
        return (0);
}