// Crearemos un programa que calcule el factorial de un numero
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    // Definimos las variables que vamos a utilizar
    int numero, factorial = 1;

    // Pedimos al usuario que ingrese un numero
    cout << "Digite un numero: ";
    cin >> numero;

    // Creamos una condicion para que el numero sea mayor a 0
    if (numero < 0) {
        cout << "El numero debe ser mayor a 0" << endl;
        system("pause");
        return 0;

        // Creamos una condicion para que el numero sea igual a 0
    } else if (numero == 0) {
        cout << "El factorial de 0 es: 1" << endl;
        system("pause");
        return 0;
    } 
    // Creamos una condicional en caso que ingrese una letra
    else if (numero == 'a') {
        cout << "El factorial de a es: 1" << endl;
        system("pause");
        return 0;
    }


    // Calculamos el factorial del numero
    for (int i = 1; i <= numero; i++) {

        // factorial = factorial * i;
        factorial *= i;
    }

    // Mostramos el resultado
    cout << "\nEl factorial de" << numero << " es: " << factorial << endl;

    system("pause");
    return 0;
}