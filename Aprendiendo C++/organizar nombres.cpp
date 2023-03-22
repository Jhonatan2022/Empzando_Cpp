// Importar librerias
#include <iostream>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <iomanip.h>
#include <stdio.h>

using namespace std;

// Función para ordenar los nombres
ordena(char cad[15][20], int n);
char nombres[15][20];

main()
{
    // Declaración de variables
    int i, n;

    // Pedimos los nombres
    clrscr();
    cout << "Cuantos nombres ingresara: ";
    cin >> n;

    // Pedimos los nombres
    for (i = 0; i <= n - 1; i++)
    {
        // Pedimos el nombre
        cout << "Ingrese " << i + 1 << " nombre: ";
        gets(nombres[i]);
    }

    // Mostramos los nombres sin ordenar
    cout << "\nLista sin ordenar" << endl;
    cout << "=================" << endl;

    // Mostramos los nombres
    for (i = 0; i <= n - 1; i++)
    {
        cout << "\t" << nombres[i] << endl;
    }

    // Ordenamos los nombres
    ordena(nombres, n);

    // Mostramos los nombres ordenados
    cout << "\nLista ordenada" << endl;
    cout << "==============" << endl;
    for (i = 0; i <= n - 1; i++)
    {
        cout << "\t" << nombres[i] << endl;
    }
    getch();
}

// Función para ordenar los nombres
ordena(char cad[15][20], int n)
{
    // Declaración de variables
    char aux[15];
    int i, j;

    // Ordenamos los nombres
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1; j++)
            if (strcmp(cad[j], cad[j + 1]) > 0)
            {
                strcpy(aux, cad[j]);
                strcpy(cad[j], cad[j + 1]);
                strcpy(cad[j + 1], aux);
            }
}