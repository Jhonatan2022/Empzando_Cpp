// Incluimos las librerias necesarias
#include <iostream>
#include <math.h>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    // Declaracion de variables
    int opc;
    int valor;


    // Funcion principal
    cout << "\nConversion de Base";
    cout << "\n------------------------";
    cout << "\n\n1) Decimal a hexagesimal";
    cout << "\n2) Hexagesimal a decimal";
    cout << "\n3) Decimal a octal";
    cout << "\n4) Octal a decimal";
    cout << "\n\nElija su opcion: ";
    cin >> opc;

    // Creamos un switch para las opciones del menu
    switch (opc)
    {

    // Caso 1 para convertir de decimal a hexagesimal
    case 1:
    {
        cout << "Introdusca valor decimal:";
        cin >> valor;
        
        // Imprimimos el valor en hexagesimal
        cout << setw(6) << setbase(16) << valor << endl;
        break;
    }

    // Caso 2 para convertir de hexagesimal a decimal
    case 2:
    {
        cout << "Introdusca valor hexagesimal:";
        cin >> valor;

        // Imprimimos el valor en decimal
        cout << setw(6) << setbase(10) << valor << endl;
        break;
    }

    // Caso 3 para convertir de decimal a octal
    case 3:
    {
        cout << "Introdusca valor decimal:";
        cin >> valor;

        // Imprimimos el valor en octal
        cout << setw(6) << setbase(8) << valor << endl;
        break;
    }


    // Caso 4 para convertir de octal a decimal
    case 4:
    {
        cout << "Introdusca valor octal:";
        cin >> valor;

        // Imprimimos el valor en decimal
        cout << setw(6) << setbase(10) << valor << endl;
        break;
    }
    }
    
    // Le damos un mensaje al usuario
    getch();
}