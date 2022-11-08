#include <iostream>
using namespace std;
int a, b, numero, vinicio = 0, vfinal = 0, acel = 0, t = 0, op;
int main(int argc, char const *argv[])
{
    cout << "Digite un la opcion que desea usar \n 1. Calculadora sencilla \n 2. Tablas de multiplicar \n 3. Calcular la acelarecion de un vehiculo. \nOpcion : ";
    cin >> op;
    switch (op)
    {
    case 1:
        // Calculadora sencilla
        cout << "Ingresa el primer numero: ";
        cin >> a;
        cout << "Ingresa el segundo numero: ";
        cin >> b;
        cout << "La suma de los numeros es: " << a + b << endl;
        cout << "La resta de los numeros es: " << a - b << endl;
        cout << "La multiplicacion de los numeros es: " << a * b << endl;
        cout << "La division de los numeros es: " << a / b << endl;
        cout << "El residuo es: " << a % b << endl;
        system("pause");
        return EXIT_SUCCESS;
    case 2: // Imprimir tablas de multiplicar de un número ingresado
        cout << "\nSegundo ejercicio con tablas de multiplicar" << endl;
        do
        {
            cout << "Ingrese un numero para ver su tabla de multiplicar: ";
            cin >> numero;
        } while ((numero < 1) || (numero > 30));
        for (int i = 1; i <= 10; i++)
        {
            cout << numero << " * " << i << " = " << numero * i << endl;
        }
        system("pause");
        return EXIT_SUCCESS;
    case 3: // calcular la velocidad
        cout << "\nCalcular la aceleracion de un vehiculo: ";
        cout << "Introduce la velocidad inicial: ";
        cin >> vinicio;
        cout << "Introduce la velocidad final: ";
        cin >> vfinal;
        cout << "Introduce el tiempo: ";
        cin >> t;
        acel = (vfinal - vinicio) / t;
        cout << "La acelacion del vehiculo es:\n " << acel << endl;
        system("pause");
        return EXIT_SUCCESS;
    default: // No ha dijitado una opcion disponible
        cout << "No ha elegido una opcion del 1 al 3";
    }
}