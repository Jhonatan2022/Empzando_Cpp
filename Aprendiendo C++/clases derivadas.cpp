#include <iostream>
#include <math.h>
#include <ctype.h>
#include <conio.h>

using namespace std;

const double pi = 3.1416;
class circulo
{
protected:
    double radio;

public:
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
    double volumen() { return (4 * pi * pow(radio, 3) / 3.0); }
    void mostrar_data()
    {
        cout << "Radio= " << radio << endl;
        cout << "Volumen= " << volumen() << endl<< endl;
        cout << "Continuar..." << endl;
        getch();
    }
};

main()
{
    circulo Cir1;
    cilindro Cil1;
    double Ra, altura;
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