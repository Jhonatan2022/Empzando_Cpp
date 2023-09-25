#include <iostream>
using namespace std;

// Declaracion de variables
string nombre;
int edad;

int main(int argc, char const *argv[])
{
    // Pedimos al usuario que ingrese los datos necesarios
    cout << "Digite el nombre de la persona: ";
    cin >> nombre;

    cout << "Digite la edad de la persona: ";
    cin >> edad;

    // Determinamos a que grupo pertenece la persona
    if (edad >= 0 && edad <= 6)
    {
        cout << nombre + "\tEs un infante." << endl;
    }

    // Determinamos a que grupo pertenece la persona
    if (edad >= 7 && edad <= 12)
    {
        cout << nombre + "\tEs un joven." << endl;
    }

    if (edad >= 13 && edad <= 18)
    {
        cout << nombre + "\tPertenece a los adolecentes." << endl;
    }

    if (edad >= 19 && edad <= 30)
    {
        cout << nombre + "\tLargo de aca anciano. >:y" << endl;
    }

    else
    {
        cout << nombre + "\tEste ya esta muerto" << endl;
    }

    // Pausamos el programa para que el usuario pueda leer los resultados
    system("pause");
    return EXIT_SUCCESS;
}