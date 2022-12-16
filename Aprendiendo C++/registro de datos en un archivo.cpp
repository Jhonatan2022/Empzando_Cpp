#include <iostream>
#include <iomanip.h>
#include <conio.h>
#include <fstream>
#include <stdio.h>
#include <ctype.h>
#include <fcntl.h>

using namespace std;

struct dato
{
    char nombre[30];
    char codigo[10];
    char edad[2];
};
dato alumno[20];

main()
{
    gotoxy(15, 1);
    cout << "Amacenamiento de datos de los alumnos UNI-FIM";
    gotoxy(15, 2);
    cout << "=============================================";
    fstream archivo;
    int i = 0;
    char rpt;
    archivo.open("archivo.txt", ios::binary | ios::out);
    for (;;)
    {
        cout << endl
             << "Nombre (" << i + 1 << "): ";
        gets(alumno[i].nombre);
        cout << endl
             << "Codigo(" << i + 1 << "): ";
        gets(alumno[i].codigo);
        cout << endl
             << "Edad(" << i + 1 << "): ";
        cin >> (alumno[i].edad);
        archivo.write(alumno[i].nombre, sizeof(alumno[i].nombre));
        archivo.write(alumno[i].codigo, sizeof(alumno[i].codigo));
        archivo.write(alumno[i].edad, sizeof(alumno[i].edad));
        cout << endl
             << "\nDesea ingresar otro nombre? [s][n]: ";
        cin >> rpt;
        i = i + 1;
        rpt = toupper(rpt);
        if (rpt == 'N')
            break;
    }
    archivo.close();
    cout << endl<< endl<< "Gracias...";
    getch();
}