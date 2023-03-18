// Implementar una clase derivada de otra clase
#include <iostream>
#include <math.h>
#include <ctype.h>
#include <conio.h>

using namespace std;

// Declaracion de variables
const double pi = 3.1416;
class circulo
{
// Atributos
protected:
    double radio;

// Metodos
public:

    // Funcion principal
    void asignar(double R) { radio = R; }
    double area() { return (pi * pow(radio, 2)); }
    void mostrar_data()
    {
        cout << "Radio =\t" << radio << endl;
        cout << "Area =\t" << area() << endl
             << endl;
        cout << "Continuar..." << endl
             << endl;
        getch();
    }
};
class cilindro : public circulo
{
protected:
    double altura;

public:
    void asignar(double r, double h)
    {
        altura = h;
        radio = r;
    }

    // Funcion principal
    double volumen() { return (4 * pi * pow(radio, 3) / 3.0); }

    // Funcion principal
    void mostrar_data()
    {
        // Funcion principal
        cout << "Radio= " << radio << endl;
        cout << "Volumen= " << volumen() << endl
             << endl;
        cout << "Continuar..." << endl;
        getch();
    }
};


// Funcion principal
main()
{
    // Declaracion de variables
    circulo Cir1;
    cilindro Cil1;
    double Ra, altura;

    // Funcion principal
    cout << "Calcularemos el area de un circulo:" << endl;
    cout << "Ingrese el radio: ";
    cin >> Ra;
    cout << "Ingrese la altura del cilindro (Si es circulo ponga 0):\t";
    cin >> altura;
    Cir1.asignar(Ra);
    cout << endl;
    Cir1.mostrar_data();
    Cil1.asignar(Ra, altura);
    Cil1.mostrar_data();
}