// Importar librerias
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <ctype.h>

using namespace std;

// Función para calcular las notas
void calculonotas(int p1, int p2, int p3, int p4, int ep, int ef, float *promp, float *promf);

int main(int argc, char const *argv[])
{

    // Declaración de variables
    int p1, p2, p3, p4;
    float ep, ef, promp, promf;
    char rpt;

    // Pedimos las notas
    for (;;)
    {
        cout << "\nNota 1: ";
        cin >> p1;

        cout << "\nNota 2: ";
        cin >> p2;

        cout << "\nNota 3: ";
        cin >> p3;

        cout << "\nNota 4: ";
        cin >> p4;

        cout << "\nIngrese su parcial: ";
        cin >> ep;

        cout << "\nIngrese su final: ";
        cin >> ef;

        // Calculamos las notas
        calculonotas(p1, p2, p3, p4, ep, ef, &promp, &promf);

        // Mostramos los resultados
        cout << "\nEl promedio de practicas es: " << promp;
        cout << "\nEl promedio final es: " << promf;
        cout << "\nDesea Salir: [s] o [n]? ";
        cin >> rpt;
        rpt = toupper(rpt);
        if (rpt == 'S')
            break;
    }
}

// Función para calcular las notas
void calculonotas(int p1, int p2, int p3, int p4, int ep, int ef, float *promp, float *promf)
{
    // Declaración de variables
    int n, m, menor;

    // Calculamos el promedio de practicas
    if (p3 > p4)
        n = p4;
    else
        n = p3;
    if (n > p2)
        m = p2;
    else
        m = n;
    if (m > p1)
        menor = p1;
    else
        menor = m;

    // Calculamos el promedio de practicas
    *promp = (p1 + p2 + p3 + p4 - menor) / 3.0;
    *promf = (*promp + ep + 2 * ef) / 4.0;
}