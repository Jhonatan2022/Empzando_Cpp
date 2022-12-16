#include <iostream>
#include <iomanip.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

using namespace std;

void crea_vect(int vector[100], int *n);
void borra_vect(int vector[100], int *n);
void agrega_vect(int vector[100], int *n);
void muestra_vect(int vector[100], int *n);
void busca_vect(int vector[100], int *n);
void modifica_vect(int vector[100], int *n);
int vector[100];

int main(int argc, char const *argv[])
{
    int n;
    char opc;
    crea_vect(&vector[100], &n);
    clrscr();
    for (;;)
    {
        cout << endl
             << endl;
        cout << "\tMenu de opciones" << endl;
        cout << "\t================";
        cout << "\n1) Crear un vector nuevo.";
        cout << "\n2) Borrar un elemento.";
        cout << "\n3) Agregar un elemento.";
        cout << "\n4) Mostrar el vector.";
        cout << "\n5) Buscar un elemento en el vector.";
        cout << "\n6) Modifica un elemento en el vector.";
        cout << "\n7) Salir de la aplicacion.";
        cout << "\nSeleccione una opcion:";
        cin >> opc;
        switch (opc)
        {
        case '1':
            crea_vect(&vector[100], &n);
            break;
        case '2':
            borra_vect(&vector[100], &n);
            break;
        case '3':
            agrega_vect(&vector[100], &n);
            break;
        case '4':
            muestra_vect(&vector[100], &n);
            break;
        case '5':
            busca_vect(&vector[100], &n);
            break;
        case '6':
            modifica_vect(&vector[100], &n);
            break;
        case '7':
            break;
        }
        if (opc == '7')
            break;
    }
    cout << "\nPrograma Elaborado por: Ronald R. Torrejon Noriega.";
    getch();
}
void crea_vect(int vector[100], int *n)
{
    int i;
    char rpt;
    randomize();
    cout << "\nIngrese el numero de terminos para el vector: ";
    cout << "\n<Valor maximo 100> ";
    cin >> (*n);
    cout << "Desea que el computador genere los numeros? [S]o[N]";
    cin >> rpt;
    rpt = toupper(rpt);
    if (rpt == 'N')
    {
        for (i = 0; i <= (*n - 1); i++)
        {
            cout << "\nIngrese el " << i + 1 << " valor: ";
            cin >> vector[i];
        }
    }
    else
    {
        for (i = 0; i <= (*n - 1); i++)
        {
            vector[i] = random(100) + 1;
            cout << "\nIntroduciendo el " << i + 1 << " valor: " << vector[i];
        }
    }
}
void borra_vect(int vector[100], int *n)
{
    int e, i;
    cout << "\nIntrodusca el numero del elemento a eliminar: ";
    cin >> e;
    for (i = e; i < (*n - 1); i++)
    {
        vector[i - 1] = vector[i];
    }
}
void agrega_vect(int vector[100], int *n)
{
    int valor, a, i;
    cout << "\nEn donde desea ubicar el nuevo elemento? ";
    cin >> a;
    for (i = (*n - 1); i >= a; i = i - 1)
    {
        vector[i] = vector[i - 1];
    }
    cout << "Ingrese el nuevo valor: ";
    cin >> valor;
    vector[a - 1] = valor;
}
void muestra_vect(int vector[100], int *n)
{
    int i;
    cout << "\nLos valores introducidos al vector son:" << endl;
    for (i = 0; i <= (*n - 1); i++)
    {
        cout << "" << vector[i] << "  ";
    }
}
void busca_vect(int vector[100], int *n)
{
    int valor, i;
    cout << "\nEscriba el valor que desea buscar en el vector? ";
    cin >> valor;
    for (i = 0; i < (*n - 1); i++)
    {
        if (vector[i] == valor)
        {
            cout << "\nValor hallado en A[" << i + 1 << "]";
        }
    }
}
void modifica_vect(int vector[100], int *n)
{
    int m, valor;
    cout << "Ingrese la ubicacion del elemento a modificar: ";
    cin >> m;
    cout << "Nuevo numero: ";
    cin >> valor;
    vector[m - 1] = valor;
}