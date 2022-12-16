#include <iostream>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <iomanip.h>
#include <stdio.h>

using namespace std;

ordena(char cad[15][20], int n);
char nombres[15][20];

main()
{
    int i, n;
    clrscr();
    cout << "Cuantos nombres ingresara: ";
    cin >> n;
    for (i = 0; i <= n - 1; i++)
    {
        cout << "Ingrese " << i + 1 << " nombre: ";
        gets(nombres[i]);
    }
    cout << "\nLista sin ordenar" << endl;
    cout << "=================" << endl;
    for (i = 0; i <= n - 1; i++)
    {
        cout << "\t" << nombres[i] << endl;
    }
    ordena(nombres, n);
    cout << "\nLista ordenada" << endl;
    cout << "==============" << endl;
    for (i = 0; i <= n - 1; i++)
    {
        cout << "\t" << nombres[i] << endl;
    }
    getch();
}
ordena(char cad[15][20], int n)
{
    char aux[15];
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1; j++)
            if (strcmp(cad[j], cad[j + 1]) > 0)
            {
                strcpy(aux, cad[j]);
                strcpy(cad[j], cad[j + 1]);
                strcpy(cad[j + 1], aux);
            }
}