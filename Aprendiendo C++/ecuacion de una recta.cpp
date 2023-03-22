// Importamos las librerias necesarias
#include <iostream>
#include <conio.h>
#include <ctype.h>
#include <iomanip>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{

    // Declaracion de variables
    float y, m, x, b;

    // Pedimos al usuario que ingrese los datos necesarios
    cout << "Calculo la ecuacion de una recta";
    cout << "\nIngrese el valor de la pendiente: ";
    cin >> m;

    cout << "\nIngrese componente X de un punto que pertenesca a la recta: ";
    cin >> x;
    
    cout << "\nIngrese componente Y de un punto que pertenesca a la recta: ";
    cin >> y;
    
    // Calculamos el valor de b
    b = y - m * x;


    // Mostramos el resultado
    cout << "\nLa ecuacion de la recta es:";
    cout << "\nY=mX+b , donde: ";
    cout << "m = " << m << "";
    cout << "b = " << b << "";

    getch();
}