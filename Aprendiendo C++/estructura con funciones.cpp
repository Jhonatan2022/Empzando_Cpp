#include <iostream>
#include <conio.h>

using namespace std;

struct datos
{
    // Declaracion de variables
    int largo;
    int ancho;
    int area() { return (ancho * largo); }
};

main()
{
    // Declaracion de variables
    datos r1;

    // Pedimos al usuario que ingrese los datos necesarios
    cout << "Largo: ";
    cin >> r1.largo;
    
    cout << "Ancho: ";
    cin >> r1.ancho;

    // Mostramos el resultado
    cout << "Area = " << r1.area();
    getch();
}